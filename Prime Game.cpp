#include <cstdio>
#include <cstring>
#include <iostream>
#include <list>
#include <map>
#include <set>
#include <vector>
#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

vector<bool> prime(1000003,true);
vector<int> arr(1000003,0);

int main()
{
    prime[1]=false;
    prime[0]=false;
    for(int i=2;i<1000003;i++){
        if(prime[i]==false){continue;}
        for(int j=2*i;j<1000003;j+=i){
            prime[j]=false;
        }
    }

  int temp=0;
  for(int i=1;i<1000003;i++){
    if(prime[i]==true){temp++;}
      arr[i]=temp;
  }

    fastio
    int t;
    cin>>t;
    int x,y;
    while(t--){
        cin>>x>>y;
        int b=arr[x];

       
        if(b>y){
            cout<<"Divyam"<<endl;
        }else{
            std::cout << "Chef" << '\n';
        }

    }



    return 0;
}
