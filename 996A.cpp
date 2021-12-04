#include <bits/stdc++.h>

using namespace std;

#define ll long long


void solve(){

    ll n, bills[5] = {1, 5, 10, 20, 100};
    
    ll res = 0;
    
    cin >> n;
    
    int b = sizeof(bills) / sizeof(bills[0]);
    
    for(int i = b - 1; i >= 0; i--){
    
        while(n >= bills[i]){
        
            n -= bills[i];
            
            res++;
        }
    }
     
    cout << res << "\n";
}


int main(){

    ios::sync_with_stdio(0);
    cin.tie();
    
    solve();
    
    return 0;
}