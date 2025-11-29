#include <iostream>
#include <unordered_map>
using namespace std;

int firstNonRepeating(int arr[], int n) {
    unordered_map<int, int> countMap;
    
    for (int i = 0; i < n; i++) {
        countMap[arr[i]]++;
    }
    
    for (int i = 0; i < n; i++) {
        if (countMap[arr[i]] == 1) {
            return arr[i];
        }
    }
    return -1; 
}

int main() {
    int nums[] = {4, 5, 1, 2, 0, 4};
    cout << "First non-repeating: " << firstNonRepeating(nums, 6) << endl;
    return 0;
}