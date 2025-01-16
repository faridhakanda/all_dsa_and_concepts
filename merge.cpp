#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high) {
    int index_a, index_l, index_r, size_l, size_r, i;
    size_l = mid-low+1;
    size_r = high-mid;
    int L[size_l], R[size_r];
    for (i = 0; i < size_l; i++) {
        L[i] = arr[low+i];
    }
    for (i = 0;  i < size_r; i++) {
        R[i] = arr[mid+i+1];
    }

    index_l = 0;
    index_r = 0;
    for (index_a = low; index_l < size_l && index_r < size_r; index_a++) {
        if (L[index_l] < R[index_r]) {
            arr[index_a] = L[index_l];
            index_l++;
        } else {
            arr[index_a] = R[index_r];
            index_r++;
        }
    }
    while (index_l < size_l) {
        arr[index_a] = L[index_l];
        index_a++;
        index_l++;
    }
    while (index_r < size_r) {
        arr[index_a] = R[index_r];
        index_a++;
        index_r++;
    }
}

void merge_sort(int arr[], int low, int high) {
    if (low < high) {
        int mid = low + (high-low)/2;
        merge_sort(arr, low, mid);
        merge_sort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
}
int main() {
    int arr[] = {5, 1, 10, 51, 53, 4, 2, 3, 8, 6, 7, 9, 19};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i;
    merge_sort(arr, 0, n-1);
    for (i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}