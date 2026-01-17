import java.util.Arrays;

public class BubbleSort{
    public static void main(String[] args){
        int[] mynum = {3,2,4,5,8,11,8,45,22,65,32,87,54,99,12,34,21,56};

        for (int i=0; i < mynum.length; i++){
            for (int j=i ; j < mynum.length; j++) {
                if (mynum[i] > mynum[j]) {
                    int temp = mynum[i];
                    mynum[i] = mynum[j];
                    mynum[j] = temp;
                }
            }
        }
        System.out.println("Sorted Array: " + Arrays.toString(mynum));

    }
}