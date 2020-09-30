#include<bits/stdc++.h>
using namespace std;
class Bank_Account{
	private:
		string Name;
		int Account_Number;
		string Account_Type;
		double Balance_Amount;

	public:
		Bank_Account(string name,int account_number,string account_type,double balance_amount){
			Name = name;
			Account_Number = account_number;
			Account_Type = account_type;
			Balance_Amount = balance_amount;
		}
		void deposit(double val){
			Balance_Amount += val;
		}
		double withdraw(double val){
			double res  = min(val,Balance_Amount);
			Balance_Amount -= res;
			return res;
		}
		void info(){
			cout<<"Name: "<<Name<<endl;
			cout<<"Account_Number: "<<Account_Number<<endl;
			cout<<"Account_Type: "<<Account_Type<<endl;
			cout<<"Balance_Amount: "<<Balance_Amount<<endl;
		}
		void name_bal(){
			cout<<"Name: "<<Name<<endl;
			cout<<"Balance_Amount: "<<Balance_Amount<<endl;	
		}
		bool thiss(int ac){
			return ac==Account_Number;
		}	
};
void print_menu(){
	cout<<"1 : Open Account"<<endl;
	cout<<"2 : Withdraw"<<endl;
	cout<<"3 : Deposit"<<endl;
	cout<<"4 : Check Balance"<<endl;
	cout<<"5 : Full Info"<<endl;
	cout<<"any : Exit"<<endl;	
}
int search_account(vector<Bank_Account> v,int num){
	for(int i=0;i<v.size();i++){
		if(v[i].thiss(num)){
			return i;
		}
	}
	return -1;
}
int main(){
	vector<Bank_Account> Accounts;
	cout<<"Welcome to This bank"<<endl;
	int choice=0;
	while(1){
		print_menu();
		cin>>choice;
		if(choice==1){
			string Name;
			int Account_Number;
			string Account_Type;
			cout<<"Enter Name:\t";
			cin>>Name;
			cout<<"Enter preferred account number:\t";
			cin>>Account_Number;
			if(search_account(Accounts,Account_Number)!=-1){
				cout<<"Number taken. please try again.\n";
				continue;
			}
			cout<<"Enter Account Type:\t";
			cin>>Account_Type;
			Bank_Account b = Bank_Account(Name,Account_Number,Account_Type,0);
			Accounts.push_back(b);
			cout<<"successfully created with 0 balance.\n";
		}
		else if(choice==2){
			int Account_Number;
			cout<<"Enter account number:\t";
			cin>>Account_Number;
			if(search_account(Accounts,Account_Number)==-1){
				cout<<"Account not found, please try again.\n";
				continue;
			}
			else{
				cout<<"Enter money to be withdrawn.\n";
				double val;
				cin>> val;
				int index = search_account(Accounts,Account_Number);
				double got  = Accounts[index].withdraw(val);
				cout<<"Withdrawn "<<got<<"from account.\n";
			}

		}
		else if(choice==3){
			int Account_Number;
			cout<<"Enter account number:\t";
			cin>>Account_Number;
			if(search_account(Accounts,Account_Number)==-1){
				cout<<"Account not found, please try again.\n";
				continue;
			}
			else{
				cout<<"Enter money to be deposited.\n";
				double val;
				cin>> val;
				int index = search_account(Accounts,Account_Number);
				Accounts[index].deposit(val);
				cout<<"Deposited.\n";
			}
		}
		else if(choice==4){
			int Account_Number;
			cout<<"Enter account number:\t";
			cin>>Account_Number;
			if(search_account(Accounts,Account_Number)==-1){
				cout<<"Account not found, please try again.\n";
				continue;
			}
			else{
				int index = search_account(Accounts,Account_Number);
				Accounts[index].name_bal();
				
			}
		}
		else if(choice==5){
			int Account_Number;
			cout<<"Enter account number:\t";
			cin>>Account_Number;
			if(search_account(Accounts,Account_Number)==-1){
				cout<<"Account not found, please try again.\n";
				continue;
			}
			else{
				int index = search_account(Accounts,Account_Number);
				Accounts[index].info();
				
			}
		}
		else{
			break;
		}
	}
}