//Codechef - Hoop Jump
//Compiler - C++
//https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/HOOPS

#include <bits/stdc++.h>
using namespace std;

int lasthoop(int S, int N) {
    if(S == N) {
        return S;
    }
    int a = lasthoop(S+1,N-1);
    return a;
}

int main() {
    int testcase;
    cin>>testcase;
    int a;
    for(int i=0; i<testcase; i++) {
        cin>>a;
        cout<<lasthoop(1,a)<<endl;
    }
    return 0;

}
