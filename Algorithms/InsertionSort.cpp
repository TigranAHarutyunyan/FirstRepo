#include <iostream>
int main(){
    int Arr[5] = { 3 ,4 , 1 , 6 , 7 ,};
    int key = 0 ;
    int j ; 
    for(int i  = 1 ; i <  5 ;++i ) {
        key = Arr[i];
        j = i -1 ;
        while(i >= 0 && Arr[j] > key ){
            Arr[j+1] = Arr[j];
            j = j-1;   
        }
        Arr[j+1] = key;
    }
    for(int i = 0 ; i < 5 ; i++) {
        std:: cout << "  " << Arr[i] ;
    }
}