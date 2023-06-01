#ifndef PEOPLE_H
#define PEOPLE_H
#include <iostream>
#include <string>

using namespace std;

class People{
protected:

    string name;
    string email;
    int ID;
public:

    People(string n, string e, int i);

    void setName(string n);
    void setEmail(string e);
    void setID(int id);

    string getName () const;
    string getEmail();
    int getID() const;

};

#endif



