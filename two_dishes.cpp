//Codechef - Two Dishes
//Compiler - C++
//https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/TWODISH

#include <bits/stdc++.h>
using namespace std;
void can_chef_prep(int guests, int fruits, int vegetables, int fish) {
    if (vegetables >= guests && (fruits+fish) >= guests) {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}
int main() {
    // your code goes here
    int testcase;
    cin>>testcase;
    int g,f,v,fi;
    
    for(int i = 0 ; i< testcase; i++) {
        cin>>g>>f>>v>>fi;
        can_chef_prep(g,f,v,fi);
    }
    return 0;
}
