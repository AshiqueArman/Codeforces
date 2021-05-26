#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;

    cin>>t;

    while(t--){

       int n, en = 0, on = 0;

       cin>>n;

       int a[n];

       for(int i=0; i<n; i++){
            cin>>a[i];
            if( (i%2 == 0) && (a[i]%2 != 0) ){
                on++;
           }
           if( (i%2 != 0) && (a[i]%2 == 0) ){
                en++;
           }
       }

       if( en != on ){
            cout<<-1<<"\n";
       }else{
            cout<<en<<"\n";
       }

    }

    return 0;
}
