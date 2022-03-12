#include <iostream>
using namespace std;

int linearSearch(int arr[],int n , int target){// start searching from 0 th index and then 1st, 2nd, 3rd ,.. so on that's why this is called linear search 
	for(int i=0;i<n;i++){
		if(arr[i]==target){
			return i;
		}
	}
	return -1;
		
}
int binarySearch(int arr[], int n, int x)
{
	int l =0;
	int r = n-1;
    while (l <= r) {
        int m = l + (r - l) / 2;

        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}


int main(){
	
	//step 1 :- linear Search
	int arr[]={1,4,19,10,30,34,8};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<linearSearch(arr,n,30)<<endl;
	
	//Step 2 :- Binary Search
	int arr2[]={1,4,19,30,49,88,100,101,103,109,112,119};
	int m = sizeof(arr2)/sizeof(arr[0]);
	cout<<binarySearch(arr2,m,101)<<endl;
}
