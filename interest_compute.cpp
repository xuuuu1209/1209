#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    double rate, year, principal;
    cout<<"please input your principal, interest rate and saving year"<<endl;
    cin>>principal>>rate>>year;
    for(int i=0;i<year;i++){
        principal*=(1+rate);
    }
    cout<<fixed<<setprecision(2);
    cout<<"after "<<year<<"years ago, the remuneration will be"<<principal<<endl;
    return 0;
}
