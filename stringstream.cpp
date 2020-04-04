/// string er word gulo alada korar jonno & unique word print korar jonno
#include<bits/stdc++.h>
using namespace std;


int main(){
    set<string> sat;
    string str; getline(cin, str);

    stringstream ss(str);
    string word;
    while(ss>>word){
        sat.insert(word);
    }

    for(auto it : sat) cout<<it<<'\n';
}


