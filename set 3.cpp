#include<bits/stdc++.h>
using namespace std;
#define LL  long long
#define pii pair<int, int>


struct data{
    string name;
    int income, weight;
    double height;
    data(string n, int in, int w, double h){
        name = n;
        income = in;
        weight = w;
        height = h;
    }
};

bool compare(data A, data B){
    if(A.income == B.income){
        if(A.height == B.height){
            if(A.weight == B.weight){
                return (A.name.size() < B.name.size());
            }
            else return A.weight < B.weight;
        }
        else return A.height > B.height;
    }
    else return A.income > B.income;
}

int main(){
    vector<data> v;
    vector<data> :: iterator it;
    string n;
    int in, w;
    double h;
    for(int i = 1; i <= 3; i++){
        cin>>n>>in>>w>>h;
        v.push_back(data(n, in, w, h));
    }
//    for(it = v.begin(); it != v.end(); it++){
//        auto val = *it;
//        cout<<val.name<<' ';
//    }
    sort(v.begin(), v.end(), compare);
    for(auto it : v){
        cout<<it.name<<' '<<it.income<<' '<<it.weight<<' '<<it.height<<'\n';
    }

}
/**
kamal 56 67 5.7
kamal 56 52 4.8
abir 58 3 4.9

*/
