#include <iostream>
using namespace std;

int main(){
    int a = 0;
    cout << "a=" << endl;
    cin >> a;
    cout << "a=" << a << endl;
    switch(a){
        case 1:
            cout << "true" << endl;
            break;
        case 0:
            cout << "false" << endl;
            break;
        default:
            cout << "I don't know" << endl;
            break;
    }
    return 0;
}
