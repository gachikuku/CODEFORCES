#include <bits/stdc++.h>

using namespace std;


void solve(){

    int h=0, m=0;
    
    cin>>h>>m;
    
    cout<<(24*60)-((h*60)+m)<<"\n";
}


int main(){

    ios::sync_with_stdio(0);
    cin.tie();
    
    int t;
    
    cin>>t;
    
    while(t--) solve();
}