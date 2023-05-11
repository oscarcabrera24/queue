// Goat.h
#ifndef GOAT_H
#define GOAT_H
#include <iostream>
using namespace std;  

class Goat {
private:
    string name;
    int age;
    string color;
public:
    // constructors
    Goat();
    Goat(string, int, string);

    // setters and getters
    void setName(string n)      { name = n; }
    string getName()            { return name; }
    void setAge(int a)          { age = a; }
    int getAge()                { return age; }
    void setColor(string c )    { color = c; }
    string getColor()           { return color; }

    // other methods
    void print();
};

#endif
