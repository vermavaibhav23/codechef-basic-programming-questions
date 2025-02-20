//Codechef - Problem Category
//Compiler - C++
//https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/PROBCAT

#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int testcase;
    cin>>testcase;
    int x;
    
    for(int i=0; i<testcase; i++) {
        cin>>x;
        if(x>= 1 && x<100) {
            cout<<"Easy"<<endl;
        }
        else if(x>= 100 && x<200) {
            cout<<"Medium"<<endl;
        }
        else if(x>= 200 && x<=300) {
            cout<<"Hard"<<endl;
        }
    }
    return 0;

}
