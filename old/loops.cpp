#include <iostream>
using namespace std;

int main(){
	cout<<"OM PARMAR , NITW , 3rd year "<<endl;
	
	int a=1;
	int sum=0;
	//step 1 :- while loop
	while (a<11){
		sum=sum+a;
		a++;
	}
	cout<<"Sum is = "<<sum <<endl;
	
	sum=0;
	//step 2 : for loop  
	//for( initialization ; condition ; after execution)
	for(int i=1;i<11;i++){
		sum=sum+i;
	}	
	cout<<"Sum is = "<<sum <<endl;
	
	//step 3 
	int total=0;
	for(int i=0;i<5;i++){
		int n;
		cin>>n;
		total=total+n;
	}
	cout<<"total is = "<<total<<endl;
	
	//step 4 pattern (nested loop)
	/*1   ( for n=5)
	  1 1
	  1 1 1
	  1 1 1 1
	  1 1 1 1 1 */
	int n;
	cout<<"Number of rows = ";
	cin>>n;
	for(int row=1;row<n+1;row++){
		for(int col=1;col<row+1;col++){
			cout<<"1 ";
		}
		cout<<endl;
	}
	
	/*1   ( for n=5)
	  1 2
	  1 2 3
	  1 2 3 4
	  1 2 3 4 5 */
	for(int row=1;row<n+1;row++){
		for(int col=1;col<row+1;col++){
			cout<<col<<" ";
		}
		cout<<endl;
	}
	
	/*   ( for n=5)
	  *
	  * *
	  * * *
	  * * * *
	  * * * * *
	  * * * *
	  * * *
	  * *
	  *
	*/
	for(int row=1;row<n+1;row++){
		for(int col=1;col<row+1;col++){
			cout<<"* ";
		}
		cout<<endl;
	}
	for(int i=n-1;i>=1;i--){
		for(int j=1;j<i+1;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	
	//sum of 1,2,..,x such that sum is less than 150 , also find x
	int n1=1,sum1 =0;
	while(sum1<150){
		sum1=sum1+n1;
		n1++;
	}
	cout<<"x is ="<<n1-1<<endl;
	return 0; 
}
