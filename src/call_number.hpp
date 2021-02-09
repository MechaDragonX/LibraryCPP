#include <string>
#include <vector>
using namespace std;

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

        CallNumber(string class_name, int class_id, string cutter_name, int cutter_id, int yr);
        CallNumber(string class_name, int class_id, vector<string> cutter_names, vector<int> cutter_ids, int yr);

        string toString();
};
