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
    ll l,r,L,R; cin>>l>>r>>L>>R;

    ll limIzq = max(l,L);
    ll limDer = min(r,R);
    ll ans = limDer - limIzq;

    if(ans < 0){
        cout<<1<<el;
        return;
    }
    
    if(min(l,L) < limIzq){
        ans++;
    }

    if(max(r,R) > limDer){
        ans++;
    }

    cout<<ans<<el;

    return;
}