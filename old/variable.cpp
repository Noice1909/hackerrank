#include <iostream>
using namespace std;
#define CHESS_WIDTH 16 //macros 
#define true false
int a = 10; //global variable, define first then can be in any function 

void helloworld(){
	cout<<"Hello World"<<endl;
	cout<<"OM PARMAR , NIT Warangal"<<endl;
	int a = 20; //defining again , so new memory location , so previous value remainds unchanged , local variable , used in side the function only  
	cout << " Local vairable a = "<<a<<endl;
}

int main(){
	int a =8;
	bool found = true;
	char firstletter ='O';
	float aj= 1.02;
	double d= 4.4444;
	
	//step 1
	helloworld();
	cout<< "Size of int " << sizeof(int)<<endl;
	cout<< "Size of bool " << sizeof(bool)<<endl;
	cout<< "Size of char " << sizeof(char)<<endl;
	cout<< "Size of float " << sizeof(float)<<endl;
	cout<< "Size of double " << sizeof(double)<<endl;
	cout<< "Size of long long int " << sizeof(long long int)<<endl;	
	
	//step 2
	cout << "global variable a = "<<a<<endl;
	
	//step 3
	const int CONVERTER = 3600;// can't change value after it get assigned 
	cout<<"Second per hour "<<CONVERTER<<endl;
	cout<< CHESS_WIDTH <<endl; //preprocessor 
	bool found = true ;
	cout<< found << endl;
	
	
}
