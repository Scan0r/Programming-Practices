#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 

    int n, size, rm_idx, rm_range_start, rm_range_end;
    vector<int> vect;

    cin >> size;

    for (int i=0; i<size; i++) {
        cin >> n;
        vect.push_back(n);
    }

    cin >> rm_idx;
    cin >> rm_range_start >> rm_range_end;

    vect.erase(vect.begin() + rm_idx - 1);
    vect.erase(vect.begin() + rm_range_start - 1, vect.begin() + rm_range_end - 1);

    cout << vect.size() << endl;

    for (int i=0; i<vect.size(); i++){
        cout << vect[i] << " ";
    }

    cout << endl;

    return 0;
}

