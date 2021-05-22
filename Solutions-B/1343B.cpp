#include<bits/stdc++.h>

using namespace std;

int main(){

    int t, n, sum = 0, sum1 = 0, sum2 = 0;


    cin>>t;

    while(t--){
        sum1 = 0;
        sum2 = 0;
        cin>>n;
        vector<int>num;
        for(int i=0, k = 1; i<n; i++, k++){
         if(k%2 == 0){
            num.push_back(k);
            sum1 += k;
         }
        }

        for(int i=0, k = 1; i<n; i++, k++){
         if(k%2 != 0){
            num.push_back(k);
            sum2 += k;
         }
        }

        if(sum1 == sum2){
            cout<<"YES"<<endl;
            for(int i=0; i<n; i++){
                cout<<num[i]<<" ";
            }
            cout<<endl;
        }else{
            int x = num.size();
            x = x - 1;
            int add = sum1 - sum2;

            if( sum1 == ( add + sum2 ) ){

                if( (num[x] + add)%2 != 0){
                    num[x] += add;
                    cout<<"YES"<<endl;
                    for(int i=0; i<n; i++){
                        cout<<num[i]<<" ";
                    }
                    cout<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
            }else{
                cout<<"NO"<<endl;
            }

        }

    }


    return 0;
}
