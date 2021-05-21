#include<bits/stdc++.h>

using namespace std;

bool isItPrime(long long n){
    if(n < 2) return false;
    else if(n == 2) return true;

    long long l = sqrt(n);
    if(n % 2 == 0) return false;

    for(int i=3; i<=l; i+=2){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main(){

    int n;
    long long num;

    cin>>n;

    for(int i=0; i<n; i++){
        cin>>num;
        long long sqr = sqrt(num);
        if(sqr*sqr == num && isItPrime(sqr) == true) {
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
