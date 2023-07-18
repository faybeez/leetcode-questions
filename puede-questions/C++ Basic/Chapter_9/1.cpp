#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int bil;
    string x[2] = {"Genap", "Ganjil"};

    cout << "Bilangan: ";
    cin >> bil;

    cout << x[bil % 2];
}