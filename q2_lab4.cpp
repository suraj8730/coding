# include<iostream>
using namespace std;
int main(){
	//declaring the variable
	double C;
	double F;
	cout<<"enter your temprature in celsius."<<endl;
	//takin input
	cin>>C;
	//operation
	F=C*9/5+32;
	//output
	cout<<"your temprature is "<<C<<"°C"<<endl;
	cout<<"temprature in fahrenheit is "<<F<<"°F"<<endl;
        return 0;
}
