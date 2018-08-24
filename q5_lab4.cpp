# include<iostream>
using namespace std;
int main(){
	//declaration
	float A,B,C;
	//asking
	cout<<"enter angles of the triangle"<<endl;
	//taking input
	cin>>A;
	cin>>B;
	//operation
	C=360-(A+B);
	//output
	cout<<"the third angle of the triangle is "<<C<<"°"<<endl;
	return 0;
}
