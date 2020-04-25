#ifndef DISTRICT_H
#define DISTRICT_H

#include <string>

using namespace std;

class District {
private:
    string name;
    string province;        
    // Seoul, Busan, Deagu, Incheon, Gwangju, Deajeon, Ulsan, Sejong, Kyungki, Kangwon, Chungcheong, Jeolla, Kyungsang, Jeju 
    string spectrum;        // progressive, moderate, conservative
    int togetherApproval;    // the approval rate of together party; (99 - togetherApproval) to integration party

public:

    District();
    void setDistrictInfo(string name, string province, string spectrum, int togetherApproval);

    int getTogetherApproval();
    string getName();
    string getProvince();
    string getSpectrum();

    void setTogetherApproval(int newApproval);
    
};


#endif