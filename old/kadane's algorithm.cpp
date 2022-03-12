#include <iostream>
using namespace std;
int main(){
	int arr[] = {2,4,-8,9,10,-2,4,-20,10};
	int n=9;
	int max_sum = arr[0];
	int curr_sum=arr[0];
	for(int i =0;i<n;i++){
		if(curr_sum+arr[i]<0){
			curr_sum =0;
		}
		else{
			curr_sum+=arr[i];
			if(max_sum<curr_sum){
				max_sum=curr_sum;
			}
		}
		
	}
	cout<<"OM PARMAR"<<"3rd year"<<endl;
	cout<<"Kadane's Algorithm : "<<max_sum<<endl;
}
