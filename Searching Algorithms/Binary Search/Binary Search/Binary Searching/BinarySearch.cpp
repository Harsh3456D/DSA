#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void binarySearch(vector<int>& arr,int len, int target){
    int left = 0;
    int right = len - 1;

    while (left <= right){
       int mid = (left + right) / 2;

       if (arr[mid] == target){
        cout << "The value is at "<< mid << endl;
        break;
       };

       if (arr[mid] < target){
        left = mid + 1;
       }
       else{
        right = mid -1;
       };
    }
}

int main(){
    vector<int> arr = {2,4,6,7,12,22,27,37,43,54,74,89,99};
    int length = arr.size();
    int target = 7;
    binarySearch(arr, length, target);
    return 0;
}