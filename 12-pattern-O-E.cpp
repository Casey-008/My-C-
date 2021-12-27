#include<bits/stdc++.h>
using namespace std;
bool isOdd(int x){
    if(x%2==1) return true;
    return false;
}
bool isEven(int y){
    if(y%2==0) return true;
    return false;
}
int main(){
    int num;
    cin>>num;
    for(int i=1; i<=num; i++){
        if(isOdd(i)){
            for(int j=1; j<=num; j++){
                cout<<"_";
            }
            cout<<endl;
        }
        else if(isEven(i)){
            for(int k=1; k<=num; k++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
}