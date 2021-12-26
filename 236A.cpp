#include <bits/stdc++.h>

using namespace std;



int countDistinct(string s) { 

    unordered_map<char, int> m; 

    for(unsigned int i=0; i<s.length(); i++){
        
        m[s[i]]++;
    }

    return m.size();
        
}


int main(){

    ios::sync_with_stdio(0);
    cin.tie();

    string s;

    cin>>s;
    
    if(countDistinct(s)%2!=0)
        cout<<"IGNORE HIM!\n";
    
    else cout<<"CHAT WITH HER!\n";

    return 0;
}