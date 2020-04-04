#include <bits/stdc++.h>
using namespace std;
#define LL   long long
#define pii  pair<int, int>


int main(){
    vector<int> v;
    vector<int>:: iterator it;
    for(int i = 0; i < 5; i++) v.push_back(i);
//    for(int i = 0; i < 5; i++) cout<<(&v[i])<<' ';
    v.erase(v.begin()+1, v.begin() + 3);
    for(it = v.begin(); it != v.end(); it++) cout<<*it<<' ';

}
