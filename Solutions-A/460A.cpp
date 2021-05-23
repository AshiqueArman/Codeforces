#include<bits/stdc++.h>

using namespace std;



int main(){

    int n, m, sum = 0, x = 0, y = 0;

    cin>>n>>m;

    sum = n;

    while(true){
        x = n/m;
        y = x + (n%m);
        n = y;

        sum += x;
        if(y<m){
            break;
        }

    }

    cout<<sum<<endl;

    return 0;
}
