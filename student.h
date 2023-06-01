#ifndef STUDENT_H
#define STUDENT_H

#include "people.h"

#include <iostream>
#include<vector>
#include<string>



class Class;

class Student: public People{
    vector<Class> Classes;

public:
    Student();
    Student(const string& n, const string& e, int id, const vector<Class>& c);

    void enrollclass(Class& classObj);
    void markAttendance(Class& classObj, string& m, int d, string& s);

    void displayClasses() ;






};


#endif
