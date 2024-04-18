#include <iostream>
void InputeArray(int Arr[3][3] ) ;
void PrintArray(int Arr[3][3] ) ;
void SumArrays(int Arr[3][3] , int Arr1[3][3] ) ;
int main(){
    int Arr[3][3] ;
    int Arr1[3][3] ;
    std:: cout << "Enter your First Array ELements " << std:: endl ;  
    InputeArray( Arr ) ;
    std:: cout << std:: endl ;
    PrintArray(Arr);
    std:: cout <<  "Enter your  Second  Array Elements " << std:: endl ;
    std:: cout << std:: endl ;
    InputeArray( Arr1 );
    std:: cout << std:: endl ;
    PrintArray( Arr1 ) ;
    std:: cout << "Sum of Arrays will be " << std:: endl ;
    SumArrays( Arr , Arr1 ) ;
    PrintArray( Arr );
    return 0 ;                  
}
void InputeArray(int Arr[3][3]){
    for ( int i = 0; i  < 3 ; i++ ) {
        for ( int  j = 0 ; j < 3 ; j++ ) {
            std:: cout << "Element  [" << i <<"][" << j << "]" ;
            std:: cin  >> Arr[i][j] ;
}
}
}
void PrintArray( int Arr[3][3] ) {
    for ( int i = 0 ; i <  3 ; i++ ) {
        for ( int  j = 0 ; j < 3 ; j ++) { 
        std:: cout << Arr[i][j] <<  "   "  ;
}
            std:: cout << std:: endl;
}
}
void SumArrays( int Arr[3][3] , int Arr1[3][3] ) {
    for ( int i = 0 ; i < 3 ; i++ ) {
        for ( int j = 0; j< 3 ; j++ ) {
             
                Arr[i][j] = Arr[i][j] + Arr1[i][j];
                
}              
}
}


