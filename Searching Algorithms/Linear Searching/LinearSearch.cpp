#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int linearSearch(vector<int>& arr, int len, int target){
    for (int i=0; i<len; i++){
        if (arr[i]==target){
            return i;
        }
    }
}

int main(){
    vector<int> arr = {2,4,6,7,12,22,27,37,43,54,74,89,99};
    int length = arr.size();
    int target = 7;
    int x = linearSearch(arr, length, target);
    cout << "The searched item is at " << x << endl;
    return 0;
}
