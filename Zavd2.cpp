#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> S;
    int sum = 0;

    S.push(-1);
    S.push(-2);
    S.push(-3);
    S.push(-4);
    S.push(-5);

    cout << "Елементи стека: ";
    while (!S.empty()) {
        int num = S.top();
        cout << num << " ";
        sum += num;
        S.pop();
    }
    cout << "\nСума чисел: " << sum << endl;
    return 0;
}