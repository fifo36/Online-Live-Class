#include<bits/stdc++.h>
using namespace std;
#define LL  long long
#define pii pair<int, int>


int main(){
    //freopen("ip.txt", "r", stdin);
    set<string> sat;

    char chAra[201];
    while(scanf(" %[^\n]", chAra) != EOF){
        string str, newStr = "";
        str = chAra;

        for(int i = 0; str[i]; i++) {
            if(isalpha(str[i])) newStr += tolower(str[i]);
            else newStr += ' ';
        }

        stringstream ss(newStr);
        string word;
        while(ss>>word){
            sat.insert(word);
        }
    }
    for(auto it : sat) cout<<it<<'\n';


}


