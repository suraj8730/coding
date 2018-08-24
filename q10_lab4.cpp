#include <iostream>
//ading library for power function
#include <cmath>
using namespace std;
int main()
{
	//declaring variables
        double P,N,T,C,R;
	//asking and taking input
        cout<<"Input principal"<<endl;
	cin>>P;
	cout<<"Input rate of interest per anum"<<endl;
	cin>>R;
	cout<<"Input number of times interest is compounded"<<endl;
	cin>>N;
	cout<<"Input time period of interest in year"<<endl;
	cin>>T;
	//operation
        C=P*pow((1+R/100*N),N*T);
	//printing output
        cout<<"Your compound interest is "<<C<<endl;
	return 0;

}
