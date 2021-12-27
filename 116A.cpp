#include <bits/stdc++.h>

using namespace std;


int c=0, ans=0;


void solve(){

    int a=0, b=0;
    
    cin>>a>>b;
    
    c+=b-a;
    
    if(c>ans) ans=c;
}


int main(){

    ios::sync_with_stdio(0);
    cin.tie();
    
    int n;
    
    cin>>n;
    
    while(n--) solve();
    
    cout<<ans<<"\n";
    
    return 0;
}