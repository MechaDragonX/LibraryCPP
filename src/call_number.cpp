#include <iostream>
#include <string>
#include "call_number.hpp"
using namespace std;

// Private
void CallNumber::makeClassNumber() {
    classNumber = className + to_string(classId);
}
void CallNumber::makeCutterNumbers() {
    for(int i = 0; i <= cutterNames.size(); i++) {
        cutterNumbers.push_back("." + cutterNames[i] + to_string(cutterIds[i]));
    }
}
void CallNumber::makeCallNumber() {
    fullCallNumber = classNumber;
    for(string str : cutterNumbers) {
        fullCallNumber += str;
    }
    fullCallNumber += " " + to_string(year);
}

// Public
CallNumber::CallNumber() {
    className = "";
    classId = 0;
    cutterNames = { };
    cutterIds = { };

    classNumber = "";
    cutterNumbers = { };
    year = 0;
    fullCallNumber = "";
}
CallNumber::CallNumber(string class_name, int class_id, string cutter_name, int cutter_id, int yr) :
    className(class_name), classId(class_id), year(yr) {
    cutterNumbers.push_back("." + cutter_name + to_string(cutter_id));

    makeClassNumber();
    makeCallNumber();
}
// CallNumber::CallNumber(string class_name, int class_id, vector<string> cutter_names, vector<int> cutter_ids, int yr) :
//     className(class_name), classId(class_id), cutterNames(cutter_names), cutterIds(cutter_ids), year(yr) {
//     makeClassNumber();
//     makeCutterNumbers();
//     makeCallNumber();
// }

string CallNumber::toString() {
    return fullCallNumber;
}
