arr:int = [3,2,4,5,8,11,8,45,22,65,32,87,54,99,12,34,21,56]
arrLen:int = len(arr)

def bubblesort(array:int) -> int:
    for i in range(arrLen):
        for j in range(i+1,arrLen):
            if array[i] > array[j]:
                array[i],array[j] = array[j],array[i]
                i += 1
            else:
                i += 1
    
    print(array)

bubblesort(arr)
