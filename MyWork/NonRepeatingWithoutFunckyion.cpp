#include <iostream>
void InputeArray(int Arr[3][3]);
void PrintArray(int Arr[3][3]);

int main(){
    int Arr[3][3] ;
    InputeArray(Arr);
    bool IsUnique = 1 ;
    for (int i = 0 ; i < 9 ; i++) {
        IsUnique = 1;
        for (int j = 0  ; j < 9 ; j++){
            if(i == j ){
                continue;
            }
            if(*(*Arr + i) == *(*Arr + j)){
              IsUnique = 0;
              break;
            }

        }
        if(IsUnique){
        std:: cout << *(*Arr + i ) << "  "  ;
        }
    }
        
        
}
void InputeArray(int Arr[3][3]){
    for(int i = 0 ; i < 3 ; i++ ){
        for (int  j = 0 ; j < 3 ; j++){
            std:: cout << "Eneter Element["<< i  << "][" << j << "]";
            std:: cin >> Arr[i][j] ;
            }
        }
 }

void PrintArray(int Arr[3][3]){
    for(int i = 0 ; i < 3 ; i++ ){
        for(int j = 0 ; j < 3 ; j ++) {
            std:: cout << Arr[i][j] ;
        }
    std::cout <<std:: endl;
    }
}



