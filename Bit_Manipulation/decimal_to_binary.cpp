#include <iostream>
#include <bitset>

using namespace std;

// Function to convert decimal to binary
void decimalToBinary(int num) {
    if (num == 0) {
        cout << "0";
        return;
    }
    
    string binary = "";
    while (num > 0) {
        binary = to_string(num % 2) + binary;
        num /= 2;
    }
    cout << binary;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    cout << "Binary representation: ";
    decimalToBinary(num);
    cout << endl;
    
    return 0;
}
