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