#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int>& arr) {
    int slow = arr[0];
    int fast = arr[0];

   
    do {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);

    
    slow = arr[0];
    while (slow != fast) {
        slow = arr[slow];
        fast = arr[fast];
    }

    return slow;  
}

int main() {
    vector<vector<int>> testCases = {
        {1, 3, 4, 2, 2}, 
        {3, 1, 3, 4, 2}, 
        {1, 1}, 
        {1, 4, 4, 2, 3}, 
        {1, 2, 3, 4, 5, 6, 50000, 7, 8, 50000} 
    };

    for (auto& test : testCases) {
        cout << "Duplicate number: " << findDuplicate(test) << endl;
    }

    return 0;
}
