function bubblesort(arr, size){
    for (i=0; i < size; i++){
        for (j=i; j < size; j++){
        if (arr[i] > arr[j]){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }};

    console.log(arr)
};

arr = [3,2,4,5,8,11,8,45,22,65,32,87,54,99,12,34,21,56]
size = arr.length
bubblesort(arr,size)

