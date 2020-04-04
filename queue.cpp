#include<bits/stdc++.h>
using namespace std;
#define LL  long long
#define pii pair<int, int>


int main(){

/**FIFO
    front
    q.front();
queue
1 2 3 4 5

stack
5
4
3
2
1

int a[4] = {6, 4, 45, 5};
a[0] = 6, a[1] = 4, a[2] = 45, a[3] = 5

int ara[100][100];
    ara[0] : 1 5 3 67 // ara[0][0] = 1, ara[0][1] = 5
    ara[0][2] = 3, ara[0][3] = 67

    ara[1] : 8 9 83 09
    :
    :
    :
    ara[99]: 98 4 5 8


    queue<int> q;
    queue< queue<int> > q2D;
    queue<int> q2d[1000];
    q2d[0]: 6 9  4  56
    q2d[1]: 1 2 3 1 4
    :
    :
    q2d[999]: 4 5 6

    q2D[n]:
    push, pop -> O(1)
*/


    for(int i = 1; i <= 5; i++) q.push(i);
    while(q.size()){
        cout<<q.front()<<' ';
        q.pop();
    }


}


