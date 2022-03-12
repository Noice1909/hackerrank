#include <iostream>
using namespace std;
//selection sort
//take i th element 
// find minimum element in (i+1) to (n-1)
// if find store index of that element in current_min_index
// swap i th element and current_min_index
int selectionSort(int arr[],int n){
	for(int i=0;i<n;i++){
		int current_min_index = i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[current_min_index]){
				current_min_index = j;
			}
		}
		int temp = arr[i];
		arr[i]=arr[current_min_index];
		arr[current_min_index]=temp;
	}
}
void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	cout<<"OM PARMAR,NITW"<<endl;
	int arr[] ={8,4,55,12,50,22,33,47,33,14};
	int n = sizeof(arr)/sizeof(arr[0]);
	selectionSort(arr,n);
	printArray(arr,n);
}
