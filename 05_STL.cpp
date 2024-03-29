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


// TODO:
void expalinSet() {     // insert, erase, count, find, lower_bound, upper_bound => O(log N)   // clear => O(n)  // size => O(1)

// Everything is in "SORTED ORDER" and "UNIQUE"

    set<string> st1;
    st1.emplace("hello");
    set<int> my_set = {3, 1, 4, 2, 5};

    set<int> st;
    st.insert(1);   // {1}
    st.emplace(2);  // {1, 2}
    st.insert(2);   // {1, 2}           // It don't store the value because Set store unique data
    st.insert(4);   // {1, 2, 4}        // It will only store data in unique
    st.insert(3);   // {1, 2, 3, 4}

    // Functionality of insert in vector
    // can be used also, that only increases
    // efficiency

    // begin(), end(), rbegin(), rend(), size(),
    // empty() ans swap() are same as those of above

    int cnt = st.count(1);      // 1 (True)
    int cnt = st.count(2);      // 1 (True) (no matter how many times the number is present)
    int cnt = st.count(10);     // 0 (False)

    set<int> s1;
    s1.insert(4);
    s1.insert(1);
    s1.insert(10);
    s1.insert(3);

    cout<< *s1.begin() << "\n";  // 1    // beacause set arrange the element in sorted order
    s1.erase(s1.begin());
    cout<< *s1.begin() << "\n";  // 3
    s1.insert(-1);
    cout<< *s1.begin();          // -1

    // {1, 2, 3, 4, 5}          
    auto it = st.find(3);       // returns iterator to element with value x. Returns s.end() if not found.

    // {1, 2, 3, 4, 5}
    auto it = st.find(6);

    // {1, 4, 5}
    st.erase(5);    // erase 5 
    int cnt = st.count(5);      // 0 (False)


    auto it = st.find(3);
    st.erase(it);           // it takes constant time

    // {1, 2, 3, 4, 5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2);     // after erase {1, 4, 5} [first, last)

    // size swap empty begin same as other 

    // lower_bound{} and upper_bound{} function works in the same way
    // as in vector it does.

    // This is the synatx
    auto it = st.lower_bound(2);    // returns iterator to the first element which is >= x. Returns s.end() if not found.

    auto it = st.upper_bound(3);    // returns iterator to the first element which is > x. Returns s.end() if not found.

}


// TODO:
void explainMultiSet() {

// Everything is same as set
// only stores duplicate elements also

    multiset<int> ms;
    ms.insert(1);    // {1}
    ms.insert(1);    // {1, 1}
    ms.insert(1);    // {1, 1, 1}
    ms.insert(1);    // {1, 1, 1, 1}
    ms.emplace(1);   // {1, 1, 1, 1, 1}

    // It can also store mutiple occurance operator also like {1, 1, 2, 2, 3, 3}

    int cnt = ms.count(1);      // it will count the number of 1

    // only a single one erased
    ms.erase(ms.find(1));

    ms.erase(1);     // all 1 are erased (erase element)

    // rest all the functions are same as set

}


// TODO:
void explainUNSet() {       // O(1)     Worst Case => O(n)

// It does not store data in sorted order rest same as set
// lower_bouns and Upper_bound functions does not work, rest all the funtions are same as above
// It soes not store any particular order and it has better complexity
// In most cases, except some when collision happens

    unordered_set<int> st;

}


// TODO:
void explainMap() {

// Key Vaue Pairs (Unique Key, but might be sam Value)
// Map store "Unique Keys" in "Sorted Order"
// Common Usecase :- Count Frequency of various objects

    map<int, int> mpp;                 // (1 key, 1 Value)
    map<int, pair<int, int>> mpp2;      // (1 key, 2 Value)
    map<pair<int, int>, int> mpp3;      // (2 key, 1 Value)

    mpp[1] = 2;             // -|
    mpp.insert({3, 1});     //  |-> [ {1, 2} {2, 4} {3, 1} ]       // sorted order (keys)
    mpp.insert({2, 4});     // -|

    for (auto it : mpp) {
        cout<< it.first << " " << it.second <<endl;     // prints like above
    }

    cout<< mpp[1];  // 2            // value of Key 1 is 2
    cout<< mpp[5];  // 0 or null    // becuae there is no key number 5

    auto it = mpp.find(3);
    cout<< it->second;      // 1 (gives the second element values of element 3)

    auto it = mpp.find(5);  // as 5 is not there so it will point after the mpp

    // This is the syntax
    auto it = mpp.lower_bound(2);

    auto it = mpp.upper_bound(3);

    // erase swap size empty are same as above

}


// TODO:
void explainMultiMap() {    // log(n)

// Everthing is same as map, but it can store "Duplicate Keys" in "Sorted Order"

}


// TODO:
void explainUnorderedMap() {    // O(1)    worst case => O(n)

// Everthing is same as map, but it can store "Unique Keys" in "Random Order"

}




// TODO:                                        // This function is for the code in below
bool comp(pair<int, int> p1, pair<int, int> p2) {
    if (p1.second < p2.second) return true;
    if (p1.second > p2.second) return false;
    
    // they are same
    if (p1.first < p2.first) return true;

    return false;
}

void explainSorting() {     // O(NlogN)

// Quick Sort, Insertion Sort, Heap Sort
// If you want to sort vectors, pairs, arrays, list

    pair<int, int> demo[5] = {{1,2}, {5,2}, {8,1}, {1,0}, {3,4}};       // (in case of pair)
    sort(demo, demo+5);    // {1,0}  {1,2}  {3,4}  {5,2}  {8,1}

    // if you want a particular part to be sort (in case of vector)
    vector<int> a = {1, 3, 5, 8, 4};
    sort(a.begin()+2, a.end());                   
    for (int i=0; i<4; i++) {
        cout<< a[i] << " ";                // {1, 3, 4, 5, 8}
    }

    vector<int> b = {1, 9, 6, 7, 3};
    // Sorting in ascending order
    sort(b.begin(), b.end());
    // Sorting in Decending order
    sort(b.begin(), b.end(), greater<int>());

    // Sorting in MyWay (modificated)
    pair<int, int> z[] = {{1, 2}, {2, 1}, {4, 1}};
    // sort it according to second element in ascending order
    // if second element is same, then sort
    // it according to first element but in descending order
    sort(z, z+3, comp);
    // {4, 1} {2, 1} {1, 2}

    int num = 7;                           // binary of 7 = 111
    int cnt = __builtin_popcount(num);     // print 3   (number of 1)

    long long num = 16579846489659;
    int cnt = __builtin_popcountll(num);   //put ll in last

    string s = "123";           // if you want to print all the permutations then 
    sort(s.begin(), s.end());   // you have to sort them first
    do {
        cout<< s <<endl;
    } while (next_permutation(s.begin(), s.end()));

    int c[] = {1, 2, 3, 4, 5};
    int maxi = *max_element(c, c+5);
    int mini = *min_element(c, c+5);
 
}

 
//  FIXME:
int main() {

    // C++ STL
    // 1. Algorithm
    // 2. Container
    // 3. Functions
    // 4. Iterators

}