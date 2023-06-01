#include "student.h"
#include "class.h"

Student::Student():People("","",0){
    Classes = {};
}


Student::Student(const string& n, const string& e, int id, const vector<Class>& c)
        : People(n, e, id), Classes(c) {
    for (Class& cl : Classes) {
        cl.addStudent(*this);
    }
}


void Student::enrollclass(Class& classObj){
    Classes.push_back(classObj);
    classObj.addStudent(*this);
}


void Student::markAttendance(Class& classObj, string& m, int d, string& s){
    classObj.markAttendance(this->getID(),m,d,s);
}

void Student::displayClasses() {
    cout << "Classes enrolled by " << getName() << ":" << endl;
    for (const Class& classObj : Classes) {
        cout << classObj.getName() << endl;
    }
}