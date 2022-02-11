//
// Created by unsafe on 18/01/2022.
//
#include <iostream>
using namespace std;

struct inflatable {
    int a = 0;
    int b = 0;
};

int main(){
    int a = 0;
    int b = 0;
    int *ptr1 = new int;
    *ptr1 = 1;
    auto *ptr2 = new double;
    *ptr2 = 1.1;
    cout << "value of a: " << a << ", address of variable a: " << &a << endl;
    cout << "value of b: " << b << ", address of variable b: " << &b << endl;
    cout << "value of *ptr1: " << *ptr1 << ", address of variable *ptr1(ptr1): " << ptr1 << endl;
    cout << "value of *ptr2: " << *ptr2 << ", address of variable *ptr2(ptr2): " << ptr2 << endl;
    delete ptr1;
    delete ptr2; // delete -> new,  delete null pointer - ok
    int *ps = new int;
    int *pq = ps;
    delete pq; // delete the memory allocated by new => ps
    int *array = new int[10];
    array[1] = 1;
    array = array + 1; // array[0] is at the place of array[1]
    array = array - 1; // // array[0] is back to the place of array[0]
    // int *ptr_array = &array[0]
    // array[1] <=> *(array + 1) <=> *(ptr_array + 1)
    // ptr_array += 1; allowed
    // array += 1; not allowed
    delete[] array;
    auto *ptr_inf = new inflatable;
    cout << ptr_inf->a << endl;
    delete ptr_inf;
    return 0;
}
