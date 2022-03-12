#include<iostream>
#include<cstring>

using namespace std;


int main(){
	cout<<"OM PARMAR, NITW"<<endl;
	
	//step - 1
	char str1[]="hello world";
	char str2[]={'c','+','+'};
	
	char temp[100];
	strcpy(temp,str1);
	cout<<temp<<endl;
	
	strcat(temp,str2);
	cout<<temp<<endl;
	cout<<strlen(temp);
	
	cout<<strcmp(str1,str2)<<endl;
	
	//step 2
	string s = "hello world";
	cout<<"Length = "<<s.size()<<endl;
	string a = "c++";
	s=s+a;
	cout<<"Updated s = "<<s<<endl;
	cout<< (s<a)<<endl;
	
	return 0;
}
