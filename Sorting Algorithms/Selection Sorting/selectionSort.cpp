#include <iostream>
#include <array>

using namespace std;

void selectionSort(int arr[], int size){
    for (int i=0; i < size; i++) {
        int subindex = i;
        for (int j=i+1; j < size; j++) {
            if (arr[j] < arr[subindex]){
                subindex = j;
            }
        }
        int temp = arr[subindex];
        arr[subindex] = arr[i];
        arr[i] = temp;
    cout << arr[i] << " ";
    }
    cout << endl;
}


int main(){
    int myarr[] = {3,2,4,5,8,11,8,45,22,65,32,87,54,99,12,34,21,56};
    int size = sizeof(myarr) / sizeof(myarr[0]);
    selectionSort(myarr, size);
    return 0;


}
