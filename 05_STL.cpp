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

// TODO:
void explainVector() {      // v.clear() => O(n)    // rest other things => O(1)

// It is a dynamic sized array. Number of elements can be increased or decreased. 
    
    vector<int> v;              // empty vector of integers
    vector<int> w(10);          // vector of integers with 10 elements (all 0)
    vector<char> x(10,'h');     // vector of chars with 10 elements (all ‘h’)


    // v.push_back(x) - insert the value x to the end of the vector. O(1)
    // v.emplace_back(x) - similar to puch_back but faster then push_back
    // v.pop_back()   - erase the last element. O(1)
    // v.clear() - erase all elements. O👎
    // v.size() - returns the current size of the vector. O(1)
    // [] operator - can be used to access elements like an array. O(1)
    
    cout << v[0]; // prints the first element in the vector

    vector<int> v;
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);

    // cout<< v[0] << " " << v[1] << " " << v[2] <<endl;      // 5 6 7
    cout<< v.size() <<endl;                                   // 3

    v.pop_back();
    cout<< v.size();                                          // 2
    v.push_back(0);
    
    // cout<< v[0] << " " << v[1] << " " << v[2];             // 5 6 0
    cout<< v.size() <<endl;                                   // 3

    v.clear();
    cout<< v.size() <<endl;                                   // 0


    // synatax of push_back and embrace_back
    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    vector<int> v1(5, 20);
    // vector<int> v2(v1);             // Now this we make a copy of container v1

    // Accessing data from vector
    cout<< v1[0] << " " << v1[4];      // 0 and 4 are the index of vector

    // Access the memory location and value         v = {10, 20, 30, 40, 50}
    vector<int>::iterator it = v.begin();          // 10 -> 135648

    it++;                                          
    cout<< *(it) << " ";                           // 20

    it = it + 2;
    cout<< *(it) << " ";                           // 40

    vector<int>::iterator it = v.end();           // it will point he location just after the last element in vector
    it--;
    cout<< *(it) << " ";                           // 50

    cout<< v.back() << "";      // 50 (last element)

    // print all the element in vector using loop
    for (vector<int>::iterator it=v.begin(); it!=v.end(); it++) {
        cout<< *(it) << " ";
    }
                    // OR
    for (auto it=v.begin(); it!=v.end(); it++) {
        cout<< *(it) << " ";
    }

    // Deleteing multiple element in vector
    // v = {10, 20, 30, 40, 50}
    v.erase(v.begin()+2, v.begin()+4);     // v = {10, 40, 50}
    //     starting        ending + 1

    // Insert Elements in Vector
    vector<int> v(2, 100);          // {100, 100}
    v.insert(v.begin(), 300);       // {300, 100, 100}
    v.insert(v.begin()+1, 2, 10);    // {300, 10, 10, 100, 100}

    vector<int> copy{2, 50};        // {50, 50}
    v.insert(v.begin(), copy.begin(), copy.end());  // {50, 50, 300, 10, 10, 100, 100}

    vector<int> v8 = {10, 20};
    vector<int> v9 = {30, 40};
    v8.swap(v9);    // v8 ={30,40}   v9 ={10,20}

}


//  FIXME:
int main() {

    // C++ STL
    // 1. Algorithm
    // 2. Container
    // 3. Functions
    // 4. Iterators

}
