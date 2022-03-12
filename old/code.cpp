#include <iostream>
#include <vector>
using namespace std;
int fun1(int n){
	//	cin >> n;
		int count = 0;
		vector<int> arr(n+1, -1);
		for (int i = 1; i <= n/2; i++)
		{
			if (arr[i] == -1)
			{
				count++;
				arr[i] = count;
				int j = i;
				while (2 * j < n+1)
				{
					arr[2 * j] = count;
					j=2*j;
				}
			}
		}
		for(int i= (n/2)+1 ; i<n+1;i++){
		    if(arr[i]==-1){
		        count++;
		    }
		}
		return count;
}
int fun2(int n){
	if(n%2==0){
		return (n/2);
	}
	else{
		return (n/2)+1;
	}
}
int main()
{
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		int a = fun1(i);
		int b = fun2(i);
		if(a!=b){
			cout <<i <<endl;
		}
	}	
}