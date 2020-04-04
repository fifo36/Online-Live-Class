#include<bits/stdc++.h>
using namespace std;
#define LL  long long
#define pii pair<int, int>


int main(){
    int T; cin>>T;
    for(int t = 1; t <= T; t++){
        int n; cin>>n;
        vector<int> v;
        int x;
        for(int i = 1; i <= n; i++) {
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        printf("Case %d: %d\n", t, v.back());
    }


}


