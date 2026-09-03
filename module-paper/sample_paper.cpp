#include<iostream>
using namespace std;

int menu()
{
    cout<<"1)General Consultaion"<<endl;
    cout<<"2)Specialist Consultation"<<endl;
    cout<<"3)Diagnostic Consultation"<<endl;
    int choice;
    cout<<"Enter your choice: "<<endl;
    cin>>choice;
    return choice;
};

class Appointment
{
    private:
    string patientName;
    int patientID;
    string mobileNo;
    double totalBill;
    string consultationType;
    public:

};

class GeneralConsultation
{
    private:
    string doctorName;
    double consultationFee;
    public:
};

class SpecialistConsultation
{
    private:
    string doctorName;
    string specialization;
    double consultationFee;
    public:
};

class DiagnosticConsultation
{ 
    private:
    string doctorName;
    double consultationFee;
};