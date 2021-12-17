#include <bits/stdc++.h>

using namespace std;


void solve(){

    int n=0;
    
    cin>>n;
    
    if(((n*(n+1))/2)%2==0){
    
        cout<<"YES\n";
        
        for(int i=1; i<=n/2; i++){
        
            cout<<i*2<<" ";
        }
        
        for(int j=1; j<n/2; j++){
        
            cout<<j*2-1<<" ";
        }
        
        cout<<3*(n/2)-1<<"\n";
    }
    
    else{cout<<"NO\n";}
}


int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    
    cin>>t;
    
    while(t--) {solve();}
    
    return 0;
}