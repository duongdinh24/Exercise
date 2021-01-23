#include<iostream>
#include<math.h>
using namespace std;
bool isSquareNumber(int a){
	if(a<1)
		return false;
	for(int i=1;i<=a/2;i++)
		if(i*i==a)
			return true;
	return false;
}

bool checkSquareNumber(int n){
	if(n<1)
		return false;
	int i = sqrt(n);
	if(i*i==n)
		return true;
	return false;
}

int main(){
	int a=12;
	if(checkSquareNumber(a))
		cout<<a<<" la so chinh phuong";
	else 
		cout<<"Khong phai so chinh phuong";
}
