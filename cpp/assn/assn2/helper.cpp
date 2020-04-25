#include "helper.h"

void printMap(int* currentStat) {   // true for together party, false for integration party
    int index = 0;
    cout << "■: Together, □: Integration, *: Swing state" << endl;
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 25; j++) {
            if(currentStat[index] == 1) cout << "■";
            else if (currentStat[index] == 3) cout << "□";
            else cout << "*";
            index++;
        }
        cout << endl;
    }
}