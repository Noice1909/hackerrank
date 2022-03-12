#include <iostream>
using namespace std;

void helloworld(){
	cout<<"Hello World"<<endl;
	cout<<"OM PARMAR , NIT Warangal"<<endl;
}
int sum (int a, int b){
	return a+b;;
}
int sum (int a, int b, int c){ //can use same name of function bcz we have different number of argument 
	return sum(a,sum(b,c));
}
bool isprime(int a){
	if(a==1){
		return 0;
	}
	if(a==2){
		return 1;
	}
	else if(a>2){
		for(int i=2;i<=(a/2)+1;i++){
			if(a%i==0){
				return 0;
			}
		}
		return 1;
	}
}
void printstar(int n){
	for(int row=1;row<n+1;row++){
		for(int col=1;col<row+1;col++){
			cout<<"* ";
		}
		cout<<endl;
	}
}
int main(){
	helloworld();
	
	//Step 1 Sum of 2 numbers 
	int ans = sum(5,10);//calling function with arugument
	cout <<ans<<endl;
	
	//step 2 sum of 3 numbers 
	ans = sum (5,10,15);
	cout<<ans<<endl;
	//step 3 IS PRIME ?  print all prime numbers till 100 !! & total number prime numbers till 100
	int count=0;
	for(int i=0;i<=100;i++){
		if(isprime(i)){
			cout<<i<<" ";
			count++;
		}
	}
	cout<<endl;
	cout<<"Total Prime numbers till 100 is "<<count<<endl;
	
	//step 4 pattern of N *
	int N;
	cin>>N;
	printstar(N);
	return 0;
}
