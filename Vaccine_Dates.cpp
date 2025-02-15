//Codechef - Vaccine Dates
//Compiler - C++
//https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/VDATES

#include <bits/stdc++.h>
using namespace std;

int vaccine_time(int d,int l,int r) {
    if(d < l) {
        cout<<"Too Early"<<endl;
    }
    else if(d>=l && d<=r) {
        cout<<"Take second dose now"<<endl;
    }
    else cout<<"Too Late"<<endl;
    return 0;
}

int main() {
    // your code goes here
    int testcases;
    cin>>testcases;
    int d,l,r;
    for(int i=0; i<testcases; i++) {
        cin>>d;
        cin>>l;
        cin>>r;
        vaccine_time(d,l,r);
    }

}
