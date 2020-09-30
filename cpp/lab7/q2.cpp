#include <bits/stdc++.h>
using namespace std;

class Report
{
    int enrol_no;
    string name;
    vector<int> marks;
    int avgmarks;

public:
    void ReadInfo(){
        do
        {
            cout <<"Enter your roll no : ";
            cin>>this->enrol_no;
        } while (this->enrol_no>9999);
        
        do
        {
            cout<<"Enter your name(<20) : ";
            cin>>this->name;
        } while (this->name.size()>20);
        
        cout<<"Enter marks seprated by space : ";
        for(int i=0;i<5;i++){int x;cin>>x;this->marks.push_back(x);}

        int total;
        for (int i = 0; i < 5; i++)
        {
            total += this->marks[i];
        }
        this->avgmarks = total/5;
    }

    int getAvg(){
        return this->avgmarks;
    }

    void display(){
        cout<<"Enroll No : "<<this->enrol_no<<"\n";
        cout<<"Name : "<<this->name<<"\n";
        cout<<" Marks : ";
        for(int i=0;i<5;i++)cout<<this->marks[i];
        cout<<"\nEverage Marks : "<<this->avgmarks<<"\n";
    }
};

int main()
{

    return 0;
}