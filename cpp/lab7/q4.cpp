#include<bits/stdc++.h>
using namespace std;

class Student{

    int student_no;
    string name;
    vector<float> grade;
    float avg;
    public:

    Student(int no,string name,float a,float b,float c,float d,float e){
        this->student_no = no;
        this->name = name;
        this->grade.push_back(a);
        this->grade.push_back(b);
        this->grade.push_back(c);
        this->grade.push_back(d);
        this->grade.push_back(e);
        this->avg = (a+b+c+d+e)/5;
    }

    void display(){
        cout<<"Number of student is : "<<this->student_no<<"\n";
        cout<<"Name of student is : "<<this->name<<"\n";
        cout<<"Grades of all subject as below : ";
        for(int i=0;i<5;i++)cout<<this->grade[i]<<"\n";
    }

    int calculate_spi(){
        //according to gtu based cpi counting method
        // as all subject contain same number of grade so that sum(ci * gi)/sum(ci) only become average
        return this->avg*2;
    }
};

int main(){
    return 0;
}