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
    ll a1, a2, b1, b2; cin>>a1>>a2>>b1>>b2;
    ll maximoSuneet = max(a1,a2);
    ll minimoSuneet = min(a1,a2);
    ll maximoSamarth = max(b1,b2);
    ll minimoSamarth = min(b1,b2);

    if(maximoSuneet > maximoSamarth && minimoSuneet > minimoSamarth){
        cout<<2<<el;
    }
    else if(maximoSuneet == minimoSuneet && maximoSamarth == minimoSamarth && maximoSuneet == maximoSamarth){
        cout<<0<<el;
    }
    else if(maximoSuneet < maximoSamarth && minimoSuneet < minimoSamarth){
        cout<<2<<el;
    }
    else{
        cout<<1<<el;

    }
    return;
}