#include<iostream>
using namespace std;
int main(){
	int k;
	cin>>k;
	int n[k];
	for(int i=0;i<k;i++)
		cin>>n[i];
		
	int a[k], b[k];
	
	for( int i=0;i<k;i++)
	{
	if(n[i]<4 && n[i]>=1 )
		a[i]=1;
	else if (n[i]%4==0)
		a[i]=n[i]/4;
	else
		a[i] = (n[i]/4 + 1); 
		
	if (n[i] >25)
		b[i]=25;
	else
		b[i]=n[i];
	}
	
	for(int i=0;i<k;i++){
		if(i!=k-1)
			cout<<a[i]<<" "<<b[i]<<endl;
		else
			cout<<a[i]<<" "<<b[i];
	}
	return 0;
	
}
