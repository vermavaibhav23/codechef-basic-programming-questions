//Codechef - Richie Rich
//Compiler - C++
//https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/CHFRICH


#include <bits/stdc++.h>
using namespace std;

int worth(int a, int b, int x) {
    int diff = b - a;
    return diff/x;
}
int main() {
    // your code goes here
    int testcases;
    cin>>testcases;
    int a,b,c;
    
    for(int i=0; i<testcases; i++) {
        cin>>a;
        cin>>b;
        cin>>c;
        cout<<worth(a,b,c)<<endl;
    }
    return 0;
}
