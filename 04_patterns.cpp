// TODO: Patterns

// Rules:
// 1. For the outer loop, count he number of lines 
// 2. For the inner loop, focus on the columns and connect them somehow to the rows
// 3. Print the "*" inside the inner for loop
// 4. Observe the symmetry (optional step)

#include <bits/stdc++.h>
using namespace std;

void rectangular_box(int num) {
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            cout<< "* ";
        }
        cout<<endl;
    }
}

void triangular_box(int num) {
    for (int i = 0; i < num; i++) {
        for (int j = 0; j <= i; j++) {
            cout<< "* ";
        }
        cout<<endl;
    }
}

void triangular_no(int num) {
    for (int i = 1; i < num; i++) {
        for (int j = 1; j <= i; j++) {
            cout<< j << " ";
        }
        cout<<endl;
    }
}

void triangular_sameno(int num) {
    for (int i = 1; i < num; i++) {
        for (int j = 1; j <= i; j++) {
            cout<< i << " ";
        }
        cout<<endl;
    }
}

void upsidedown_triangle(int num) {
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= (num-i+1); j++) {
            cout<< "* ";
        }
        cout<<endl;
    }
}

void upsidedown_notriangle(int num) {
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= (num-i+1); j++) {
            cout<< j << " ";
        }
        cout<<endl;
    }
}


int main() {
    
    int n1;
    cin>> n1;

    for (int i = 0; i < n1; i++) {
        int num;
        cin>> num;

        rectangular_box(num);
        triangular_box(num);
        triangular_no(num);
        triangular_sameno(num);
        upsidedown_triangle(num);
        upsidedown_notriangle(num);
    }
}
