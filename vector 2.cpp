#include <bits/stdc++.h>
using namespace std;


int main(){
    freopen("ip.txt", "r", stdin);
    vector<string> v;
    for(int i = 0; i < 5; i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
   // cout<<'\n';
   //sort(v.begin(), v.end());
   //reverse(v.begin(), v.end());
    for(string it : v) cout<<it<<' ';
    cout<<'\n'<<'\n';
    sort(v.begin()+1, v.begin()+3);
    for(auto it : v) cout<<it<<' ';
    cout<<'\n';

//    bubble sort: O(n^2)
//    merge_sort: O(nlogn)
}
