#include <bits/stdc++.h>

using namespace std;


int res = 0;

void solve(){

    int p, v, t, total;
    
    cin >> p >> v >> t;
    
    total = p + v + t;
    
    if(total>=2) {res++;}
}


int main(){

    ios::sync_with_stdio(0);
    cin.tie();
    
    int t;
    
    cin >> t;
    
    while(t--){
    
        solve();
    }
    
    cout << res << "\n";
    
    return 0;
}