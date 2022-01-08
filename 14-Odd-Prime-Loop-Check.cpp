#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n<=1)return false;
    for(int i=2; i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
bool isOdd(int n){
    if(n%2==1)return true;
    return false;
}
int main(){
    int num;
    cin>>num;
    for(int i=1; i<=num; i++){
        if(isPrime(i)&&isOdd(i)){
            cout<<i<<endl;
        }
    }
}