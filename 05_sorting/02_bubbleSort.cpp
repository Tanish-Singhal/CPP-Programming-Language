// Bubble Sort
// in this sorting, the adjacent element will sort and by this the biggest element in the array from at the last of the array. The array continues till the minimum element will move at the first element.

#include <bits/stdc++.h>
using namespace std;

void bubble_sort (int arr[], int n) {
    for (int i = n-1; i >= 0; i--) {
        
        int didSwap = 0;
        
        for (int j = 0; j <= i-1; j++) {
        
            if (arr[j] > arr[j-1]) {
                int temp = arr [j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                didSwap = 1;
            }
        }
        
        if(didSwap == 0) {
            break;
        }
        cout<< "runs\n";
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

    bubble_sort(arr, n);

    // printing of array
    for (int i = 0; i < n; i++) {
        cout<< arr[i] << " ";
    }

    return 0;
}

// TODO: Time Complexity: O(n)