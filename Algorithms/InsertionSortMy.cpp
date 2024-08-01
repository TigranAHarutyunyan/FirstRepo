#include <iostream>
void InsertionSort(int Arr[],int sizeOfArray){
    int j , key = 0  ;
    for(int i = 1 ; i < sizeOfArray;++i){
        key = Arr[i];
        j = i -1 ;
        while(j >= 0 && Arr[j] > key ){
            Arr[j+1] = Arr[j];
            j = j - 1 ;
        }
        Arr[j+1 ] = key;
    }
}
void printArray(int Arr[] , int sizeOfArray ){
    for(int i = 0 ; i < sizeOfArray ; i++ ){
        std:: cout << "  " << Arr[i];
    }
}
int main(){
    int Arr[5] = { 5 , 2 , 3 ,4 ,-1};
    InsertionSort(Arr , 5 );
    printArray(Arr , 5 );
}