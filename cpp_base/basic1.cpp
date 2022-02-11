#include <iostream>
#include <cmath>
#include <climits>
#include <string>
// using std::cout;
// using std::cin;
// using std::endl;
using namespace std;

/*
 * @author JIN Zhao
 */

enum spectrum {GREEN, RED = 1, ORANGE = 2, YELLOW = 3, VIOLET, BLUE = 6, INDIGO}; // GREEN = 0, INDIGO = 7

struct position {
    int x: 4;
    int y: 4;
};

union fee {
    int int_fee;
    double double_fee;
    // only one of deux has a value
};

void my_func();

int main() {
    cout << "Hello, World!";
    cout << endl;
    const int src(25);
    double sqrt_res;
    sqrt_res = sqrt(src);
    cout << sqrt_res << endl;
    my_func();
    cout << endl;

    cout << "bool: " << sizeof(bool) << endl;
    cout << "char: " << sizeof(char) << ", char max: " << CHAR_MAX << endl;
    cout << "wchar_t: " << sizeof(wchar_t) << ", wide char max: " << WCHAR_MAX << endl;  // wchar_t c = L'c';
    cout << "short: " << sizeof(short) << ", short max: " << SHRT_MAX << endl;
    cout << "int: " << sizeof(int) << ", int max: " << INT_MAX << endl;
    cout << "long: " << sizeof(long) << ", long max: " << LONG_MAX << endl;
    cout << endl;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "float: " << sizeof(float) << ", float max: " << MAXFLOAT << endl;
    cout << "double: " << sizeof(double) << endl;
    cout << "long double: " << sizeof(long double) << endl;

    cout << endl;

    cout << src << ", " << hex << src << ", " << oct << src << endl;

    spectrum band = ORANGE;
    band = spectrum(0);
    int color = RED;
    band = spectrum(RED + ORANGE);
    color = ORANGE + 1;


    // char c[10];
    // cin.get(); will contain the '\n' at the end
    // cin.get(c, 20).get();
    // cin.getline(c, 10); '\n' at the end will be replaced by '\0'
    return 0;
}

void my_func() {
    cout << "my_func" << endl;
}