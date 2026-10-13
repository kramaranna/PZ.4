#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    string word = "rotor";
    stack<char> s;

    for (char c : word) {
        s.push(c);
    }

    string reversedWord = "";

    while (!s.empty()) {
        reversedWord += s.top();
        s.pop();
    }
    cout << "Оригінал: " << word << endl;
    cout << "Навпаки: " << reversedWord << endl;
    if (word == reversedWord) {
        cout << "Результат: Рядок є паліндромом!" << endl;
    } 
    else {
        cout << "Результат: Рядок НЕ є паліндромом." << endl;
    }
    return 0;
}