# hackerrank
Hacker-Rank  questions Easy Solutions mostly with function return value 
                                                  
                                                  
                                                      B. Sale
                                                      
Once Bob got to a sale of old TV sets. There were n TV sets at that sale. TV set with index i costs ai bellars. Some TV sets have a negative price — their owners are ready to pay Bob if he buys their useless apparatus. Bob can «buy» any TV sets he wants. Though he's very strong, Bob can carry at most m TV sets, and he has no desire to go to the sale for the second time. Please, help Bob find out the maximum sum of money that he can earn.

Input
The first line contains two space-separated integers n and m (1 ≤ m ≤ n ≤ 100) — amount of TV sets at the sale, and amount of TV sets that Bob can carry. The following line contains n space-separated integers ai ( - 1000 ≤ ai ≤ 1000) — prices of the TV sets.

Output
Output the only number — the maximum sum of money that Bob can earn, given that he can carry at most m TV sets.


#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n,m,count=0;
	cin>>n>>m;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	for(int i=0;i<n;i++){
		if(m>0 && arr[i]<0){
			count+=-arr[i];
			m--;
		}
	}
	cout<<endl;
	cout<< count;
}
