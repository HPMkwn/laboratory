#include<bits/stdc++.h>
using namespace std;
class Fraction{
	private:
		int num;
		int den;
	public:
		Fraction(int nume){
			num = nume;
			den = 1;
		}
		Fraction(int nume,int deno){
			num = nume;
			den = deno;
		}
		Fraction(const Fraction	&f2) {num = f2.num; den = f2.den;}
		double evfract(){
			return ((double)num)/den;
		}
		void invert(){
			int temp;
			temp = num;
			num = den;
			den = temp;
		}	
};
int main(){
	Fraction f1 = Fraction(75,5);
	f1.invert();
	cout<<f1.evfract()<<endl;
	Fraction f2 = Fraction(f1);
	Fraction f3 = Fraction(5);				
}