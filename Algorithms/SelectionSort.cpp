#include <iostream>
int main(){
    int Arr[8] = {2,3,4,2,-1,7,1,2};
    int min = Arr[0];
    bool IsMin = 1 ; 
    for(int i = 0 ; i < 7  ; i++){
        min = Arr[i];
        for(int j = i ; j < 8 ; j++){
            if(Arr[j] < min ){
                min = Arr[j];
                Arr[j] = Arr[i];
                Arr[i] = min ;
            }
        }
    }
    std:: cout << "Sorted array will be   " ;
    for(int i = 0 ; i < 8 ; i++){
        std:: cout <<  Arr[i] << "   " ;
    }
}