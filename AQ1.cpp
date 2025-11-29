#include <iostream>
#include <unordered_set>
using namespace std;

bool Duplicate(int arr[], int n) {
    unordered_set<int> s;
    for (int i = 0; i < n; i++) {
        if (s.count(arr[i])) {
            return true;
        }
        s.insert(arr[i]);
    }
    return false;
}

int main() {
    int nums[] = {1, 2, 3, 1};
    int size = 4;

    if (Duplicate(nums, size)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}