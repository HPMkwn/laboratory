#include <bits/stdc++.h>
using namespace std;

class Book
{
    int book_no;
    string book_name;
    float price;
    float totalCost(int n){
        return n * this->price;
    }

public:
    void ReadInfo(){
        do
        {
            cout <<"Enter your book no : ";
            cin>>this->book_no;
        } while (this->book_no<0);
        
        do
        {
            cout<<"Enter your book_name(<20) : ";
            cin>>this->book_name;
        } while (this->book_name.size()>20);
        
        cout<<"Enter price of book : ";
        cin>>this->price;
    }

    float purchase(int n){
        return this->totalCost(n);
    }

    float total_cost(int n){
        return this->totalCost(n);
    }
};

int main()
{

    return 0;
}