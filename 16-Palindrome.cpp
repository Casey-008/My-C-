#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string str, oP;
    cin>>n>>str;
    
    for(int i=n-1; i>=0; i--){
        oP+=str[i];
    }
    if(oP==str)cout<<"Yes";
    else cout<<"No";
    
}
