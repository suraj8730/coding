# include <iostream>
using namespace std;
int main(){
	//declaring the variable
	float LENGTH;
	cout <<"enter your length"<<endl;
	//taking input
	cin >>LENGTH;
	//declaring variables for output
	double METER;
	double KILOMETER;
	//doing operation
	METER= LENGTH*0.01;
	KILOMETER= LENGTH*0.00001;
	//printing answer
	cout<<"your length is "<<LENGTH<<"cm"<<endl;
	cout<<"length in meter is "<<METER<<"m"<<endl;
	cout<< "length in kilometer is "<<KILOMETER<<"km"<<endl;
        return 0;
}
