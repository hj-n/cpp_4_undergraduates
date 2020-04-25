#include "district.h"


District :: District() {
    this->name = "";
    this->province = "";
    this->spectrum = "";
    this->togetherApproval = -1;
}

void District :: setDistrictInfo(string name, string province, string spectrum, int togetherApproval) {
    this->name = name;
    this->province = province;
    this->spectrum = spectrum;
    this->togetherApproval = togetherApproval;
}
int District :: getTogetherApproval() {
    //TODO
    return 0;
}
string District :: getName() {
    //TODO
    return "";
}
string District :: getProvince() {
    //TODO
    return "";
}
string District :: getSpectrum() {
    //TODO
    return "";
}

void District :: setTogetherApproval(int newApproval) {
    // TODO
    
    return;
}