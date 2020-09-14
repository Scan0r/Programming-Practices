#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, value;
    cin >> n;

    int arr[n];
    for (int i=0; i<n; i++) {
        cin >> value;
        arr[n-1-i] = value;
    }

    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}

