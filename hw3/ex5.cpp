#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int a[], int key, int left, int right)
{
    if (right <= left) {
        return (key > a[left]) ? (left + 1) : left;
    }


    int mid = (left + right) / 2;

    if (key == a[mid])
    return mid + 1;

    if (key > a[mid]) {
        return binarySearch(a, key, mid + 1, right);
    }
    else {
        return binarySearch(a, key, left,
            mid - 1);
    }
}
void B_insertionSort(int a[], int n)
{
    int i, pos, j, key;

    for (i = 1; i < n; ++i)
    {
        j = i - 1;
        key = a[i];

        pos = binarySearch(a, key, 0, j);
        while (j >= pos)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}
int main() {
    int a[] = { 7, 4, 3, 8, 1, 5, 4, 2 };
    int n = sizeof(a) / sizeof(a[0]);
    B_insertionSort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
 
    return 0;
}
