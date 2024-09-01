#include<bits/stdc++.h>

using namespace std;

#define el "\n"
#define ll long long
#define yes cout << "YES" << el
#define no cout << "NO" << el
#define vll vector<ll>
#define rep(i,a,b) for(ll i=a; i<b; i++)
#define mll map<ll,ll>

void solve();

int main(){
    ll t; 
    // cin>>t;
    t = 1;
    
    while(t--){
        solve();
    }

    return 0;
}

void solve(){
    ll a, b; cin>>a>>b;
    ll suma = a+b;

    cout<<6-suma<<el;

    return;
}