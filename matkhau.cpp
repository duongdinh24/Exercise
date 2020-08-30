#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int n;
	cin>>n;
	char *ketqua[50];
	for( int j=0;j<n;j++){
		int x =0, y=0, z=0;
		char t[50];
		cin>>t;
		if(strlen(t)<8){
			ketqua[j]="N";
			continue;
		}
		for(int i=0;i<strlen(t);i++)
		{
			if(48<=t[i]&&t[i]<=57)
				x++;
			if(65<=t[i]&& t[i]<=90)
				y++;
			if(97<=t[i] && t[i]<=122)
				z++;
		}
		if(x==0  || y==0 ||z==0)
			ketqua[j]="N";
		else
			ketqua[j]="Y";
	}
	for(int i=0;i<n;i++)
		cout<<ketqua[i]<<endl;
	return 0;
}
