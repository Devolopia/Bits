#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int returnunique(int* a,int n){
  // xr is for store the xor of whole array
	int xr = 0;
	for(int i=0;i<n;i++){
		xr = xr ^ a[i];
	}
	return xr;
}

int main(){
	int n = 7;
	int arr[7] = {1,2,3,3,4,1,2};
	int t = returnunique(arr,n);
	cout<<t<<endl;
	return 0;
}
