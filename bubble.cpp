// bubble sort implementation
// update every day in the repo of my github
#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n; i++) {
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[i]) {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}
int main() {
    int arr[] = {2, 5, 1, 9, 103, 51, 98, 4, 3, 6, 7, 8, 104, 53};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr, n);
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}