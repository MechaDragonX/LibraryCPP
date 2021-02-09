#include <string>
#include <vector>
using namespace std;

#ifndef CALL_NUMBER_HPP
#define CALL_NUMBER_HPP

class CallNumber {
    private:
        string className;
        int classId;
        vector<string> cutterNames;
        vector<int> cutterIds;

        void makeClassNumber();
        void makeCutterNumbers();
    public:
        string classNumber;
        vector<string> cutterNumbers;
        int year;

        CallNumber();
        CallNumber(string class_name, int class_id, string cutter_name, int cutter_id, int yr);
        CallNumber(string class_name, int class_id, vector<string> cutter_names, vector<int> cutter_ids, int yr);

        string toString();
};

#endif
