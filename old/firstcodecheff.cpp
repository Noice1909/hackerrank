#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void helper(int n,vector<vector<int> > &result,vector<int> &temp,vector<vector<int> > matrix){
        if(temp.size()==n){
        	result.push_back(temp);
        	return;
		}
		if(temp.size()==0){
			for(int i=0;i<10;i++){
				temp.push_back(i);
				helper(n,result,temp,matrix);
				temp.pop_back();
			}
		}
		if(temp.size()!=0){
			int k =temp.size()-1;
			for(int i=0;i<matrix[temp[k]].size();i++){
			temp.push_back(matrix[temp[k]][i]);
			helper(n,result,temp,matrix);
			temp.pop_back();
		}	
		}
		
		return;
		
    }

int main() {
	std::vector<std::vector<int> > matrix {
                {0,8},
				{1,2,4},
				{2,1,3,5},
				{3,2,6},
				{4,1,5,7},
				{5,2,4,6,8},
				{6,3,5,9},
				{7,4,8},
				{8,5,7,9,0},
				{9,6,8}
            };
	vector<vector<int> > result;
	vector<int> temp;
	int n =3;
	helper(n,result,temp,matrix);
	cout<<" size of result : "<<result.size()<<endl;
	for(int i=0;i<result.size();i++){
		for(int j=0;j<result[i].size();j++){
			cout<<result[i][j]<<" ";
		}
		cout<<endl;
	}
}