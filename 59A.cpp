#include <bits/stdc++.h>

using namespace std;



int main(){

    ios::sync_with_stdio(0);
    cin.tie();

    string s;

    int upper = 0, lower = 0;

    cin>>s;

    for(int i=0; i<s.length(); i++){

        if(s[i] >= 'A' && s[i] <= 'Z') upper++;

        else if(s[i] >= 'a' && s[i] <= 'z') lower++;
    }

    if(upper>lower){

        for_each(s.begin(), s.end(), [](char & c){c=::toupper(c);});

        cout<<s;
    }

    else {

        for_each(s.begin(), s.end(), [](char & c){c=::tolower(c);});

        cout<<s;
    }

    cout<<"\n";

    return 0;
}