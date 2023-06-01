#include "class.h"
#include "Student.h"
#include <iostream>

using namespace std;

int main() {
    Class C = Class("Math");
    Class C1 = Class("English");

    Student S = Student("John","john@gmail.com",001,{C});
    Student S2 = Student("Adam", "adam@gmail.com",002,{C});
    Student S3 = Student("Steve","steve@gmail.com",003,{C1});

    S3.enrollclass(C);

    string m = "March";
    string p = "present";
    string p2 = "absent";


    S.markAttendance(C, m , 1, p);
    S.markAttendance(C,m,2,p);
    S.markAttendance(C,m,3,p2);

    S2.markAttendance(C, m , 1, p2);
    S2.markAttendance(C,m,2,p2);
    S2.markAttendance(C,m,3,p);

    S3.markAttendance(C, m , 1, p);
    S3.markAttendance(C,m,2,p2);
    S3.markAttendance(C,m,3,p);

    //C.generateAttendanceReport(1,3,m);

    C.displayStudentList();
    //C1.displayStudentList();

    S.displayClasses();
    S3.displayClasses();

}