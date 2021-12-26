#include<bits/stdc++.h>
using namespace std;

bool isOdd(int x){
	if(x%2==1) return true;
	return false;
}
int main(){
	int N;
	cin>>N;
	for(int i=1; i<=N; i++){
		if(isOdd(i)) {
			cout<<"_"<<endl;
		}
		else {
			for(int j=1; j<=N; j++){
				cout<<"*";
			}
			cout<<endl;
		}
	}
	return 0;
}