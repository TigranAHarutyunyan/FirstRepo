#include <iostream>
int main(){
    int Arr[6] = { 1  , 3 , 5 , 6 , 7 , 12};
    int key = 7 ;
    int low = 0 ;
    int high = 6 ;
    int index  = 0;
    for(int i = 0 ; i < 4 ;i++){
        index = (low + high) / 2 ;
        if(key ==  Arr[index]){
            std:: cout << "This is  that element index " << index << std:: endl;
            break;
        }
        if(key > Arr[index]){
            low = index;   
        }
        if(key < Arr[index]){
            high = index;
        }
        if(low == high){
            std:: cout << "That element is not there " << std:: endl;
        }
    }
    std::cout << "End" << std:: endl;
}

