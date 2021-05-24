#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, c=0;
    int arr[10]={4, 7, 47, 74, 447, 474, 477, 774, 747, 744};

    cin>>n;

    for(int i=0; i<10; i++){
        if(n == arr[i] || n%arr[i] == 0){
            cout<<"YES"<<endl;;
            break;
        }else{
            c++;
        }
    }
    if(c == 10){
        cout<<"NO"<<endl;

    }

    return 0;
}
