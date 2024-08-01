#include <iostream>
int BinaryRecursive(int Arr[] , int low  ,int high, int key ){
    int index  = low + high;
    if(key < Arr[index]){
        high = index;
    }
    if(key > Arr[index]){
        low = index; 
    }
    return BinaryRecursive(int Arr[])
}
int main(){
    
}