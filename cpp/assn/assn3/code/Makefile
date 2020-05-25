run: train.o helper.o perceptron.o sigmoid.o bridge.o input_hidden.o hidden_output.o
	g++ -o program train.o helper.o perceptron.o sigmoid.o bridge.o input_hidden.o hidden_output.o

main.o: train.cpp
	g++ -c train.cpp

helper.o: helper.cpp helper.h
	g++ -c helper.cpp

perceptron.o: perceptron.cpp perceptron.h
	g++ -c perceptron.cpp

sigmoid.o: sigmoid.cpp sigmoid.h
	g++ -c sigmoid.cpp

bridge.o: bridge.cpp bridge.h
	g++ -c bridge.cpp

input_hidden.o: input_hidden.cpp input_hidden.h
	g++ -c input_hidden.cpp

hidden_output.o: hidden_output.cpp hidden_output.h
	g++ -c hidden_output.cpp

clean:
	rm program
	rm *.o

