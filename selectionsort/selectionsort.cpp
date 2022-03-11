#include <iostream>
void selectionsort(int arr[], int size);
int main(){
    int arr[] = {7,3,26,5,43,21,1};
    std::cout << arr[0] << std::endl;
    selectionsort(arr, 7);
    for (int i = 0; i < 7; i++){
        std::cout << arr[i] << std::endl;
    }

        return 0;
}
void selectionsort(int arr[], int size){
    for (int i = 0; i < size - 1; i++){
        int min = i;
        for (int j = i + 1; j < size;j++){
            if(arr[j] < arr[min]){
                min = j;
            }
            
        }
        int temp;
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
        
    }
}