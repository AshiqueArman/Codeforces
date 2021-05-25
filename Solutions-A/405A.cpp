#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;

    cin>>n;

    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }


    int d = 0;

    for(int i=n-2; i>=0; i--){
        for(int j=n-1; j>0; j--){
            if(a[i] > a[j]){
                d = a[i] - a[j];
                a[i] -= d;
                a[j] += d;
            }

        }

    }

    for(int i=0; i<n; i++){
        cout<<a[i]<<endl;
    }

    return 0;
}
