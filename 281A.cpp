#include <bits/stdc++.h>

using namespace std;



int main(){

    ios::sync_with_stdio(0);
    cin.tie();

    string s;

    cin>>s;
    
    for(unsigned int i=0; i<s.length(); i++){
    
        if(i==0) cout<<(char) toupper(s[0]);
        
        else if(i>0) cout<<s[i];
    }
    
    cout<<"\n";

    return 0;
}