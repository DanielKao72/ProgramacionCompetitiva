
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
    ll one, twos; cin>>one>>twos;

    if(twos % 2 != 0){
        twos = 1;

        if(one >= 2){
            twos = 0;
            one -= 2;
        }
    }
    else twos = 0;

    if(one % 2 == 0) one = 0;

    if(twos == 0 && one == 0) yes;
    else no;

    return;
}