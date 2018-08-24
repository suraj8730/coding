# include<iostream>
//ading extra library for setprecision
#include<bits/stdc++.h>
using namespace std;
int main(){
	//declaring variable
	int s1,s2,s3,s4,s5,T;
        float o;
	long double A,P;
	//asking for input and taking input
	cout<<"enter your total mark"<<endl;
	cin>>o;
	cout<<"enter mark of first subject"<<endl;
	cin>>s1;
	cout<<"enter mark of second subject"<<endl;
	cin>>s2;
	cout<<"enter mark of third subject"<<endl;
	cin>>s3;
	cout<<"enter mark of forth subject"<<endl;
	cin>>s4;
	cout<<"enter mark of fifth subject"<<endl;
	cin>>s5;
	//operations
	T=s1+s2+s3+s4+s5;
	A=T/5;
	P=(T/o)*100;
	//output
	cout<<"your total mark out of "<<o<<" is "<<T<<endl;
	cout<<"your average mark is "<<A<<endl;
	cout<<"your percentage is "<<setprecision(5)<< P<<"%"<<endl;
	return 0;
}
