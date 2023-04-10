// Recursion :- When a function calles itself until a specificed condition is met.


#include <bits/stdc++.h>
using namespace std;

// Q) Print numbers from 0 to N
int cnt = 0;
void numbers(int num) {
    if (cnt == num) {
        return;
    }
    cout<< cnt << " ";
    cnt++;
    numbers(num);
}

// Q) Printing names N times using Recursion
void names(int i, int num) {
    if (i > num) {              // This is the Base Condition
        return;                 // Whenever the cursor reach to return then the function/recursion ends
    }
    cout<< ("Tanish ");
    names(i+1, num);
}

// Q) Printing 1 to N using Recursion
void insc_counting(int i, int num) {
    if (i > num) {
        return;
    }

    cout<< i <<endl;
    insc_counting(i+1, num);
}

// Q) Printing 1 to N using Recursion
void desc_counting(int i, int num) {
    if (num < i) {
        return;
    }

    cout<< num <<endl;
    desc_counting(i, num-1);
}

// Q) Print from 1 to N wihtout using f(i+1, n)     {BackTracking}
void insc_backtracking (int i, int num) {
    if (i < 1) {
        return;
    }

    insc_backtracking(i-1, num);
    cout<< i <<endl;
}

// Q) Print from N to 1 wihtout using f(i-1, n)     {BackTracking}
void desc_backtracking(int i, int num) {
    if (i > num) {
        return;
    }

    desc_backtracking(i+1, num);
    cout<< i <<endl;
}




// Q) Sum of first N numbera (this question can be done in two ways:- Parameterised way and Functional way)
// Parameterised Way
int sum_parameter(int i, int num) { 
    if (i < 1) {
        return num;
    }
    sum_parameter(i-1, num+i);
}

// Functional Way
int sum_function(int num) {
    if (num == 0) {
        return 0;
    }
    return num + sum_function(num-1);
}

// Q) Factorial of first N numbera (this question can be done in two ways:- Parameterised way and Functional way)
// Parameterised Way
int factorial_parameter(int i, int num) {
    if (num < 1) {
        return i;
    }
    factorial_parameter(i*(num), num-1);
}

// Functional Way
int factorial_function(int num) {
    if (num == 1) {
        return 1;
    }
    return num * factorial_function(num-1);
}




int main() {                    // Time Complexity : O(n)    => 4
    int num;                    // Space Complexity : O(n)   => 3
    cin>> num;

    numbers(num);
    // Recursion Tree (num = 3)
    // numbers(3) <=> numbers(3) <=> numbers(3) <=> numbers(3)
    cout<<endl<<endl;

    names(1 ,num);
    // Recursion Tree (num = 4)
    // names(1,3) <=> names(2,3) <=> names(3,3) <=> names(4,3)
    cout<<endl;

    insc_counting(1, num);
    // Recursion Tree (num = 3)
    // insc_counting(1,3) <=> insc_counting(2,3) <=> insc_counting(3,3) <=> insc_counting(4,3)
    cout<<endl;

    desc_counting(1, num);
    // Recursion Tree (num = 3)
    // desc_counting(1,3) <=> desc_counting(1,2) <=> desc_counting(1,1) <=> desc_counting(1,0)
    cout<<endl;

    insc_backtracking(num, num);
    // Recursion Tree (num = 3)
    // insc_backtracking(3,3) <=> insc_backtracking(2,3) <=> insc_backtracking(1,3) <=> insc_backtracking(0,3)
    cout<<endl;

    desc_backtracking(1, num);
    // Recursion Tree (num = 3)
    // desc_backtracking(3,3) <=> desc_backtracking(2,3) <=> desc_backtracking(1,3) <=> desc_backtracking(0,3)
    cout<<endl;



    cout<< sum_parameter(num, 0);
    // Recursion Tree (num = 3)
    // sum_parameter(3,0) <=> sum_parameter(2,3) <=> sum_parameter(1,5) <=> sum_parameter(0,6)
    cout<<endl;

    cout<< sum_function(num);
    cout<<endl<<endl;

    cout<< factorial_parameter(1, num);
    // Recursion Tree (num = 4)
    // factorial_parameter(1,3) <=> factorial_parameter(3,2) <=> factorial_parameter(6,1) <=> factorial_parameter(6,0)
    cout<<endl;

    cout<< factorial_function(num);
    cout<<endl<<endl;


}