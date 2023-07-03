#include<iostream>

using namespace std;

class bank{
	char name[100],address[100],option;
	float balance;
	public:
		void openAccount();
		void depositMoney();
		void withdrawMoney();
		void displayAccount();
		void exit();
};

void bank :: openAccount(){
	cout<<"Enter your full name :\n";
	cin.ignore();
	cin.getline(name, 100);
	cout<<"Enter your Address :\n";
	cin.ignore();   
	cin.getline(address, 100);
	cout<<"What type of account you want to open - saving(s) or current(c)\n";
	cin>>option;
	cout<<"Enter the amount to deposit for your bank :\n";
	cin>>balance;
	cout<<"-----------------------------------------------------------------------\n";
}   

void bank :: depositMoney(){    
	float damount;
	cout<<"Enter the amount, you want to deposit :\n";
	cin>>damount;
	balance+=damount;
	cout<<"Total balance :"<<balance;
	cout<<"-----------------------------------------------------------------------\n";
}

void bank :: withdrawMoney(){
	float wamount;
	cout<<"Enter amount you want to withdraw :\n";
	cin>>wamount;
	balance-=wamount;
	cout<<"Total balance :"<<balance;
	cout<<"-----------------------------------------------------------------------\n";
}

void bank :: displayAccount(){
	cout<<"\n";
	cout<<"Your full name :"<<name<<endl;
	cout<<"\n";
	cout<<"Your address :"<<address<<endl;
	cout<<"\n";
	cout<<"Type of your account :"<<option<<endl;
	cout<<"\n";
	cout<<"Total Amount :"<<balance<<endl;
	cout<<"\n";
	cout<<"-----------------------------------------------------------------------\n";
}

int main(){
	int choose,loop = 0;
	bank obj;
	do{
	cout<<"1) Open Account\n";
	cout<<"2) Deposit Money\n";
	cout<<"3) Withdraw Money\n";
	cout<<"4) Display Account\n";
	cout<<"5) Exit\n";
	cout<<"-----------------------------------------------------------------------\n";
	cout<<"Choose any one :";
	cin>>choose;
	switch(choose){
		case 1:
		cout<<"1) Open Account \n";
		obj.openAccount();
		break;
		
		case 2:
		cout<<"2) Deposit Money \n";
		obj.depositMoney();
		break;
		
		case 3:
		cout<<"3) Withdraw Money \n";
		obj.withdrawMoney();
		break;
		
		case 4:
		cout<<"4) Display Account \n";
		obj.displayAccount();
		break;
		
		case 5:
			if(choose == 5){
				exit(1);
			}
			
		default:
			cout<<"This isn't exist try again\n";
	}
	}while(loop == 0);
	
	return 0;
	
}