
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
    ll a, b; cin>>a>>b;
    ll ans = 0;

    if(b-a == 0){
        cout<<0<<el;
        return;
    }
    else if(b-a == 1){
        cout<<1<<el;
        return;
    }
    else{
        ans = 1 + (b - (a+1));
    }

    cout<<ans<<el;

    return;
}