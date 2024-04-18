#include <iostream>
void InputeArray(int Arr[3][3]);
void PrintArray(int Arr[3][3]);
void ReversArray(int Arr[3][3]);
int main(){ 
    int Arr[3][3] ;
    std:: cout << "Enter Array  Element " << std:: endl ;
    InputeArray( Arr ) ;
    PrintArray( Arr ) ;
    std:: cout << "    " << std:: endl ;
    std:: cout << "Reversed Array will be " << std:: endl ;
    ReversArray( Arr ) ;
    PrintArray( Arr ) ;

}
void InputeArray ( int Arr[3][3] ) {
    
        for ( int i = 0 ; i < 3 ; i++ ) {
            for ( int j = 0 ; j < 3 ; j++ ) {
                std:: cout << "Enter Element   ["<< i<<"][" <<j<< "]" ;
                std:: cin >> Arr[i][j] ;           
}
}
}
void PrintArray ( int Arr[3][3]){
    for ( int i = 0 ;i < 3 ; i++ ) {
        for ( int j = 0 ; j < 3 ;j++ ) {
            std:: cout << Arr[i][j] << "  "  ;
 }
            std:: cout <<std:: endl;

}
}
void ReversArray ( int Arr[3][3] ) {
    int temp = 0;
    for(int i = 0 ;i < 3 ; i++) {
        for ( int j = i+1 ; j < 3 ; j++ ) {                   
                 temp = Arr[i][j];
                 Arr[i][j] = Arr[j][i];
                 Arr[j][i] = temp;
}
}
}   
