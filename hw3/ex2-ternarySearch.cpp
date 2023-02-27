#include <iostream>
#include <algorithm>
using namespace std;

int ternarySearch(int l, int r, int key, int ar[])
{
    if (r >= l) {

        int f_mid = l + (r - l) / 3;
        int s_mid = r - (r - l) / 3;
        if (ar[f_mid] == key) {
            return f_mid;
        }
        if (ar[s_mid] == key) {
            return s_mid;
        }
        if (key < ar[f_mid]) {

            return ternarySearch(l, f_mid - 1, key, ar);
        }
        else if (key > ar[s_mid]) {
            return ternarySearch(s_mid + 1, r, key, ar);
        }
        else {
            return ternarySearch(f_mid + 1, s_mid - 1, key, ar);
        }
    }
    return -1;
}

int main() {
    int a[] = { 1,2,3,4,5,6,7,8,9,10,34,45,56,67};
    int x = 56;
    int n = sizeof(a) / sizeof(a[0]);
    cout << ternarySearch(0, n-1, x, a);
}