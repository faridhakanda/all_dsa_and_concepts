#include <bits/stdc++.h>
using namespace std;

int left(int i) {
    return 2*i;
}
int right(int i) {
    return 2*i+1;
}
int parent(int i){
    return i / 2;
}

void max_heapify(int arr[], int size, int i) {
    int l = left(i), r = right(i);
    int largest, temp;
    if (l <= size && arr[l] > arr[i]) {
        largest = l;
    } else {
        largest = i;
    }

    if (r <= size && arr[r] > arr[largest]) {
        largest = r;
    }
    if (largest != i) {
        temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        max_heapify(arr, size, largest);
    }
}

void build_heap(int arr[], int size) {
    for(int i = size / 2; i >= 1; i--) {
        max_heapify(arr, size, i);
    }
}

int get_max(int arr[]) {
    return arr[1];
}

int extract_max(int arr[], int size) {
    int max;
    if (size < 1) {
        cout<<"Heap is overflow!"<<endl;
        return -1;
    }
    max = arr[1];
    arr[1] = arr[size];
    size -= 1;
    max_heapify(arr, size, 1);
    return max;
}

int priorityQueue(int arr[], int size, int a) {
    if (a  < arr[size]) {
        cout<<"Node is smaller than current node!"<<endl;
        return -1;
    }
    int i, p, temp;
    i = size;
    arr[i] = a;
    while (i > size && arr[i] > arr[parent(i)]) {
        p = parent(i);
        temp = arr[p];
        arr[p] = arr[i];
        arr[i] = temp;
        i = p;
    }
    i += 1;
    return size;
}

void heap_sort(int arr[], int size) {
    build_heap(arr, size);
    for (int i = size; i > 1; i--) {
        int temp = arr[1];
        arr[1] = arr[i];
        arr[i] = temp;
        size = size-1;
        max_heapify(arr, size, 1);
    }
}
int main() {
    int arr[] = {0, 100, 5, 12, 92, 51, 2, 4, 9, 10, 8, 52};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    int max = extract_max(arr, n-1), val;
    cout<<"Maximum value is: "<<max<<endl;
    cout<<"Enter your value here: ";
    cin>>val;
    int size = priorityQueue(arr, n-1, val);
    heap_sort(arr, n-1);
    for (int i = 0; i <= n-1; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<"\nSize of the heap: "<<size<<endl;

    return 0;
}