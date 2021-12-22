#include <bits/stdc++.h>

using namespace std;

#define ll long long


void solve(){

    int n, moves[5] = {1, 2, 3, 4, 5};
    
    int res = 0;
    
    cin >> n;
    
    int b = sizeof(moves) / sizeof(moves[0]);
    
    for(int i = b - 1; i >= 0; i--){
    
        while(n >= moves[i]){
        
            n -= moves[i];
            
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