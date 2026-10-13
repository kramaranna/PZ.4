# PZ.4
# Практична робота №4: Реалізація стеку.
**Виконав:** студентка групи 4СОМ, Крамар Анна (Варіант № 4)

##  Завдання.
<img width="687" height="674" alt="image" src="https://github.com/user-attachments/assets/86438112-c217-47ed-b83b-de076413e9c0" />
<img width="694" height="131" alt="image" src="https://github.com/user-attachments/assets/cbc1fe44-ae9a-493b-9c4e-3ea5b9c7958a" />
<img width="683" height="61" alt="image" src="https://github.com/user-attachments/assets/f4c1ebd4-acf5-46e9-b314-1c7350b5d0bd" />
<img width="691" height="142" alt="image" src="https://github.com/user-attachments/assets/ef5e259c-9108-443c-9435-31884891b873" />
<img width="691" height="63" alt="image" src="https://github.com/user-attachments/assets/f6c3541e-872c-4864-884a-bd81142ddae2" />


### 💻 Код програми:
```cpp
//ЗАВДАННЯ 1
#include <iostream>
#include <stack>
#include <string>

using namespace std;
int main() {
    stack<string> S;
    int count = 0;
    S.push("melon");
    S.push("lemon");
    S.push("grape");
    stack<string> tempS = S;
    
    while (!tempS.empty()) {
        string str = tempS.top();
        count += str.length();
        cout << str << endl;
        tempS.pop();
    }
    cout << "Загальна кількість символів: " << count << endl;
    return 0;
}
```
---
```cpp
//ЗАВДАННЯ 2
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> S;
    int sum = 0;
    int n;
    cout << "Введіть розмір стека: ";
    cin >> n;

    cout << "Введіть " << n << " цілих чисел:" << endl;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        S.push(num);
    }

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
```
---
```cpp
//ЗАВДАННЯ 3
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
```
---
```cpp
//ЗАВДАННЯ 4
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
```
---
```cpp
//ЗАВДАННЯ 5
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
```

### Результат виконання програм:
<img width="1292" height="643" alt="image" src="https://github.com/user-attachments/assets/703f0d5c-e71f-48a4-800e-71bc403a7730" />
<img width="1125" height="668" alt="image" src="https://github.com/user-attachments/assets/5d7d313c-1093-4336-856c-f070e7b2eb85" />
<img width="1205" height="733" alt="image" src="https://github.com/user-attachments/assets/0d133865-ae06-4164-b13a-4090cfaface9" />
<img width="1247" height="832" alt="image" src="https://github.com/user-attachments/assets/fa04f442-3edb-4a47-b9d0-a60a966745f2" />
<img width="1207" height="674" alt="image" src="https://github.com/user-attachments/assets/3611409c-207c-4dc1-b878-c56c02590db8" />




### Висновок.
Під час виконання практичної роботи я успішно реалізувала всі поставлені завдання, а написаний програмний код працює повністю коректно. Опанування стандартного контейнера стандартної бібліотеки дозволило на практиці закріпити навички додавання, видалення та аналізу даних, що зберігаються послідовно, а також покращити розуміння алгоритмів обробки колекцій елементів.
