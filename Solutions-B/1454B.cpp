#include<bits/stdc++.h>

using namespace std;

int main(){

    int t, n, c = 0;

    cin>>t;

    while(t--){
        cin>>n;

        int a[n];
        int a2[n];
        int u = 0;
        int f = 1;

        for(int i=0; i<n; i++){
            cin>>a[i];
            a2[i] = a[i];
        }

        sort(a, a+n);

        for(int i=0; i<n; i++){

            if(i == 0 && a[i] != a[i+1]){
                f = 2;
                u = a[i];
                break;
            }
            else if(i > 0 && a[i] != a[i-1] && a[i] != a[i+1]){
                f = 2;
                u = a[i];
                break;
            }

        }
        for(int i=0; i<n; i++){
            if(f == 2 && u == a2[i]){
                cout<<(i+1)<<endl;
            }
        }
        if(f != 2){
            cout<<-1<<endl;
        }

    }

    return 0;

}
