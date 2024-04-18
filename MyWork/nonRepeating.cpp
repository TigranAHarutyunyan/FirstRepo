#include <iostream>
void NonRepeating(int Arr[3][3]);
void InputeArray(int Arr[3][3]);
void PrintArray(int Arr[3][3] );
int main(){
    int Arr[3][3];
    std:: cout << "Enter Array's Element " <<std:: endl;
    InputeArray(Arr);
    PrintArray(Arr);
    std:: cout << "non Reeating numbers will be "<<std:: endl;
    NonRepeating(Arr);

}
void NonRepeating(int Arr[3][3]){
    bool IsUnique = 1 ;
    for (int i = 0 ; i < 9 ; i++) {
        IsUnique = 1;
        for (int j = 0  ; j < 9 ; j++){
            if( i == j ) {
                continue;
            }
            if( *(*Arr + i) == *(*Arr + j)){
                IsUnique = 0;
              break;
            }

        }
        if( IsUnique ) {
            std:: cout << *(*Arr + i ) << "  " ;
        }
    }
    
}
void InputeArray( int Arr[3][3] ) {
    for(int i = 0 ; i < 3 ; i++ ) {
        for (int  j = 0 ; j < 3 ; j++) {
            std:: cout << "Eneter Element["<< i  << "][" << j << "]";
            std:: cin >> Arr[i][j] ; 
            }
        }
    }
        
void PrintArray( int Arr[3][3] ) {
    for(int i = 0 ; i < 3 ; i++ ){
        for(int j = 0 ; j < 3 ; j ++) { 
            std:: cout << Arr[i][j] ; 
        }
    std::cout <<std:: endl;
    }
}
