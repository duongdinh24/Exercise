#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	int b[n];
	int c[n];
	int x=0;
	
	for( int i=0;i<n;i++)
		cin>>a[i];
	b[0]=0;
	for(int i=1;i<n;i++)
		b[i]=a[i-1] - a[i] + b[i-1];
		
	for(int i=0;i<n;i++)
		x=x+b[i];
	x=(a[0]-x)/(n-1);
	
	for(int i=0;i<n;i++)
		c[i]=x+b[i];
	
	for(int i=0;i<n;i++){
		if(i!=n-1)
			cout<<c[i]<<" ";
		else
			cout<<c[i];
	}
	return 0;	
}
