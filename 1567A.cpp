#include <bits/stdc++.h>

using namespace std;


void solve(){

    int n;
    
    cin >> n;
    
    string s, res;
    
    cin >> s;
    
    for(int i = 0; i < n;){
        
        if(s[i] == 'U') {res += 'D'; i++;}
        
        else if(s[i] == 'D'){res += 'U'; i++;}
        
        else{res += "LR"; i += 2;}
    }
    
    cout << res;
}


int main(){

    ios::sync_with_stdio(0);
    cin.tie();
    
    int t;
    
    cin >> t;
    
    while(t--){
    
        solve();
        
        cout << "\n";
    }
    
    return 0;
}