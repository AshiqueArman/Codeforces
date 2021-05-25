#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;

    cin>>t;

    while(t--){

        int n;
        cin>>n;

        long long a[n], b[n], as[n], bs[n];
        long long ma, mb;

        for(long long i=0; i<n; i++){
            cin>>a[i];
            as[i] = a[i];
        }

        for(long long i=0; i<n; i++){
            cin>>b[i];
            bs[i] = b[i];
        }

        sort(as, as+n);
        sort(bs, bs+n);
        ma = as[0];
        mb = bs[0];

        long long steps = 0;

        for(long long i=0; i<n; i++){

                if(a[i]>ma && b[i]>mb ){
                    if( (a[i] - ma ) > (b[i] - mb) ){
                        steps += a[i] - ma;

                    }else if( (a[i] - ma ) < (b[i] - mb) ){
                        steps += b[i] - mb;
                    }
                    else if( (a[i] - ma ) == (b[i] - mb) ){
                        steps += a[i] - ma;

                    }
                }else if(a[i]>ma && b[i]==mb){
                    steps += a[i] - ma;

                }else if(a[i]==ma && b[i]>mb){

                    steps += b[i] - mb;

                }

        }

        cout<<steps<<endl;
    }

    return 0;
}
