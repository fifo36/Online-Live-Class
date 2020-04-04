#include<bits/stdc++.h>
using namespace std;
#define LL  long long
#define pii pair<int, int>


int main(){
    set<int> st;
    for(int i = 1; i <= 10; i++) st.insert(i);
    for(int i = 1; i <= 5; i++) st.insert(i);
    ///insert complexity : O(logn);
    //for(auto it : st) cout<<it<<' ';
    ///int ara[10000000] = {0};  !!!
    ///input 5, ara[5] = 1,
    ///input 6, ara[6] = 1,
    ///input 67, ara[(int)1e9] = 1,
    //cout<<st.size()<<'\n';
    set<int> :: iterator it;
    set<int> :: reverse_iterator rit;
    for(it = st.begin(); it != st.end(); it++) cout<<*it<<' ';
    cout<<"\n\n";
    for(rit = st.rbegin(); rit != st.rend(); rit++) cout<<*rit<<' ';


}


