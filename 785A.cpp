#include <bits/stdc++.h>

using namespace std;



int res = 0;


void solve(){
    
    string s = "";
    
    cin >> s;
    
    if(s == "Tetrahedron") {res += 4;}
    
    if(s == "Cube") {res += 6;}
    
    if(s == "Octahedron") {res += 8;}
    
    if(s == "Dodecahedron") {res += 12;}
    
    if(s == "Icosahedron") {res += 20;}
}


int main(){

    ios::sync_with_stdio(0);
    cin.tie();
    
    int n;
    
    cin >> n;
    
    while(n--) {solve();}
    
    cout << res << "\n";
    
    return 0;
}