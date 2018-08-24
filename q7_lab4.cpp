# include<iostream>
//ading extra library for squarroot function
#include<math.h>
//ading library for set precision
#include<bits/stdc++.h>
using namespace std;
int main(){
	//declaring variable
         long double A,a;
	//asking for input
	cout<<"Input the side of the triangle in cm."<<endl;
	//input
	cin>>a;
	//operation
	A =a*a*sqrt(3)/4.0;
	//output
	cout<<"area of triangle having side "<<"cm "<<"is "<< setprecision(8) <<A<<"cm²"<<endl;
	return 0;
}
