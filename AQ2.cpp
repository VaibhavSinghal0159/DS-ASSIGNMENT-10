#include <iostream>
#include <unordered_set>
using namespace std;

void findCommon(int A[], int nA, int B[], int nB) {
    unordered_set<int> setA;

    for (int i = 0; i < nA; i++) {
        setA.insert(A[i]);
    }
    
    cout << "Common elements: ";
 
    for (int i = 0; i < nB; i++) {
        if (setA.count(B[i])) {
            cout << B[i] << " ";
            setA.erase(B[i]); 
        }
    }
    cout << endl;
}

int main() {
    int A[] = {1, 2, 3, 4};
    int B[] = {3, 4, 5, 6};
    
    findCommon(A, 4, B, 4);
    return 0;
}