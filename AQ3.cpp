#include <iostream>
#include <unordered_map>
using namespace std;

void countFrequency(int arr[], int n) {
    unordered_map<int, int> countMap;

    for (int i = 0; i < n; i++) {
        countMap[arr[i]]++;
    }
    
    unordered_map<int, int>::iterator it;
    for (it = countMap.begin(); it != countMap.end(); it++) {
        cout << it->first << " -> " << it->second << " times" << endl;
    }
}

int main() {
    int nums[] = {2, 3, 2, 4, 3, 2};
    countFrequency(nums, 6);
    return 0;
}