#include <cstdio>
#include <cmath>
#include <cstring>
#include <iostream>
#include <list>
#include <map>
#include <set>
#include <vector>
#include<stdlib.h>
#include<bits/stdc++.h>
#include<array>
#define ll long long int
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int team(vector<char> t1,vector<char> t2){
    set<char> t3;
    for(int i=0;i<t1.size();i++){
        t3.insert(t1[i]);
    }
    for(int i=0;i<t2.size();i++){
        t3.insert(t2[i]);
    }
    return t3.size();
}

int main()
{
    fastio
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string temp;
        vector<string> word;
        map<string,vector<char> > grid;
        for(int i=0;i<n;i++){
            cin>>temp;
            char c=temp[0];
            temp.erase(0,1);
            grid[temp].push_back(c);
        }
        for(auto k : grid){word.push_back(k.first);}
        int hit=0;
        for(int i=0;i<word.size();i++){
            for(int j=i+1;j<word.size();j++){
                    int kk=team(grid[word[i]],grid[word[j]]);
                    hit+=(kk -grid[word[i]].size())*(kk -grid[word[j]].size());
            }
        }
        cout<<2*hit<<endl;
}



    return 0;
}
