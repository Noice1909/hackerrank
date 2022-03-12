#include <iostream>
using namespace std;

void helloworld(){
	cout<<"Hello World"<<endl;
	cout<<"OM PARMAR , NIT Warangal"<<endl;
}

int main(){
	int a =15;
	int b=10;
	helloworld();
		
	cout<<"Sum :" <<(a+b)<<endl;
	cout<<"difference :" <<(a-b)<<endl;
	cout<<"Multiplication :" <<(a*b)<<endl;
	cout<<"Division :" <<(a/b)<<endl;
	cout<<"Mod :" <<(a%b)<<endl;
	a++;
	cout<<"After increment "<<a<<endl;
	a--;
	cout<<"After devrement "<<a<<endl;
	
	
	int d = ++a; //preincrement , first increase then assigned to 'd', so d = 16 and value of a = 16
	cout<<"preincrement value = "<<d<<endl;
	int e = a++;//postincrement , first assigned then increase so d = 16; but value of a = 17
	cout<<"postincrement value = "<<e<<endl;
	
	bool check = (a==17);
	cout<<check <<endl;
	
	return 0;
}
