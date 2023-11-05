#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int>a,pair<int,int>b){
    if (a.second==b.second){
        /*if both frequencies are same then
        returns true when a.first<b.first
        else it automatically returns false*/
        return a.first < b.first;
    }
    /*returns true when frq of a is less than 
    frq of b on other hand returns false*/
    return a.second < b.second;
}

// if it returns true, continues for further operations
// if it returns false, the sorting process takes place
int main(){
    /*We try to sort the array elements basing upon 
    their frequencies in descending order or as
    ascending order using CUSTOM COMPERATOR*/
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++) cin>>arr[i];
    unordered_map<int,int>up;
    for (auto i:arr) up[i]++;
    vector<pair<int,int>>vp(up.begin(),up.end());
    sort(vp.begin(),vp.end(),comp); 
    //sorts basing upon increasing order of their frequencies
    vector<int>v;
    for (auto it:vp){
        int t = it.second;
        while (t--){
            v.push_back(it.first);
        }
    }
    for (auto i:v) cout<<i<<" ";
    return 0;
}
