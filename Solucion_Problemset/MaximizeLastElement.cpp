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
    ll n; cin>>n;
    vll a(n);

    for(ll i=0; i<n; i++){
        ll x; cin>>x;
        if(i % 2 == 0){
            a.push_back(x);
        }
    }

    sort(a.begin(), a.end());

    cout<<a.back()<<el;
    
    return;
}