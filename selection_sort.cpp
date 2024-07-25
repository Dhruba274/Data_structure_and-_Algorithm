#include<iostream>
using namespace std;
void selection(int arr[],int n){
    for(int i=0;i<n;i++){
        int min_index = i;
        for(int j=i+1;j<n;j++){
            if( arr[j]<arr[min_index]){
                min_index = j;
            }
        }
            if(min_index!=i){
                int temp=arr[i];
                arr[i]=arr[min_index];
                arr[min_index]=temp;
            }
    }


}
int main(){
 int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
int arr[n];
    std::cout << "Enter " << n << " elements:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    std::cout << "Sorted array in ascending order is : \n";
    selection(arr,n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
        }
    return 0;
}