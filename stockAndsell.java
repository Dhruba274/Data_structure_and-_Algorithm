import java.util.Scanner;

public class stockAndsell {
    static int stock(int []a){
        int maxprofit=0;
        int min=a[0];
        for (int i =1 ;i< a.length;i++ ){
            int curprofit=a[i]-min;
            min=Math.min(min,a[i]);
            maxprofit=Math.max(curprofit,maxprofit);

        }

           return maxprofit; 
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of array:");
        int n =sc.nextInt();
        int arr[]  =new int [n] ;
        System.out.println("enter elements ");
        for (int i = 0; i <arr.length ; i++) {
            arr[i]=sc.nextInt() ;
        }
        //calling function to find maximum profit
        System.out.println("The maximum profit by selling the stock is "+stock(arr));
        

    }
    
}
