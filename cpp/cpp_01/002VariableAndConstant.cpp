#include <iostream>
using namespace std;

#define GLOBAL_CONSTANT_STRING "global constant";

int main(){
    int a = 0;
    cout << "a=" << a << endl;
    const int b = 1;
    cout << "inner constant:" << b << endl;
    cout << GLOBAL_CONSTANT_STRING;
    cout << endl;
    return 0;
}
