#include<iostream>
using namespace std;
void bubble(int arr[],int n){
    for (int i=0;i<n;i++) {
        for(int j=0;j<n-1;j++){
            if(arr[j] > arr[j+1]){
                int temp =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
               
            }
            
        }
    }
    
}
int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array in ascending order:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubble(arr,n);
    cout<<"The sorted array is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        }



    return 0;
}