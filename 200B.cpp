#include<iostream>

using namespace std;

int main(){

    int n;
    float p;

    cin>>n;

    float arr[n] = {};

    for(int i=0; i<n; i++){
        cin>>arr[i];
        p += arr[i] / 100;
    }
    double pp;

    pp = p / n;
    pp = pp * 100;

    cout<<pp<<endl;


    return 0;
}
