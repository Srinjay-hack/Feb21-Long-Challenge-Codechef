#include <algorithm>
#include <cstdio>
#include <cmath>
#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
#include<array>
#define ll long long int
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

ll find(ll x,ll y,ll z){
    ll k=abs(x-y)+abs(y-z)+abs(z-x);
    return k;
}



int main()
{
    fastio
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        if(n%2==0){
            ll z=find(arr[0],arr[n/2],arr[n-1]);
            ll x=find(arr[0],arr[n/2+1],arr[n-1]);
            cout<<max(z,x)<<endl;
        }else{
            ll z=find(arr[0],arr[n/2],arr[n-1]);
            cout<<z<<endl;
        }


    }


    return 0;
}
