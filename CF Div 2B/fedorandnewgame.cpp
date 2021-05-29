#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll countbits(ll c){
    ll count =0; 
    while(c){
        ++count;
        c=c&(c-1);
    }
    return count;
}

ll check_friendship(ll a, ll b, ll k,ll mask_maker){
    
    ll no_unique, c=a^b , mask = (1<<mask_maker)-1;
    c=c&mask;
    no_unique=countbits(c);
    if(no_unique>k){
        return 0;
    }
    return 1;
}

int main(){
    ll n , m , k ; 
    cin>> n >> m >> k;
    vector<int> a;
    ll temp;
    for(ll i=0; i<m ; ++i){
        cin>>temp;
        a.push_back(temp);
    }
    cin>>temp;
    ll ans=0;
    for(ll i=0; i<m ; ++i){
        ans+=check_friendship(a[i], temp,k,n);
    }
    cout<<ans;
}