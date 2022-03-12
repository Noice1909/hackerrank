#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for(int i = 1;i<=t;i++){
		int n = i;
	//	cin >> n;
		int count = 0;
	//	vector<int> arr(n+1, -1);
		for (int i = 1; i <= n/2; i++)
		{
			if(n%2==0){
			    count = n/2;
			}
			else{
			    count= (n/2)+1;
			}
		}
		cout << n << " : - "<< count <<endl;
	}
}