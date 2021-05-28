#include<bits/stdc++.h>

using namespace std;

int main(){

    long long x;

    cin>>x;

    long long ans = 0;

    while(x >= 1){
        if(x%2 == 1){
            ans++;
            x--;
        }else{
            x /= 2;
        }
    }

    cout<<ans<<"\n";

    return 0;
}
