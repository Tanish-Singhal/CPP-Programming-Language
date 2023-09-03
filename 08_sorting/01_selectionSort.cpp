// Selection Sort
// in this the minimum element swap its place from the first element, and then the second minimum element swap its place from the second element from the array, and so on.......

#include <bits/stdc++.h>
using namespace std;

void selection_sort (int arr[], int n) {
    for (int i = 0; i <= n-2; i++) {
        
        int mini = i;
        
        for (int j = i; j <= n-1; j++) {
            if (arr[j] < arr[mini]) {
                mini = j;
            }
        }
        
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

int main() {

    // size of array
    int n;
    cin >> n;

    // declaration of array
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    selection_sort(arr, n);

    // printing of array
    for (int i = 0; i < n; i++) {
        cout<< arr[i] << " ";
    }

    return 0;
}

// TODO: Time Complexity: O(n^2)