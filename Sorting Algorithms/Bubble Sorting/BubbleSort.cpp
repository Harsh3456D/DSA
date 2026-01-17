#include <iostream>
#include <array>

using namespace std;

void bubblesort(int arr[], int size){
    for (int i = 0; i < size; i++){
        for (int j=i; j < size; j++ ){
            if (arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            };
        };
        cout << arr[i] << " ";
    };
    cout << endl;
};

int main(){
    int myarr[] = {3,2,4,5,8,11,8,45,22,65,32,87,54,99,12,34,21,56};
    int size = sizeof(myarr) / sizeof(myarr[0]);
    bubblesort(myarr, size);
    return 0;
};