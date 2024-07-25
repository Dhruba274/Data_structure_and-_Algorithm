import java.io.*;
import java.util.* ;

public class setMatrixZero {
    public static void setZeros(int matrix[][]) {
        int r=matrix.length;
        int c=matrix[0].length;
        boolean rowzero[]=new boolean[r];
        boolean colzero[]=new boolean[c];
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(matrix[i][j]==0){
                    rowzero[i]=true;
                    colzero[j]=true;
                }
            }
        }

    
    for(int i=0;i<r;i++){
        if(rowzero[i]){
            for(int j=0;j<c;j++){
                matrix[i][j]=0;
            }
        }
    }
    for(int j=0;j<c;j++){
        if(colzero[j]){
            for(int i=0;i<r;i++){
                matrix[i][j]=0;
            }
        }
    }
  
}
public static void printarray(int a[][],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            System.out.print(a[i][j]+" ");
        }
        System.out.println();
         System.out.println();
        
     }
}
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        System.out.println("Enter the row and coloumn");
        int r=sc.nextInt();
        int c=sc.nextInt();
        int[][] arr=new int [r] [c ];
         System.out.println("Enter the elements of Matrix");
         for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                arr[i][j]=sc.nextInt();

            }
         }
         System.out.println("The matrix is");
         printarray(arr,r,c);
         setZeros(arr);
         System.out.println("The set zero matrix is");
         printarray(arr,r,c);


    }
}
