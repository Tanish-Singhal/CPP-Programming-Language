#include <bits/stdc++.h>
using namespace std;

int main() {

    cout<<endl;

    cout<< "Overflow" <<endl;     //TODO: Overflow in C++
    cout<<endl;
    
    cout<< "Ranges" <<endl<<endl;
    //     -10^9  <        int        < 10^9
    //     -10^12 <      long int     < 10^12
    //     -10^18 <   long long int   < 10^18

    int a = 100000 ;
    int b = 100000;
    int c = a * b;
    cout<< c <<endl;      // so here output was not 1410065408 because the range of int was [-10^9 < int < 10^9]
    
    cout<<endl;
    
    int mx = INT_MAX;     // it prints the maximum value which can be stored by int was 2147483647
    cout<< mx <<endl;
    cout<< mx + 1 <<endl;   // here output was -2147483647 because     (-2147483647) INT_MIN < int < INT_MAX (2147483647)
//                                                                                    ^               |
//                                                                                    |----  +1   ----|     
    
    cout<<endl;
    
    int min = INT_MIN;
    cout<< min <<endl;
    cout<< min - 1 <<endl;   // here output was -2147483647 because     (-2147483647) INT_MIN < int < INT_MAX (2147483647)
//                                                                                     |               ^
//                                                                                     |----  +1   ----|     
    
    cout<<endl;

    long long int d = 100000;
    long long int e = 100000; 
    long long int f = d * e;
    cout<< f <<endl;         // in this 10000000000 prints because the range if long long int lies between [-10^18 < long long int < 10^18]
    
    cout<<endl;
    
    double g = 100000;       // but we can't use double and float frequently because it cant store the big numbers accurately  (not precious).
    double h = 100000;
    double i = g * h;
    cout<< i <<endl;                              // this prints the exact value with the scientific notation
    cout<< fixed << i <<endl;                     // this removes the scientific notation 
    cout<< fixed << setprecision(0) << i <<endl;  // this removes the number after the decimals

    cout<<endl;

    return 0;
}
