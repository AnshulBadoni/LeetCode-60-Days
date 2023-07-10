#include <iostream>
using namespace std;

void shift(int arr[], int x) {
    int index = 0;
    int length = 0;
    for (int a = 0; arr[a] != '\0'; a++) {
        length++;
    }
    int copy[length];
    for (int i = x; i < length; i++) {
        copy[index] = arr[i];
        index++;
    }
    for (int j = 0; j <= x; j++) {
        copy[index] = arr[j];
        index++;
    }
    for (int i = 0; i < length; i++) {
        cout << copy[i] << " ";
    }
}

int main() {
    int myarr[] = {1, 2, 4, 5, 6, 8};
    int x = 2;
    shift(myarr, x);
    return 0;
}
