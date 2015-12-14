#ifndef COMPUTER_H
#define COMPUTER_H

#include <iostream>

using namespace std;
//This Class holds a Computer and it's values
class Computer
{
public:
    Computer();
    Computer(int idd, int yearr, string namee, string type,string abou);
    Computer(int yearr, string namee, string typee,string abou);
    // The constructors, with and without id

    void setYear(int i);
    void setName(string str);
    void setType(string str);
    // These are the set functions, they are used to set the values of the private variables

    int getId() const;
    int getYear() const;
    string getName() const;
    string getType() const;
    string getAbout() const;
    // These are the getline functions, they are used to get the values of the private variables

    friend bool operator == (const Computer& c1, const Computer& c2);
    // Overloaded == operator, checks if two computers are the same

private:
    int id;
    int year;
    string name;
    string type;
    string about;
};

#endif // COMPUTER_H
