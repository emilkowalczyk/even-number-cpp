#include <iostream>

using namespace std;

bool checkEvenNumber(int a) {
    if (a % 2 == 0) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int a;
    cout << "Enter a number: "; cin >> a;
    
    string result = checkEvenNumber(a) ? "Even number" : "Odd number";
   
    cout << result << endl;
    
    return 0;
}
