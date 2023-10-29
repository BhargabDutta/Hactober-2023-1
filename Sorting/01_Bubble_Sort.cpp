#include <iostream>
#include <vector>
#include <algorithm>

// Swap Function
void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

// Print Function
void printArray(const std::vector<int>& A) {
    for (int i = 0; i < A.size(); i++) {
        std::cout << A[i] << ", ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> A = {1, 2, 5, 6, 12, 54, 625, 7, 23, 9, 987};

    std::cout << "Original array:" << std::endl;
    printArray(A);

    // Bubble Sort
    for (int i = 0; i < A.size() - 1; i++) {
        bool flag = true;
        for (int j = 0; j < A.size() - 1 - i; j++) {
            if (A[j] > A[j + 1]) {
                flag = false;
                swap(A[j], A[j + 1]);
            }
        }
        if (flag)
            break;
    }

    std::cout << "Sorted array:" << std::endl;
    printArray(A);

    return 0;
}
