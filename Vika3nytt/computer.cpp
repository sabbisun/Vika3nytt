#include "computer.h"

Computer::Computer()
{

}

Computer::Computer(int idd, int yearr, string namee, string typee,string abou)
{
    id = idd;
    year = yearr;
    name = namee;
    type = typee;
    about = abou;
}

Computer::Computer(int yearr, string namee, string typee, string abou)
{
    year = yearr;
    name = namee;
    type = typee;
    about = abou;
}

void Computer::setYear(int i)
{
    year = i;
}

void Computer::setName(string str)
{
    name = str;
}

void Computer::setType(string str)
{
    type = str;
}

int Computer::getId() const
{
    return id;
}

int Computer::getYear() const
{
    return year;
}

string Computer::getName() const
{
    return name;
}

string Computer::getType() const
{
    return type;
}

string Computer::getAbout() const
{
    return about;
}

bool operator == (const Computer& c1, const Computer& c2)
{
    return(c1.getName() == c2.getName() && c1.getType() == c2.getType() && c1.getYear() == c2.getYear());
}


