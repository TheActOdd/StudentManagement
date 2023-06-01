#include "people.h"
#include <iostream>

using namespace std;

People::People(string n, string e, int i){

    name = n;
    email = e;
    ID = i;

}
void People::setName(string n){
    name = n;
}

void People::setEmail(string e){
    email = e;
}

void People::setID(int id){
    ID = id;
}

string People::getName() const{
    return name;
}

string People::getEmail(){
    return email;
}

int People::getID() const{
    return ID;
}


