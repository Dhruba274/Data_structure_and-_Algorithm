import java.util.*;

public class insert {


    public static void main(String [] args){

        int [] arr= new int[10];

        Scanner input = new Scanner(System.in);
        System.out.println("Enter the size of array");
        int n = input.nextInt();
        System.out.println("Enter the elements ");
        for(int i=0;i<n;i++){

            System.out.println("Enter the"+i+"index element");
            arr[i]=input.nextInt();

        }
        int key,pos;
        System.out.println("Enter a elemnt to insert");
        key=input.nextInt();
        System.out.println("Enter the position you want to enter");
        pos=input.nextInt();

        for(int i=n-1;i>=pos;i--){

            arr[i+1]=arr[i];

        }
        arr[pos-1]=key;

        System.out.println("Printing the array after inserting");
        for(int i=0;i<=n;i++){

            System.out.println(+arr[i]);



        }

    }
    
}
