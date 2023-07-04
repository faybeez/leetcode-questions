//anagram

#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
    string kt1;
    string kt2;

    cout << "Kata pertama: ";
    cin >> kt1;
    cout << "Kata kedua: ";
    cin >> kt2;

    cout << anagram(kt1, kt2);
}

string anagram(string kata1, string kata2) {
    if (kata1.length() != kata2.length()) {
        return "Bukan Anagram";
    }


}
