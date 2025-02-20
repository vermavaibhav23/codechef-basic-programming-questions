//Codechef - Chef and Spells
//Compiler - C++
//https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/CHFSPL

#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int cases,A,B,C;
    cin>>cases;
    int sum = 0;
    
    for(int i=0; i<cases; i++) {
        sum = 0;
        cin>>A>>B>>C;
        if(A==B && B==C && A==C) {
            cout<<A+B<<endl;
            continue;
        }
        if(A>=B || A>=C) {
            sum = sum + A;
        }
        if (B>A || B>=C) {
            sum = sum + B;
        }
        if (C>A || C>B) {
            sum = sum + C;
        }
        cout<<sum<<endl;
    }
    return 0;
}
