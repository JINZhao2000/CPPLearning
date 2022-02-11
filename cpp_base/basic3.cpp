//
// Created by unsafe on 23/01/2022.
//
#include <iostream>
#include <ios>
using namespace std;

int main() {
    cout.setf(ios_base::boolalpha);
    int x = 2;
    cout << (x == 2) << ", " << (x != 2) << endl;
    for (int i = 0; i < 10; i++) {}
    while (x > 0) {
        x--;
    }

    return 0;
}
