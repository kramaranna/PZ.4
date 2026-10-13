#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> S;
    int count = 0;
    int foundCount = 0;

    S.push(11);
    S.push(22);
    S.push(33);
    S.push(44);
    S.push(55);
    S.push(66);

    int findNum;
    cout << "Введіть число для пошуку: ";
    cin >> findNum;

    cout << "Витягнуті елементи з стека: ";
    while (!S.empty()) {
        int num = S.top();
        S.pop();
        cout << num << " ";
        count++;

        if (num == findNum) {
            foundCount++;
        }
    }
    cout << endl;
    if (foundCount > 0) {
        cout << "Число " << findNum << " знайдено " << foundCount << " раз(и)!" << endl;
    } 
    else {
        cout << "Число " << findNum << " не знайдено." << endl;
    }
    cout << "Кількість витягнутих елементів: " << count << endl;
    return 0;
}