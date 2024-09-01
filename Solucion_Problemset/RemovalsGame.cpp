#include<bits/stdc++.h>

using namespace std;

#define el "\n"
#define ll long long
#define yes cout << "YES" << el
#define no cout << "NO" << el
#define vll vector<ll>
#define rep(i,a,b) for(ll i=a; i<b; i++)
#define mll map<ll,ll>
#define bob cout<<"Bob"<<el
#define alice cout<<"Alice"<<el

void solve();

int main(){
    ll t; 
    cin>>t;
    //t = 1;
    
    while(t--){
        solve();
    }

    return 0;
}

void solve(){
    ll n; cin>>n;
    vll a(n), b(n);

    rep(i,0,n) cin>>a[i];
    rep(i,0,n) cin>>b[i];

    if(a == b){
        bob;
        return;
    }

    reverse(a.begin(), a.end());

    if(a == b){
        bob;
        return;
    }

    alice;

    return;
}