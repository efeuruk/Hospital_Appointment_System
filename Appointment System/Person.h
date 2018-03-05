#ifndef PERSON_H
#define PERSON_H

#include<iostream>

using namespace std;

class Person
{
  private:
      string name;
      string surname;
      string telephone;
      string date;
  public:
      Person(void);
      Person(string name,string surname,string telephone,string date);
      virtual ~Person(void);
      Person(const Person &p);
      void setName(string name);
      void setSurname(string surname);
      void setTelephone(string telephone);
      void setDate(string date);
      string getName(void) const;
      string getSurname(void) const;
      string getTelephone(void) const;
      string getDate(void) const;

      virtual void setIllness(string illness)=0;
      virtual void setAge(int age)=0;
      virtual void setID(string ID)=0;
      virtual void setSpeciality(string speciality)=0;
      virtual void Infos(void)=0; //pure virtual function
};

#endif
