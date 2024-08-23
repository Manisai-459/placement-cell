import java.util.*;
import java.io.*;
class amadeus{
    public int lpa;
    public String role;
    amadeus(int lpa, String role){
        this.lpa = lpa;
        this.role = role;
    }
}
class animal{
    public void sound(){
        System.out.println("Animal");
    }
    public static void mama(){
        System.out.println("Mama");
    }
}
class dog extends animal{
    public void sound(){
        System.out.println("Dog");
    }
        public static void mama(){
        System.out.println("atta");
    }
}
public class prep{
    public static void main(String[] args) {
        amadeus a = new amadeus(12, "SDE");
        System.out.println(a.lpa+" "+a.role);
        String s1 = "mama";
        String s2 = "mama";
        System.out.println(s1 == s2);
        int[] intArgs = {1, 2, 3};
        main(intArgs);
        dog d = new dog();
        d.sound();
        animal an = new animal();
        an.sound();
        animal ann = new dog();
        ann.sound();
        
            int n = 5, x = 0;
            int arr[] = new int[n];
            for (int i = 0; i <= n; i++) {
                 try {
            arr[i] = i / x;
                 }
            catch (ArrayIndexOutOfBoundsException exception) {
            System.out.println("1st block = ArrayIndexOutOfBoundsException");
            }
            catch (ArithmeticException exception) {
            System.out.println("2nd block = ArithmeticException");
            }
            catch (Exception exception) {
            System.out.println("3rd block = Exception");
            }
            }
    }
    public static void main(int[] args){
        System.out.println("Overloaded Integer array Main Method");
    }
}