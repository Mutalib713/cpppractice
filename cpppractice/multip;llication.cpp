#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "Multiplication table for " << number << ":" << endl;
    for(int i=1; i<=20; i++){
        cout<<number<<"*"<<i<<"="<<number*i<<endl;
    }

    return 0;
}