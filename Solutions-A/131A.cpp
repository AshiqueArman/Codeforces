#include<bits/stdc++.h>

using namespace std;

int main(){

    string s;
    int c = 0;

    cin>>s;

    if(s[0] >= 97 && s[0] <= 122 && s.size() > 1){
        for(int i=1; i<s.size(); i++){
            if(s[i] >= 65 && s[i]<= 90){
                c++;
            }
        }
    }

    if( (c+1) == s.size() && s.size() > 1){
        s[0] -= 32;
        for(int i=1; i<s.size(); i++){
            s[i] += 32;
        }
    }
    c = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] >= 65 && s[i]<= 90 && s.size() > 1){
            c++;
        }

    }

    if(c == s.size() && s.size() > 1){
        for(int i = 0; i<s.size(); i++){
            s[i] += 32;
        }
    }

    if(s.size() == 1 && (s[0] >= 97 && s[0] <= 122) ){
        s[0] -= 32;
    }else if(s.size() == 1 && (s[0] >= 65 && s[0] <= 90)){
        s[0] += 32;
    }

    cout<<s<<endl;
}
