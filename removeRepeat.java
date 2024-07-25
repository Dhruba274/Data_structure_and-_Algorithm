import java.util.Scanner;

public class removeRepeat {
    public static String remove(String s,int n){
        String st="";
        for(int i=0;i<n-1;i++){
            if (s.charAt(i)==s.charAt(i+1) && i<n-1){
                    System.out.println("Duplicate character found at index "+i);
                    continue;

                }
                else{
                    st+=s.charAt(i);
                    }
            }
        return st;
 }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s1= new String();
        System.out.println("Enter a string");
        s1=sc.nextLine();
        int len=s1.length();
        //remove duplicate characters from the given input string and store it in another variable called "st"
        //calling the function to get unique characters in given input string and store it into variable "st
        String st=remove(s1,len);
        System.out.print("\nThe Unique Characters are: ");
        System.out.println(st);

    }
    
}
