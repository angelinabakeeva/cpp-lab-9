#include <iostream>

using namespace std;

template<typename T, typename U>
void convertArray(T* sourceArray, U* destinationArray, int size) {
    for (int i = 0; i < size; i++) {
        destinationArray[i] = static_cast<U>(sourceArray[i]);
    }
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    float newArray[5];

    convertArray<int, float>(intArray, newArray, 5);

    for (int i = 0; i < 5; i++) {
        cout << newArray[i] << " ";
    }
    cout << endl;

    return 0;
}
