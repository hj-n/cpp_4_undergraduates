#include <iostream>
#include <string>
#include <fstream>

#include "helper.h"
#include "constants.h"
#include "input_hidden.h"
#include "hidden_output.h"


using namespace std;

double loss_function(double* delta) {
    // TODO

    return 0;
}

void loss_function_backprop(double* result, int label_num, double* delta) {
    // TODO

}

int main() {
    random_init();

    cout << "==============================" << endl;
    cout << "Neural Network model for MNIST" << endl;
    cout << "EPOCH: " << EPOCH << endl;
    cout << "Learning rate: " << LR << endl;
    cout << "==============================" << endl;

    string training_image = "mnist/train-images.idx3-ubyte";
    string training_label = "mnist/train-labels.idx1-ubyte";
    int set_size = 60000;

    // mnist training set file open
    ifstream image;
    ifstream label;

    image.open(training_image.c_str(), ios::in | ios::binary); 
    label.open(training_label.c_str(), ios::in | ios::binary);

    // file header reading
    char c;
    for (int i = 1; i <= 16; ++i) image.read(&c, sizeof(char));
    for (int i = 1; i <= 8; ++i)  label.read(&c, sizeof(char));


    // initializing neural network
    Input_Hidden input_hidden(INPUT_NUM, HIDDEN_NUM);
    Hidden_Output hidden_output(HIDDEN_NUM, OUTPUT_NUM);

    double* input = new double[INPUT_NUM];
    double* delta = new double[OUTPUT_NUM];

    cout << "TRAINING START!!" << endl;
    cout << "Total dataset size: " << set_size << endl;

    double loss_sum = 0;
    for(int i = 1; i <= set_size; i++) {

        char label_char;
        label.read(&label_char, sizeof(char));
        int label_num = (int)label_char;

        for(int j = 0; j < INPUT_NUM; j++) {
            char number;
            image.read(&number, sizeof(char));
            input[j] = number == 0 ? 0 : 1;
        }
        for (int j = 0; j < EPOCH; j++) {
            double* result = hidden_output.forward(input_hidden.forward(input));
            loss_function_backprop(result, label_num, delta);
            if(j==0) loss_sum += loss_function(delta);
            //cout << endl;
            input_hidden.backprop(hidden_output.backprop(delta));
        }

        //cout << loss_function(delta) << endl;
        if(i % 3000 == 0) {
            cout << "Sample ~" << i << ": Average loss is " << (loss_sum / 3000) << endl;
            loss_sum = 0;
        }

        
    }
    string testing_image = "mnist/t10k-images.idx3-ubyte";
    string testing_label = "mnist/t10k-labels.idx1-ubyte";

    ifstream test_image;
    ifstream test_label;

    test_image.open(testing_image.c_str(), ios::in | ios::binary); 
    test_label.open(testing_label.c_str(), ios::in | ios::binary); 

    // file header reading
    for (int i = 1; i <= 16; ++i) test_image.read(&c, sizeof(char));
    for (int i = 1; i <= 8; ++i)  test_label.read(&c, sizeof(char));
    
    int test_set_size = 10000;

    int correct = 0;
    int wrong = 0;

    cout << "==============================" << endl;
    cout << "TESTING..." << endl;
    cout << "==============================" << endl;

    for(int i = 1; i <= test_set_size; i++) {

        char label_char;
        test_label.read(&label_char, sizeof(char));
        int label_num = (int)label_char;

        for(int j = 0; j < INPUT_NUM; j++) {
            char number;
            test_image.read(&number, sizeof(char));
            input[j] = number == 0 ? 0 : 1;
        }
        
        double* result = hidden_output.forward(input_hidden.forward(input));
        double max = 0;
        int max_label = -1;
        for(int k = 0; k < OUTPUT_NUM; k++) {
            if(max < result[k]) {
                max = result[k];
                max_label = k;

                double expected = (k == label_num) ? 1.0 : 0.0;
                delta[k] = -(expected - result[k]);
            }
        }
        //cout << loss_function(delta) << endl;

        //cout << max_label << " ";
        //cout << label_num << endl;

        if(max_label == label_num) {
            correct++;
        }
        else wrong++;
        

    }

    cout << "Test RESULT" << endl;
    cout << "Test set size: " << test_set_size << endl;
    cout << "Correct: " << correct << endl;
    cout << "Wrong: " << wrong << endl;
    cout << "Accuracy: " << (((double) correct) / 10000.0) << endl;

}