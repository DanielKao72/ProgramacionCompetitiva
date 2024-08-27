#include<bits/stdc++.h>

using namespace std;

#define el "\n"
#define ll long long
#define yes cout << "YES" << el
#define no cout << "NO" << el
#define vll vector<ll>

void solve();

int main(){
    ll t; cin>>t;
    
    while(t--){
        solve();
    }

    return 0;
}

void solve(){
    string a; cin>>a;

    if(a.size() < 3){
        no; 
        return;
    } 

    if(a[0] == '1' && a[1] == '0' && a[2] != '0'){
        if(a.size() == 3 && a[2] == '1'){
            no; 
            return;
        }
        else{
            yes; 
            return;
        }
    }
    else{
        no; 
        return;
    }
}