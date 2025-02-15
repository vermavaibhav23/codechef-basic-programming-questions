//Codechef - Motivation
//Compiler - C++
//https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/IMDB

#include <bits/stdc++.h>
using namespace std;

int best_movie(int Number_of_movies, int Space_remaining) {
    int space_required[Number_of_movies];
    int imdb[Number_of_movies];
    for(int i=0; i< Number_of_movies; i++) {
        cin>>space_required[i];
        cin>>imdb[i];
    }
    int max = 0;
    int index = 0;
    for(int j= 0; j < Number_of_movies; j++) {
        if(imdb[j] > max && space_required[j] <= Space_remaining) {
            max = imdb[j];
            index = j;
        }
    }
    return max;
}

int main() {
    // your code goes here
    int testcase;
    cin>>testcase;
    int Number_of_movies, Space_remaining;
    
    for(int i=0; i<testcase; i++) {
        cin>>Number_of_movies;
        cin>>Space_remaining;
        cout<<best_movie(Number_of_movies, Space_remaining)<<endl;
    }
    return 0;
}
