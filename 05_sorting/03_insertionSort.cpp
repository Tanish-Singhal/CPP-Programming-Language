// Insertion Sort
// Takes an element and place it in its correct order

#include <bits/stdc++.h>
using namespace std;

void insertion_sort (int arr[], int n) {
    for (int i = 0; i <= n-1; i++) {
        int j = i;
        while (j > 0 && arr[j-1] > arr[j]) {
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--; 
        }
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

    insertion_sort(arr, n);

    // printing of array
    for (int i = 0; i < n; i++) {
        cout<< arr[i] << " ";
    }

    return 0;
}

// TODO: Time Complexity: O(n^2)