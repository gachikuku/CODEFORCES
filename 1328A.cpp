#include <bits/stdc++.h>

using namespace std;


void solve(){

    int a=0, b=0;
    
    cin>>a>>b;
    
    if(a%b==0){cout<<0<<"\n";}
    
    else{cout<<b-a%b<<"\n";}
}


int main(){

    ios::sync_with_stdio(0);
    cin.tie();
    
    int t;
    
    cin>>t;
    
    while(t--) {solve();}
    
    return 0;
}