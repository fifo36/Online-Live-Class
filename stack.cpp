#include<bits/stdc++.h>
using namespace std;
#define LL  long long
#define pii pair<int, int>


int main(){
    stack<int> st;
    for(int i = 1; i <= 5; i++) st.push(i);


    while(st.size()){
        cout<<st.top()<<'\n';
        st.pop();
    }
    /**
    problem: parentheses
    if(s[i] == '(') st.push(s[i]);
    else st.pop();
    ()()
    ()()
    LIFO



    */

}
/**






*/
