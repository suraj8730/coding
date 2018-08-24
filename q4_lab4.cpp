# include<iostream>
using namespace std;
int main(){
	//declaring variable
	int d,D,Y,W,e;
	//asking for input
	cout<<"enter number of days "<<endl;
	//input
	cin>>d;
	//operations
	Y=d/365;
	e=d%365;
	W=e/7;
	D=e%7;
	//output
	cout<<"you entered "<<d<< " days"<<endl;
	cout<<d<<" day is "<<Y<<" year "<<W<<" week and "<<D<<" days"<<endl;
	return 0;
}
