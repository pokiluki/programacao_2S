#include <iostream>

int isto(const char s[]) {
    int length = 0;
    while (s[length]) {
        length++;
    }
    return length;
}





unsigned long hstr_to_integer(const char hstr[]) {
    unsigned long result = 0;
    int length = isto(hstr);

    for (int i = 0; i < length; i++) {
        char c = hstr[i];
        int digit;

        if (c >= '0' && c <= '9') {
            digit = c - '0';
        } else if (c >= 'a' && c <= 'f') {
            digit = c - 'a' + 10;
        } else if (c >= 'A' && c <= 'F') {
            digit = c - 'A' + 10;
        }

        result = result * 16 + digit;
    }

    return result;
}

int main(){

    std::cout << hstr_to_integer("0");
    return 0;
}
