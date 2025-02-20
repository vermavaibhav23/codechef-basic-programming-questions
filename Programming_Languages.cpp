//Codechef - Programming Languages
//Compiler - C++
//https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/PROGLANG

#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int A,B,A1,A2,B1,B2,cases;
    cin>>cases;
    for(int i=0;i<cases;i++){
        cin>>A>>B>>A1>>B1>>A2>>B2;
        
        if((A1 == A && B1 == B) || (A1 == B && B1 == A)) {
            cout<<"1"<<endl;
        }
        else if ((A2 == A && B2 == B) || (A2 == B && B2 == A)) {
            cout<<"2"<<endl;
        }
        else cout<<"0"<<endl;
    }
    return 0;

}
