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
    ll sum = a[0] - '0' + a[1] - '0';
    cout << sum << el;
    return;
}