#include <iostream>
int main(){
    int Arr[4][4] = { 1 , 2 , 3 , 4 ,
                      5 , 6 , 7 , 8 , 
                      9 ,10 , 11 ,12 , 
                     13 ,14 , 15 , 16 };

    int count = 4;
    int count1 =2;
    int  q= 0;  
    while(count > 0 ){
                      
    for (int i = q ; i < count  ; i++){
    std:: cout << Arr[q][i] << "  " ;
}
    count--;
    for (int i = 1; i <= count   ; i++){
        std:: cout << Arr[i][count-1] << "  " ;
}
    
    count--;
    for(int  i =  count-1  ;i >=0 ; i--){
        std:: cout << Arr[3][i] << " " ;
}
   
    
    for( int i = count -1 ; i > q ;i--){
        std:: cout << Arr[i][q] << "   " ;
}
 // std:: cout << "  Q = " << q <<std:: endl;
    q++;
 
}
}
