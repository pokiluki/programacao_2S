
int isto(const char s[]) {
    int length = 0;
    while (s[length]) {
        length++;
    }
    return length;
}

void aquilo(char* dest, const char* src) {
    while(*src) {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

char* repeat(const char str[], int n) {
    if (n <= 0) {
        return nullptr;
    }

    int len = isto(str);
    int resultLen = len * n;
    char* result = new char[resultLen + 1];

    for (int i = 0; i < n; i++) {
        aquilo(result + i * len, str);
    }

    result[resultLen] = '\0';
    return result;
}