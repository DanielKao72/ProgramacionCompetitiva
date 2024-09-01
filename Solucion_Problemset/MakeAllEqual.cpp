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
    ll t; cin>>t;
    
    while(t--){
        solve();
    }

    return 0;
}

void solve(){
    ll n; cin>>n;
    mll mp;

    rep(i, 0, n){
        ll x; cin>>x;
        mp[x]++;
    }

    ll maximo = 0;
    for(const auto& x : mp){
        maximo = max(maximo, x.second);
    }

    cout<<n - maximo<<el;

    return;
}