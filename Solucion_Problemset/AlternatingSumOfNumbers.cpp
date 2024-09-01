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
    vll v(n+1);
    ll sum1 = 0, sum2 = 0;

    for(ll i=1; i<=n; i++){
        cin>>v[i];
        if(i % 2 == 0){
            sum1 += v[i];
        }
        else{
            sum2 += v[i];
        }
    }

    cout<<sum2 - sum1<<el;
    return;
}