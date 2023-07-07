//~15 menit

#include <iostream>
using namespace std;

int func(int batas) {

    int container;

    for (int i = 1; i <= batas; i++) {
        container = container + i;
    }

    return (batas * container);

}

int main() {
    int x;

    cout << "Tuliskan batas: ";
    cin >> x;
    cout << func(x);
}

