#include<bits/stdc++.h>
using namespace std;

class MathUtility{

    public:

    int fact(int n){
        if(n==1 || n==2)return 1;

        return fact(n-1)+ fact(n-2);
    }

    void check_num(int n){
        if(n%2==0)cout<<"Number is even";
        else cout<<"Number is odd";
    }

    int gcd(int a,int b)
    {
        if(a<b)return gcd(b,a);

        if(b==0)return a;

        return gcd(b,a%b);
    }
};

int main(){
  
  return 0;
}