#ifndef DOCTOR_H
#define DOCTOR_H

#include<iostream>
#include"Person.h"

using namespace std;

class Doctor : public Person
{
private:
    string speciality;
public:
    Doctor(void);
    Doctor(string speciality);
    ~Doctor(void);
    void setSpeciality(string speciality);
    void setIllness(string illness);
    void setAge(int age);
    void setID(string ID);
    string getSpeciality(void) const;
    void Infos(void);
};

#endif
