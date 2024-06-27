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
    ll t; cin>>t;
    // ll t =1;
    while(t--)
        solve();
	return 0;
}
 
void solve(){
    ll n; cin>>n;
    string s; cin>>s;
    bool hayLetra = false;
    
    for(ll i=0; i< n; i++){
        char letra = s[i];
        
        if(isdigit(letra)){
            if(!hayLetra){
                if( i==0 || (i != 0 && s[i-1] <= letra)){
                    s.push_back(letra);
                }
                else{
                    no();
                    return;
                }
            }
            else{
                no();
                return;
            }
        }
        else{
            hayLetra = true;
            
            if( i==0 || (i != 0 && s[i-1] <= letra)){
                s.push_back(letra);
            }
            else{
                no();
                return;
            }
        }
    }
    
    yes();
    return;
}