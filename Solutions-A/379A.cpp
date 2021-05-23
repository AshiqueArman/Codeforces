#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, m, x, sum = 0;

    cin>>n>>m;

    sum = n;

    while(true){
        x = n/m;
        n = x + (n%m);
        sum += x;
        if(n < m){
            break;
        }

    }

    cout<<sum<<endl;

    return 0;
}
