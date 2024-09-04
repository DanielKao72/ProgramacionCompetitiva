
#include<bits/stdc++.h>

using namespace std;

#define el "\n"
#define ll long long
#define yes cout << "YES" << el
#define no cout << "NO" << el
#define vll vector<ll>
#define vc vector<char>
#define rep(i,a,b) for(ll i=a; i<b; i++)
#define mll map<ll,ll>
#define bob cout<<"Bob"<<el
#define alice cout<<"Alice"<<el

vector<char> segmentedSieve(long long L, long long R) {
    // generate all primes up to sqrt(R)
    long long lim = sqrt(R);
    vector<char> mark(lim + 1, false);
    vector<long long> primes;
    for (long long i = 2; i <= lim; ++i) {
        if (!mark[i]) {
            primes.emplace_back(i);
            for (long long j = i * i; j <= lim; j += i)
                mark[j] = true;
        }
    }

    vector<char> isPrime(R - L + 1, true);
    for (long long i : primes)
        for (long long j = max(i * i, (L + i - 1) / i * i); j <= R; j += i)
            isPrime[j - L] = false;
    if (L == 1)
        isPrime[0] = false;
    return isPrime;
}

void solve();

int main(){
    ll t; 
    //cin>>t;
    t = 1;
    
    while(t--){
        solve();
    }

    return 0;
}

void solve(){
    ll n, k; cin>>n>>k;

    if(n == 2 && k == 0){
        yes;
        return;
    }
    else if(n==2 && k!=0){
        no;
        return;

    }

    ll j = 0;

    vc v = segmentedSieve(2, n);
    ll cnt = count(v.begin(), v.end(), true);
    vll sumPrimePairsTogether(cnt-1, 0);
    vll primes(cnt, 0);
    sumPrimePairsTogether[0] = primes[0] = 2;

    rep(i,1,v.size()){
        if(v[i]){
            primes[j] = 2+i;
            j++;
        }
    }

    rep(i,1,cnt){
        sumPrimePairsTogether[i-1] = primes[i] + primes[i-1];
    }

    if(cnt >= k){
        for(ll i=0; i<primes.size(); i++){
            if(count(sumPrimePairsTogether.begin(), sumPrimePairsTogether.end(), primes[i]-1) == 1){
                k--;
            }
        }
    }
    else{
        no;
        return;
    }

    if(k <= 0){
        yes;
    }
    else{
        no;
    }

    return;
}