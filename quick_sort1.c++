#include <bits/stdc++.h>
using namespace std;

// Function to print the array
void print_array(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

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
    cout << "Array after partition with pivot " << pivot << ": ";
    print_array(a, r + 1); // Printing the array after partition
    return end;
}

void quick_sort(int a[], int l, int r) {
    if (l < r) {
        int loc = partition(a, l, r);
        quick_sort(a, l, loc - 1);
        quick_sort(a, loc + 1, r);
    }
}

bool binary_search(int a[], int l, int r, int x) {
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (a[mid] == x) {
            return true;
        }
        if (a[mid] < x) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return false;
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
    print_array(a, n);

    int x;
    cout << "Enter value to search: ";
    cin >> x;

    if (binary_search(a, 0, n - 1, x)) {
        cout << x << " is present in the array." << endl;
    } else {
        cout << x << " is not present in the array." << endl;
    }

    return 0;
}

