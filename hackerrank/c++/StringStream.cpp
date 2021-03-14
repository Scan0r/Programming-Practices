#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector<int> vect;
    stringstream ss(str);
    int num;
    char ch;

    while (ss >> num) {
        vect.push_back(num);

        if (!(ss >> ch)) {
            break;
        }
    }

    return vect;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}

