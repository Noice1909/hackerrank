#include <iostream>
using namespace std;

void helloworld(){
	cout<<"Hello World"<<endl;
	cout<<"OM PARMAR , NIT Warangal"<<endl;
}
int f(int n){
	if (n==0 || n==1){
		return 1;
	}
	else{
		return f(n-1)+f(n-2);
	}
}

int main(){
	helloworld();
	
	
	return 0;
}
