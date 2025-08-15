#include<iostream>
#include<vector>
using namespace std;

void sort(int arr[],int n){
    int low = 0, mid=0, high = n-1;
    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[mid],arr[low]);
            mid++, low++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}

int main(){
    int  nums[] = {0,1,2,1,0,2,1,0};
    int n= sizeof(nums)/sizeof(nums[0]);
    sort(nums,n);

    for(int i=0;i<n;i++){
        cout << nums[i] << " ";
    }


}
