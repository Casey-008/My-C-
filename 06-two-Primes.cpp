#include<bits/stdc++.h>
using namespace std;

bool isPrime(int x){
	if(x<=1) return false;
	for(int i=2; i<=sqrt(x); i++){
		if(x%i==0) return false;
	}
	return true;
}

int main(){
	int a,b;
	cin>>a>>b;
	if(isPrime(a)&&isPrime(b))cout<<"true";
	else cout<<"false";
}