#include <iostream>
using namespace std;
void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

//insertion sort
void insertionSort(int arr[], int n) 
{ 
    int i, key, j; 
    for (i = 1; i < n; i++)
    { 
        key = arr[i]; 
        j = i - 1; 
        /* Move elements of arr[0..i-1], that are 
        greater than key, to one position ahead 
        of their current position */
        while (j >= 0 && arr[j] > key)
        { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
    } 
} 

//Bubble sort
void bubbleSort(int arr[], int n) 
{ 
    int i, j; 
    for (i = 0; i < n-1; i++)     
    // Last i elements are already in place 
    for (j = 0; j < n-i-1; j++) 
        if (arr[j] > arr[j+1]) 
            int temp = arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=arr[j]; 
} 

int main(){
	cout<<"OM PARMAR,NITW"<<endl;
	int arr[] ={8,4,55,12,50,22,33,47,33,14};
	int n = sizeof(arr)/sizeof(arr[0]);
	insertionSort(arr,n);
	printArray(arr,n);
	bubbleSort(arr,n);
	printArray(arr,n);
}
