#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string s1, s2, s3, s4;
    cin >> s1 >> s2;

    cout << s1.size() << " " << s2.size() << endl;
    cout << s1 + s2 << endl;

    s3 = s1;
    s3[0] = s2[0];
    s4 = s2;
    s4[0] = s1[0];

    cout << s3 << " " << s4 << endl;

    return 0;
}

