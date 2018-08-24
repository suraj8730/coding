#include <iostream>
using namespace std;

int main()
{
	//declarring variables
        int R,T;
        double I,P;
	//asking for all input and taking input
        cout <<"Input your principal "<<endl;
	cin>>P;
	cout <<"Input your rate per anum "<<endl;
	cin>>R;
	cout <<"Input the time period in year"<<endl;
	cin>>T;
	//operations
        I=P*R*T/100;
	//printing output
        cout<<"your simple inerest is "<<I<<" in "<<T<<" year."<<endl;
	return 0;
}
