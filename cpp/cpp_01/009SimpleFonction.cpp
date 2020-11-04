#include <iostream>
using namespace std;

int add(int num1,int num2);

int main(){
    cout << "sum of 1 and 2 is " << add(1,2) << endl;
    return 0;
}


int add(int num1,int num2){
    return num1+num2;
}
