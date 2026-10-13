#include <iostream>
#include <stack>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    stack<int> S;
    const int size = 8;
    int sum = 0;
    int count = 0;

    srand(time(0));

    for (int i = 0; i < size; i++) {
        int randomNum = 1 + rand() % 30;
        S.push(randomNum);
    }

    cout << "Елементи стека (випадкові числа): " << endl;
    while (!S.empty()) {
        int num = S.top();
        S.pop();
        cout << num << " ";

        if (num >= 10 && num <= 25 && num % 2 != 0) {
            sum += num;
            count++;
        }
    }

    cout << endl;
    if (count > 0) {
        cout << "Середнє значення непарних чисел в межах 10-25: " << double(sum) / count << endl;
    } 
    else {
        cout << "Непарних чисел заданого діапазону не знайдено." << endl;
    }

    return 0;
}