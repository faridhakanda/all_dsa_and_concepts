#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n) {
    int i, j, temp, index;
    for (i = 0; i < n; i++) {
        index = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[index]) {
                index = j;
            }
        }
        if (index != i) {
            temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp;
        }
    }
}
int main() {
    int arr[] = {2, 5, 1, 10, 93, 51, 4, 3, 8, 6, 9};
    int i, n = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr, n);
    for (i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}