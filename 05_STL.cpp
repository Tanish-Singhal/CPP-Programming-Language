// CPP STL

#include <bits/stdc++.h>
using namespace std;

// TODO:
void explainPair() {

// Pair is a way of creating a Composite-Datatype composed of 2 different primitive/composite datatypes.
// It can be useful whe you wan to return multiple values from a single function

    pair<int, int> p = {1, 3};
    pair<int, string> q = {4, "hello"};      // char, float, etc can also be used
    
    cout<< p.first << " " << p.second <<endl;
    cout<< q.first << " " << q.second <<endl; 

    pair<int, pair<int, int>> r = {1, {3, 4}};
    cout<< p.first << " " << r.second.second << " " << r.second.first <<endl;

    q.first = 17; 
    cout<< q.first << " " << q.second <<endl;

    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    cout<< arr[1].second <<endl;
}


//  FIXME:
int main() {

    // C++ STL
    // 1. Algorithm
    // 2. Container
    // 3. Functions
    // 4. Iterators

}