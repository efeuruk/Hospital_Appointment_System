#include <iostream>
#include "Person.h"
#include "Patient.h"
#include "Doctor.h"

using namespace std;

int main ()
{
    Person *PObj,*PObj2;
    PObj=new Patient;
    PObj2= new Doctor;

    string tempID;
    string tempName;
    string tempSurname;
    int tempAge;
    string tempTelephone;
    int c1;
    int n1;
    int p1;
    int choice;
    string Cardiology="Cardiology";
    string Neurology="Neurology";
    string Physiotherapy="Physiotherapy";
    string CName1="Murat";
    string CSurname1="Sener";
    string CName2="Naser";
    string CSurname2="Can";
    string CSpeciallity="Cardiology";
    string NName1="Aybars";
    string NSurname1="Akkor";
    string NName2="Soner";
    string NSurname2="Buyukkinaci";
    string NSpeciallity="Neurology";
    string PName1="Alper";
    string PSurname1="Gokce";
    string PName2="Ihsan";
    string PSurname2="Albayrak";
    string PSpeciallity="Physiotherapy";

    string setDate1="09:00-10:00";
    string setDate2="10:00-11:00";
    string setDate3="11:00-12:00";

    string setDate4="13:00-14:00";
    string setDate5="14:00-15:00";
    string setDate6="15:00-16:00";
    string setDate7="All hours";
        for(;;)
   {
    cout<<"  --WELCOME TO MEDICAL PARK HOSPITAL--"<<endl<<endl;
    cout<<"--We Hope You Will Get A Good Treatment--"<<endl<<endl;
    cout<<"Would you like to have an appointment? 1 for YES 0 for NO"<<endl;
    cin>>choice;
    if(choice==1)
    {
    cout<<"--Please Enter Your Informations--"<<endl<<endl;
    cout<<"ID        :";
    cin>>tempID;
    PObj->setID(tempID);
    cout<<"Name      :";
    cin>>tempName;
    PObj->setName(tempName);
    cout<<"Surname   :";
    cin>>tempSurname;
    PObj->setSurname(tempSurname);
    cout<<"Age       :";
    cin>>tempAge;
    PObj->setAge(tempAge);
    cout<<"Telephone :";
    cin>>tempTelephone;
    PObj->setTelephone(tempTelephone);

    int x;
    go:cout<<endl<<"--Choose Hospital Department--"<<endl;
    cout<<"1 -) Cardiology"<<endl;
    cout<<"2 -) Neurology"<<endl;
    cout<<"3 -) Physiotherapy"<<endl;
    cin>>x;
    if(x==1)
    {
       PObj->setIllness(Cardiology);
    }
    else if(x==2)
    {
        PObj->setIllness(Neurology);
    }
    else if(x==3)
    {
        PObj->setIllness(Physiotherapy);
    }

    switch(x)
    {
    case 1:
        int c;
        cout<<"-Cardiology Doctors-"<<endl;
        cout<<"1-)Dr. Murat Sener(09:00-12:00)"<<endl;
        cout<<"2-)Dr. Naser Can  (13:00-16:00)"<<endl;
        cin>>c;
        if (c==1)
        {
            PObj2->setName(CName1);
            PObj2->setSurname(CSurname1);
            PObj2->setSpeciality(CSpeciallity);
        }
        else if(c==2)
        {
            PObj2->setName(CName2);
            PObj2->setSurname(CSurname2);
            PObj2->setSpeciality(CSpeciallity);
        }
        else
                PObj2->setDate(setDate7);
        switch(c)
        {
        case 1:
            cout<<endl<<"Dr. Murat Sener's Working Hours:"<<endl;
            cout<<"Weekdays"<<endl;
            cout<<"1 - 09:00 - 10:00"<<endl;
            cout<<"2 - 10:00 - 11:00"<<endl;
            cout<<"3 - 11:00 - 12:00"<<endl;
            cin>>c1;
            if(c1==1)
                PObj2->setDate(setDate1);
            else if(c1==2)
                PObj2->setDate(setDate2);
            else if(c1==3)
                PObj2->setDate(setDate3);
            else
                PObj2->setDate(setDate7);
            break;
        case 2:
            cout<<"Dr. Naser Can's Working Hours:"<<endl;
            cout<<"Weekdays"<<endl;
            cout<<"1 - 13:00 - 13:00"<<endl;
            cout<<"2 - 14:00 - 15:00"<<endl;
            cout<<"3 - 15:00 - 16:00"<<endl;
            cin>>c1;
            if(c1==1)
                PObj2->setDate(setDate4);
            else if(c1==2)
                PObj2->setDate(setDate5);
            else if(c1==3)
                PObj2->setDate(setDate6);
            else
                PObj2->setDate(setDate7);
            break;
        default:
            cout<<"Wrong Entry!"<<endl;
        }
        break;

    case 2:
        int n;
        cout<<"-Neurology Doctors-"<<endl;
        cout<<"1-)Dr. Aybars Akkor     (09:00-12:00)"<<endl;
        cout<<"2-)Dr. Soner Buyukkinaci(13:00-16:00)"<<endl;
        cin>>n;
        if (n==1)
        {
            PObj2->setName(NName1);
            PObj2->setSurname(NSurname1);
            PObj2->setSpeciality(NSpeciallity);
        }
        else if(n==2)
        {
            PObj2->setName(NName2);
            PObj2->setSurname(NSurname2);
            PObj2->setSpeciality(NSpeciallity);

        }
        else
                PObj2->setDate(setDate7);

        switch(n)
        {
        case 1:
            cout<<endl<<"Dr. Aybars Akkor's Working Hours:"<<endl;
            cout<<"Weekdays"<<endl;
            cout<<"1 - 09:00 - 10:00"<<endl;
            cout<<"2 - 10:00 - 11:00"<<endl;
            cout<<"3 - 11:00 - 12:00"<<endl;
            cin>>n1;
            if(n1==1)
                PObj2->setDate(setDate1);
            else if(n1==2)
                PObj2->setDate(setDate2);
            else if(n1==3)
                PObj2->setDate(setDate3);
            else
                PObj2->setDate(setDate7);
            break;
        case 2:
            cout<<"Dr. Soner Buyukkinaci's Working Hours:"<<endl;
            cout<<"Weekdays"<<endl;
            cout<<"1 - 13:00 - 13:00"<<endl;
            cout<<"2 - 14:00 - 15:00"<<endl;
            cout<<"3 - 15:00 - 16:00"<<endl;
            cin>>n1;
            if(n1==1)
                PObj2->setDate(setDate4);
            else if(n1==2)
                PObj2->setDate(setDate5);
            else if(n1==3)
                PObj2->setDate(setDate6);
            else
                PObj2->setDate(setDate7);

            break;
            default:
            cout<<"Wrong Entry!"<<endl;
        }
        break;

    case 3:
        int p;
        cout<<"Physiotherapy Doctors"<<endl;
        cout<<"1-)Dr. Alper Gokce   (09:00-12:00)"<<endl;
        cout<<"2-)Dr. Ihsan Albayrak(13:00-16:00)"<<endl;
        cin>>p;
        if (p==1)
        {
            PObj2->setName(PName1);
            PObj2->setSurname(PSurname1);
            PObj2->setSpeciality(PSpeciallity);
        }
        else if(p==2)
        {
            PObj2->setName(PName2);
            PObj2->setSurname(PSurname2);
            PObj2->setSpeciality(PSpeciallity);
        }
        else
        {
                PObj2->setDate(setDate7);
        }
        switch(p)
        {
        case 1:
            cout<<endl<<"Dr. Alper Gokce's Working Hours:"<<endl;
            cout<<"Weekdays"<<endl;
            cout<<"1 - 09:00 - 10:00"<<endl;
            cout<<"2 - 10:00 - 11:00"<<endl;
            cout<<"3 - 11:00 - 12:00"<<endl;
            cin>>p1;
            if(p1==1)
                PObj2->setDate(setDate1);
            else if(p1==2)
                PObj2->setDate(setDate2);
            else if(p1==3)
                PObj2->setDate(setDate3);
            else
                PObj2->setDate(setDate7);
            break;
        case 2:
            cout<<"Dr. Ihsan Onder Albayrak's Working Hours:"<<endl;
            cout<<"Weekdays"<<endl;
            cout<<"1 - 13:00 - 13:00"<<endl;
            cout<<"2 - 14:00 - 15:00"<<endl;
            cout<<"3 - 15:00 - 16:00"<<endl;
            cin>>p1;
            if(p1==1)
                PObj2->setDate(setDate4);
            else if(p1==2)
                PObj2->setDate(setDate5);
            else if(p1==3)
                PObj2->setDate(setDate6);
            else
                PObj2->setDate(setDate7);
            break;
            default:
            cout<<"Wrong Entry!"<<endl;
        }
        break;
        default:
                cout<<"--Wrong Entry!--"<<endl;
                goto go;
    }
    }
    else
        break;
        PObj->Infos();
        PObj2->Infos();
        cout<<endl<<endl<<endl;
}
    return 0;
}
