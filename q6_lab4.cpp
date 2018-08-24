# include<iostream>
using namespace std;
int main(){
	//declaring variable
	float B,H,A;
	//asking for input
	cout<<"enter base of the triangle in cm"<<endl;
	//input
	cin>>B;
	cout<<"enter height of the triangle in cm"<<endl;
        cin>>H;
	//operation
	A=B*H/2;
	//printing output
	cout<<"area of the triangle having base "<<B<<"cm"<< " and height "<<H<<"cm"<<" is "<<A<<"cm²."<<endl;
	return 0; 
}
