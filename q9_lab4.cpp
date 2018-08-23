#include <iostream>
using namespace std;

int main()
{
int P,R,T,I;
cout <<"Input your principal "<<endl;
cin>>P;
cout <<"Input your % rate per anum "<<endl;
cin>>R;
cout <<"Input the time period in year"<<endl;
cin>>T;
I=P*R*T/100;
cout<<"your simple inerest is "<<I<<" in "<<T<<" year.";
return 0;
}
