

#include <iostream>
using namespace std;

    int num(int a, int b) {
        if (b == 0)
            return a;
        return num(b, a % b);
    }

    int main() {
        int num1, num2;

        cout << "Enter 2 numbers :  ";
        cin >> num1 >> num2;

        cout << "REsult :  " << num1 << " і " << num2 << " = " << num(num1, num2) << endl;




}

