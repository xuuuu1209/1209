#include <iostream>
#include <string>
using namespace std;
struct record {
	int month;
	int day;
	string item;
	double amount;
};
int main() {
	record account[100];
	int count=0;
	double total=0;
	char c;
	do {
		int m, d;
		while(true) {
			cout<<"please input day and month(ex:5/17,input 5 17)"<<endl;
			cin>>m>>d;
			bool detect=true;
			if(m<1||m>12) {
				detect=false;
			} else {
				switch(m) {
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
					if(d<1||d>31) detect=false;
					break;
				case 4:
				case 6:
				case 9:
				case 11:
					if(d<1||d>30) detect=false;
					break;
				case 2:
					if(d<1||d>28) detect=false;
					break;
				}
			}
			if(detect==true) {
				account[count].month=m;
				account[count].day=d;
				break;
			} else {
				cout<<"error"<<endl;
			}
		}

		cout<<"please intput what you bought:"<<endl;
		cin>>account[count].item;
		cout<<"please input the amount"<<endl;
		cin>>account[count].amount;
		total+=account[count].amount;
		cout<<"It had been recored"<<endl;
		cout<<"the record is as fillow:"<<account[count].month<<"/"<<account[count].day
		    <<"   "<<account[count].item<<"$"<<account[count].amount<<endl;
		cout<<"so far,you have spend "<<total<<endl;
		count++;
		cout<<"continue?(y or n):";
		cin>>c;
	} while(c=='y'||c=='Y');
	cout<<"thanks for using!"<<endl;
	return 0;
}
