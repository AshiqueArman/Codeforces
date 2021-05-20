#include<algorithm>
#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){

    long long int n, maxx=0, l, i;
    double fst, lst, x, ans;

    cin>>n;
    cin>>l;

    long long int p[n];

    for(i=0; i<n; i++){
        cin>>p[i];
    }

    sort(p, p+n);

    for(i=0; i<n-1; i++){
        if( (p[i+1] - p[i]) > maxx ){
            maxx = p[i+1] - p[i];
        }
    }

    x = maxx / 2.0;
    fst = p[0] - 0.0;
    lst = double(l) - p[n-1];
    ans = max(fst, lst);
    ans = max(ans, x);

    cout<<fixed<<setprecision(10)<<ans<<endl;

    return 0;
}
