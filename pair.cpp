#include<bits/stdc++.h>
using namespace std;
#define LL  long long

int main(){
    freopen("ip.txt", "r", stdin);
    pair<int, int> pii;
    //pair< pair<int, int>, int> ppi;
    /// it.first.first, it.first.second, it.second

    vector<pair<int, int> > vp;
    for(int i = 1; i <= 5; i++){
        int x, y; cin>>x>>y;
        vp.push_back({x, y});
    }
    sort(vp.begin(), bp.end()); ///sort kore
    for(auto it : vp){
        cout<<it.first<<' '<<it.second<<'\n';
    }
}


