#include <iostream>
#include "helper.h"
#include "election.h"
#include "party.h"

using namespace std;

string provinces[16] = {"Seoul", "Busan", "Incheon", "Gwangju", 
                      "Deajeon", "Ulsan", "Sejong", "Kyungki", 
                      "Kwangwon", "Chungbuk", "Chungnam", "Jeonbuk", 
                      "Jeonnam", "Kyungbuk", "Kyungnam", "Jeju"};



int main() {

    cout << "You can be the Representative of political party..." << endl;
    cout << "You must win the election!!" << endl;
    cout << "Select your party" << endl;
    cout << "1. Together party" << endl;
    cout << "2. Integration party" << endl;
    int party;
    cout << "INPUT: ";
    cin >> party;
    while(party != 1 && party != 2) {
        cout << "Select again!!" << endl;
        cout << "INPUT: ";
        cin >> party;
    }
    string partyName = party == 1 ? "Together" : "Integration";
    cout << "Okay!! Now you're the representative of " << partyName << " party!!" << endl;
    cout << "You have 10 weeks to win the election!!" << endl;
    cout << "Each week, you can check the status and select the week's policy." << endl;
    cout << "Good Luck!!" << endl;

    Election* election = new Election();

    // TODO
  

    for(int i = 0; i < 10; i++) {
        cout << "\nWeek " << (i + 1) << endl;

        // TODO
    }

    // TODO


}
