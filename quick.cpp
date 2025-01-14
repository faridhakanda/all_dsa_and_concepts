#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high) {
    int i, j, temp, pivot = arr[high];
    j = low-1;
    for (i = low; i < high; i++) {
        if (i >= 0 && arr[i] < pivot) {
            j++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    temp = arr[high];
    arr[high] = arr[j+1];
    arr[j+1] = temp;
    return j+1;
}
void quick_sort(int arr[], int low, int high) {
    if (low <= high) {
        int p = partition(arr, low, high);
        quick_sort(arr, low, p-1);
        quick_sort(arr, p+1, high);
    }
}
int main() {
    int arr[] = {2, 10, 51, 5, 3, 24, 48, 63, 83, 11, 57, 9, 7, 8, 1, 101, 58};
    int n = sizeof(arr)/sizeof(arr[0]);
    quick_sort(arr, 0, n-1);
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}