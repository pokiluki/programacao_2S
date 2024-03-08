int max(const int a[], int n) {
    int maxVal = a[0]; 

    for (int i = 1; i < n; i++) {
        if (a[i] > maxVal) {
            maxVal = a[i]; 
        }
    }

    return maxVal;
}