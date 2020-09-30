#include<bits/stdc++.h>
using namespace std;

class SVNIT_Student{
private:
    string enrolment_number;
    string name;
    float eng;
    float math;
    float science;
    float total;
public:
    void getdata(string enroll,string n,float m,float e,float s){
        enrolment_number = enroll;
        name = n;
        math = m;
        eng = e;
        science = s;
    }
    float ctotal(){
        return math+science+eng;
    }
    void displaydata(){
        cout<<"Name of the student is: "<<name<<'\n';
        cout<<"Enrollment No. of a student is: "<<enrolment_number<<'\n';
        cout<<"Marks is Eng subject is: "<<eng<<'\n';
        cout<<"Marks is Math subject is: "<<math<<'\n';
        cout<<"Marks is Science subject is: "<<science<<'\n';
        cout<<"Total marks of a student is: "<<ctotal()<<'\n';
    }
};

int main(){
    for(int i=0;i<5;i++){
        SVNIT_Student s = SVNIT_Student();
        string name;
        string enroll;
        float math;
        float eng;
        float science;

        cout<<"Enter the details of "<<i+1<<" student: "<<'\n';

        cout<<"Enter the Name of "<<i+1<<" student: ";
        cin>>name;

        cout<<"Enter the Enrollment N0. of "<<i+1<<" student: ";
        cin>>enroll;

        cout<<"Enter the Math marks of "<<i+1<<" student: ";
        cin>>math;

        cout<<"Enter the Eng marks of "<<i+1<<" student: ";
        cin>>eng;

        cout<<"Enter the Science marks of "<<i+1<<" student: ";
        cin>>science;

        s.getdata(enroll,name,math,eng,science);
        s.displaydata();
    }
    return 0;
}