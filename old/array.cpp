#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<vector<int>> arr;
	int temp;
	for(int i=0;i<n;i++){
		vector<int> row;
		for(int j=0;j<n;j++){
			cin>>temp;
			row.push_back(temp);
		}
		arr.push_back(row);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	} 
}
