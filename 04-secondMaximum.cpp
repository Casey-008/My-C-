#include <bits/stdc++.h>
using namespace std;
int secondMaximum(int a, int b, int c){
	int x;
	if(a>b && a>c)
		if(b>c) x=b;
		else x = c;
	else if(b>a && b>c)
		if(c>a) x=c;
		else x = a;
	else if(c>a && c>b)
		if(a>b) x = a;
		else x = b;
	return x;
}
int main(){
	int x,y,z;
	cin>>x>>y>>z;
	cout<<secondMaximum(x,y,z)<<endl;;
	// cout<<x<<" "<<y<<" "<<z;
	return 0;
}