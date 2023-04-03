// CPP STL

#include <bits/stdc++.h>
using namespace std;

// TODO:
void explainVector() {      // v.clear() => O(n)    // rest other things => O(1)

// It is a dynamic sized array. Number of elements can be increased or decreased. 
    
    vector<int> v;              // empty vector of integers
    vector<int> w(10);          // vector of integers with 10 elements (all 0)
    vector<char> x(10,'h');     // vector of chars with 10 elements (all ‘h’)


    // v.push_back(x) - insert the value x to the end of the vector. O(1)
    // v.emplace_back(x) - similar to puch_back but faster then push_back
    // v.pop_back()   - erase the last element. O(1)
    // v.clear() - erase all elements. O(n)
    // v.size() - returns the current size of the vector. O(1)
    // [] operator - can be used to access elements like an array. O(1)
    
    cout << v[0];           // prints the first element in the vector
    cout << v[3];

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


    // syntax of push_back and emplace_back
    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    vector<int> v1(5, 20);             // {20, 20, 20, 20, 20}
    // vector<int> v2(v1);             // Now this we make a copy of container v1

    // Accessing data from vector
    cout<< v1[0] << " " << v1[4];      // 0 and 4 are the index of vector

    // Access the memory location and value         
    vector<int> v = {10, 20, 30, 40, 50};
    vector<int>::iterator it = v.begin();          // 10 -> 135648

    it++;                                          
    cout<< *(it) << " ";                           // 20

    it = it + 2;
    cout<< *(it) << " ";                           // 40

    vector<int>::iterator it = v.end();            // it will point he location just after the last element in vector
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
    vector<int> v = {10, 20, 30, 40, 50};
    v.erase(v.begin()+1);                  // v = {10, 30, 40, 50}
    
    vector<int> v = {10, 20, 30, 40, 50};
    v.erase(v.begin()+2, v.begin()+4);     // v = {10, 40, 50}
    //     starting        ending + 1

    // Insert Elements in Vector
    vector<int> v(2, 100);          // {100, 100}
    v.insert(v.begin()+1, 3);       // {100, 3, 100}
    v.insert(v.begin()+1, 2, 5);    // {100, 5, 5, 3, 100}

    vector<int> copy{2, 50};        // {50, 50}
    v.insert(v.begin(), copy.begin(), copy.end());  // {50, 50, 300, 10, 10, 100, 100}

    cout<< v.size();
    v.clear();
    cout<< v.empty();       // 1-> True & 0-> False

    vector<int> v8 = {10, 20};
    vector<int> v9 = {30, 40};
    v8.swap(v9);    // v8 ={30,40}   v9 ={10,20}

}

// TODO:
void explainPair() {

// Pair is a way of creating a Composite-Datatype composed of 2 different primitive/composite datatypes.
// It can be useful whe you wan to return multiple values from a single function

    pair<int, int> p = {1, 3};
    pair<int, string> q = {4, "hello"};      // char, float, etc can also be used
    
    cout<< p.first << " " << p.second <<endl;   //  1 3
    cout<< q.first << " " << q.second <<endl;   // 4 hello

    pair<int, pair<int, int>> r = {1, {3, 4}};
    cout<< r.first << " " << r.second.second << " " << r.second.first <<endl;   // 1 3 4

    q.first = 17;                               // updating the pairs
    cout<< q.first << " " << q.second <<endl;   // 17 hello

    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    cout<< arr[1].second <<endl;

}

// TODO:
void explainlist() {

    list<int> ls;

    // emplace is better than push
    ls.push_back(2);    // {2}
    ls.emplace_back(4); // {2, 4}

    ls.push_front(5);   // {5, 2, 4}
    // Why we use list because insert operation in vector is costlier than front (Time complexity is high)

    ls.emplace_front(); // {2, 4}

    // rest function are same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap

}

// TODO:
void explainDeque() {

    deque<int> dq;

    // emplace is better than push
    dq.push_back(1);        // {1}
    dq.emplace_back(2);     // {1, 2}
    dq.push_front (4);      // {4, 1, 2}
    dq.emplace_front(3);    // {3, 4, 1, 2}

    dq.pop_back();          // {3, 4, 1}
    dq.pop_front();         // (4, 1)

    dq.back();

    dq.front();

    // rest function are same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap

}


// TODO:
void expalinStack() {       // all operations are of O(1)

// LIFO (Last In First Out)
    
    stack<int> st;

    // emplace is better than push
    st.push(1);     // {1}
    st.push(2);     // {2, 1}
    st.push(3);     // {3, 2, 1}
    st.push(3);     // {3, 3, 2, 1}
    st.emplace(5);  // {5, 3, 3, 2, 1}

    cout<< st.top();    // print 5     " str[2] is invalid here"

    st.pop();       // st look like (3, 3, 2, 1)

    cout<< st.top();    // 3

    cout<< st.size();   // 4

    cout<< st.empty();  // False

    stack<int> st1, st2;
    st1.swap(st2);

}


// TODO:
void explainQueue() {       // all operations are of O(1)

// FIFO (First In First Out)
    
    queue<int> q;

    // emplace is better than push
    q.push(1);      // {1}
    q.push(2);      // {1, 2}
    q.emplace(4);   // {1, 2, 4}

    q.back() += 5;  // 9 (4+5=9)

    cout<< q.back();    // 9

    // q is {1, 2, 9}
    cout<< q.front();   // print 1

    q.pop();    // {2, 9}

    cout<< q.front();   // print 2
    
    // size swap empty same as stack

}


// TODO:
void explainPriorityQueue() {                                // MAX HEAP

// Maximum Element stays at the top

    priority_queue<int> pq;
    pq.push(5);     // {5}
    pq.push(2);     // {5, 2}               // log(n)
    pq.push(8);     // {8, 5, 2}
    pq.emplace(10); // {10, 8, 5, 2}

    cout<< pq.top();    // print 10         // O(1)

    pq.pop();       // {8, 5, 2}            // Log(n)

    cout<< pq.top();    // print 8

    // size swap empty same as other

    // If you want to Make the lowest element at the        // MIN HEAP
    priority_queue<int, vector<int>, greater<int>> pq;      // syntax
    pq.push(5);     // {5}
    pq.push(2);     // {2, 5}
    pq.push(8);     // {2, 5, 8}
    pq.emplace(10); // {2, 5, 8, 10}
    
    cout<< pq.top();    // print 2

}


//  FIXME:
int main() {

    // C++ STL
    // 1. Algorithm
    // 2. Container
    // 3. Functions
    // 4. Iterators

}
