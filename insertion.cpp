#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[], int n) {
    int i, j, temp;
    for (i = 1; i < n; i++) {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp) {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = temp;
    }
}
int main() {
    int arr[] = {2, 56, 1, 9, 10, 51, 18, 8, 19, 24, 4, 3, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr, n);
    cout<<"Insertion sort!"<<endl;
    for(int i = 0; i  < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}