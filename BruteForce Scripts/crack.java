
public class crack{
    public static void main(String[] args){
        String setPass = "373905289";

        int setpassLen = setPass.length();

        long starttime = System.nanoTime();
        long passCombi = (long) Math.pow(10, setpassLen);

        for (int i = 0; i < passCombi; i++){

            String istr = String.valueOf(i);

            if (istr.length() < setpassLen){
                
                istr = "0".repeat(setpassLen - istr.length()) + istr;
        }

        if (istr.equals(setPass)){
            long endtime = System.nanoTime();
            double elapsed = (endtime - starttime) / 1000000000.0;

            System.out.println("The Password is -- " + istr);
            System.out.println("Elapsed time " + elapsed + "Sec");
            break;
        }

        }
    }
}