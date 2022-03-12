#include<iostream>
using namespace std;

void f(int n){
	if(n%2==0 && n>=2){
		cout<<n<<" ";
		f(n-2);
	}
}
int main(){
	cout<<"OM PARMAR, NITW "<<endl;
	f(10);
}
