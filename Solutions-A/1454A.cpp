#include<bits/stdc++.h>

using namespace std;

int main(){

    int t, n;

    cin>>t;

    while(t--){
        int x = 0, temp = 0;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            arr[i] = (i+1);
        }

        sort(arr, arr + n, greater<int>());

        if(n%2 != 0){
            x = n / 2;
            temp = arr[n-1];
            arr[n-1] = arr[x];
            arr[x] = temp;
        }

        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
