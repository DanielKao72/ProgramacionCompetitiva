#include<bits/stdc++.h>
 
#define ll long long
#define el '\n'
#define vll vector<ll>
#define yes() cout << "YES" << el
#define no() cout << "NO" << el
 
using namespace std;
 
void solve();
 
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // ll t; cin>>t;
    ll t =1;
    while(t--)
        solve();
	return 0;
}
 
void solve(){
    ll n, p; cin>>n>>p;
    ll a[n];
    ll mayor=-1;

    for(ll i=0; i<n; i++){
        cin>>a[i];
        if(a[i]>=mayor && a[i]<=p){
            mayor=a[i];
        }
    }

    cout<<mayor<<el;
    return;
}