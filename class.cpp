#include "class.h"
#include "student.h"


Class::Class(const string& n){
    className = n;
    size = 0;
}

void Class::setName(string n){
    className = n;
}

string Class::getName()const{
    return className;
}


void Class::setSize(int s){
    size = s;
}
int Class::getSize(){
    return size;
}


void Class::addStudent(Student& s){
   studentList.push_back(s);

}

void Class::markAttendance(int studentId, string &m, int d, string &s){
    for(int i=0;i<getSize();i++){
        if(studentList[i].getID() == studentId) {
            attendanceRecords a;
            a.date = d;
            a.month = m;
            a.status = s;

            Attendance.push_back(a);
        }
    }
}


void Class::generateAttendanceReport(int startDate, int endDate, const string& month) const {
    cout << "Attendance Report - " << className << endl;
    cout << "Date Range: " << startDate << " to " << endDate << endl;
    cout << "Month: " << month << endl;
    cout << "----------------------" << endl;

    for (const Student& student : studentList) {
        cout << "Hello does this even work";
        bool studentFound = false;
        for (const attendanceRecords& attendance : Attendance) {
            if (attendance.ID == student.getID() && attendance.month == month && attendance.date >= startDate && attendance.date <= endDate) {
                cout << "Student ID: " << student.getID() << endl;
                cout << "Student Name: " << student.getName() << endl;
                cout << "Date: " << attendance.date << endl;
                cout << "Status: " << attendance.status << endl;
                cout << "----------------------" << endl;
                studentFound = true;
            }
        }
        if (!studentFound) {
            cout << "No attendance records found for Student ID: " << student.getID() << endl;
            cout << "----------------------" << endl;
        }
    }
}


void Class::displayStudentList(){
    cout << "Student list for " << getName() << endl;
    for (const Student& student : studentList) {
        cout << student.getName() << endl << endl;
    }
}



