#include <bits/stdc++.h>

using namespace std;


int main(){

    int n, i, c=0;
    
    cin>>n;
    
    int a[n];
    
    for(i=0;i<n;i++) cin>>a[i];
    
    int maxx=a[0];
    
    int minn=a[0];
    
    for(i=0;i<n;i++){
    
        if(a[i]>maxx){
        
            maxx=a[i];
            
            c++;
        }
        
        if(a[i]<minn){
        
           minn=a[i];
           
           c++;
        }
    }
    
    cout<<c<<"\n";

    return 0;
}