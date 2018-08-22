# include<iostream>
using namespace std;
int main(){
	//declaring variables
	double F,C;cout<< "enter your temprature in fahrenheit"<<endl;
	//taking input
	cin>> F;;
	//operation
	C=(F-32)*5/9;
	//output
	cout<< "your temprature in fahrenheit is "<<F<<"°F"<<endl;
	cout<<"your temprature in celcius is "<<C<<"°C"<<endl;
	return 0;
}
