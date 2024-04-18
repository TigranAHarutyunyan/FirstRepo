#include <iostream>
#define MAX(a,b) ((a)<(b) ? b:a)
#define MIN(a,b) ((a)>(b) ? b:a)
int  main(){
    int size = 0;
    std:: cout <<"Enter Array's size" <<std ::endl;
    std:: cin >>size;
    int Arry[size];
    int max = 0;
    int min = 0;
    int index = 1;
    std:: cout <<"Enter  Arryas  1 Element ";
    std:: cin >>Arry[0];
    max = Arry[0];
    min = Arry[0]; 
    for(int i = 1; i<size ; i++){
        std:: cout << "Enter  Arrays  " << ++index << " Element " ;
        std:: cin >>  Arry[i];
        max = MAX((max),(Arry[i]));
        min = MIN((min),(Arry[i]));                 
}
    std:: cout <<  "MAX Element  of Array "  << max <<std::endl;
    std:: cout <<  "MIN Element  of Array "  << min <<std::endl;
                

} 
    
