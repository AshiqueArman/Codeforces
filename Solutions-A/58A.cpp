#include<bits/stdc++.h>

using namespace std;

int main(){

    string a, b = "hello";

    int j =0, c = 0;

    cin>>a;

    for(int i=0; i<a.size(); i++){
        if( a[i] == b[j] ){
            j++;
            c++;

            if(c == 5){
                break;
            }
        }
    }

    string res = ( c == 5) ? "YES" : "NO";

    cout<<res<<endl;

    return 0;

}
