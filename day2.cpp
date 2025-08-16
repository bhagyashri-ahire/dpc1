#include <iostream>
#include <vector>
using namespace std;

int findMissingNumber(vector<int>& arr) {
    int n = arr.size() + 1;  // since one number is missing
    int total_sum = n * (n + 1) / 2;
    int arr_sum = 0;

    for (int num : arr) {
        arr_sum += num;
    }

    return total_sum - arr_sum;
}

int main() {
    vector<int> arr = {1, 2, 4, 5};
    cout << "Missing number: " << findMissingNumber(arr) << endl;
    return 0;
}
