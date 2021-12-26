#include <bits/stdc++.h>
using namespace std;
bool isEven(int x){
	if(x%2==0) return true;
	return false;
}
bool isOdd(int y){
	if(y%2==1) return true;
	return false;
}


int main(){
	int x;
	cin>>x;
	if(isEven(x))
		cout<<x<<" is even";
	else if(isOdd(x))
		cout<<x<<" is odd";
}