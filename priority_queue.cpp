#include<bits/stdc++.h>
using namespace std;
#define LL  long long
#define pii pair<int, int>


int main(){
    freopen("ip.txt", "r", stdin);
    priority_queue<int> pq;

    for(int i = 1; i <= 8; i++) {
            int x; cin>>x;
            pq.push(-x);
    }
    pq.push(56);
    //cout<<pq.top();
    while(pq.size()){
        cout<<-pq.top()<<'\n';
        pq.pop();
    }
}



