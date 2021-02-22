#include<bits/stdc++.h>
using namespace std;

// su dung de quy
double tinhgiaithua(double n){
	if(n==1)
		return 1;
	return(n*tinhgiaithua(n-1));
}

// su dung vong lap
double tinhgiaithuaphuongphaplap(double n){
	double giai_thua = 1;
    for (double i = 1; i <= n; i++)
        giai_thua = giai_thua * i;
    return giai_thua;
}

void solve(){
	double n;
	clock_t start, end;
    double time_use;
	cout<<"Nhap n: ";
	cin>>n;
	
	//tinh tg bang de quy
    start = clock();
    cout<<"Giai thua cua "<<n<<" la: "<<tinhgiaithua(n)<<endl;
    end = clock();
    time_use = (double)(end - start) / CLOCKS_PER_SEC;
    cout<<"Thoi gian chay tinhgiaithua(n): "<<time_use;
}

void solve2(){
	double n;
	clock_t start, end;
    double time_use;
	cout<<"Nhap n: ";
	cin>>n;
	
	// tinh tg bang vong lap
	start = clock();
    cout<<"Giai thua cua "<<n<<" la: "<<tinhgiaithuaphuongphaplap(n)<<endl;
    end = clock();
    time_use = (double)(end - start) / CLOCKS_PER_SEC;
    cout<<"Thoi gian chay tinhgiaithuaphuongphaplap(n): "<<time_use;
}

int main(){
	solve();   // De quy: du lieu vao max 170 Thoi gian chay 0.001s
//	solve2();  // Lap: du lieu dau vao max 170 thoi gian chay 0.001
}

