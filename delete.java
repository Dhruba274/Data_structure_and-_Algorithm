import java.util.Scanner;

public class delete {
    public static void main(String[]args){
        int [] arr = new int [50];

        Scanner input= new Scanner(System.in);

        System.out.println("Enter the size of array");
         int n= input.nextInt();
         System.out.println("Enter the elements in array");
         for(int i=0;i<n;i++){
            System.out.print("Enter the "+i+" index element");

            arr[i]=input.nextInt();


         }
         System.out.println("Enter the positon of elment want to delete");
         int pos= input.nextInt();
           for(int i=pos-1;i<n;i++){

               arr[i]=arr[i+1];
           }

           System.out.println("Printing the array after deletion");
           for(int i=0;i<n-1;i++){
   
               System.out.println(+arr[i]);
   
   
   
           }





    }
    
}
