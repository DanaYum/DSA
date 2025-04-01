#include <iostream>
#include <cmath>

using namespace std;

// Function to convert binary to decimal
int binaryToDecimal(string binary) {
    int decimal = 0;
    int length = binary.length();
    
    for (int i = 0; i < length; i++) {
        if (binary[i] == '1') {
            decimal += pow(2, length - 1 - i);
        }
    }
    return decimal;
}

int main() {
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;
    
    cout << "Decimal representation: " << binaryToDecimal(binary) << endl;
    
    return 0;
}
