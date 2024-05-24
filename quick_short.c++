#include <bits/stdc++.h>
using namespace std;

int partition(int a[], int l, int r) {
    int pivot = a[l];
    int start = l;
    int end = r;
    while (start < end) {
        while (start < end && a[start] <= pivot) {
            start++;
        }
        while (a[end] > pivot) {
            end--;
        }
        if (start < end) {
            swap(a[start], a[end]);
        }
    }
    swap(a[l], a[end]);
    return end;
}

void quick_sort(int a[], int l, int r) {
    if (l < r) {
        int loc = partition(a, l, r);
        quick_sort(a, l, loc - 1);
        quick_sort(a, loc + 1, r);
    }
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int a[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    quick_sort(a, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
