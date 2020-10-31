#include<bits/stdc++.h>
#define ll long long 
using namespace std;

// int returnsetbits(int n){
// 	int coun = 0;
// 	while(n>0){
// 		if(n&1)coun++;
// 		n = n>>1;
// 	}
// 	return coun;
// }

int returnsetbits(int n){
	int coun = 0;
	while(n>0){
		coun++;
		n = (n & n-1);
	}
	return coun;
}

int main(){
	int n = 31;
	n = returnsetbits(n);
	cout<<n<<endl;
	return 0;
}
