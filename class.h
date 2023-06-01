
#ifndef CLASS_H
#define CLASS_H

#include <string>
#include <vector>
using namespace std;

class Student;

struct attendanceRecords{
    int ID;
    int date;
    string month;
    string status;

};

class Class {
    string className;
    vector<Student> studentList;
    vector<attendanceRecords> Attendance;
    int size;

public:

    Class(const string& n);

    void setSize(int s);
    int getSize();

    void setName(string n);
    string getName() const;


    void addStudent(Student& s);

    void markAttendance(int studentId, string &m, int d, string &s);
    void generateAttendanceReport(const int startDate, int endDate, const string& month) const;

    void displayStudentList();


};

#endif