#include<iostream>
using namespace std;

int main(){
	cout<<"OM PARMAR, NITW"<<endl;
	int n;
	cin>>n;
	int arr[n][n];
	int counter = 1;
	int top =0,down=n-1,left=0,right=n-1;
	int direction =0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			arr[i][j]=0;
		}
	}
	while(left<=right && top<=down){
		if(direction == 0){
			for(int i = left; i<=right; i++){
				arr[top][i]=counter;
				counter++;
			}
			top++;	
		}
		else if (direction == 1){
			for(int i = top; i<=down ; i++){
				arr[i][right] = counter;
				counter++;
			}
			right--;
		}
		else if (direction == 2){
			for(int i = right;i>=left;i--){
				arr[down][i] = counter;
				counter++;
			}
			down--;
		}
		else if (direction == 3){
			for(int i = down;i>=top;i--){
				arr[i][left] = counter;
				counter++;
			}
			left++;
		}
		direction = (direction + 1)%4;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
