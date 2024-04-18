#include <iostream> 
int main(){
    int Arr[3][3] ={5,4,6,
                   6,2,3,
                   6,3,2};
    std:: cout << *(Arr+ 1) << std:: endl;
    std:: cout << Arr + 1 << std ::  endl ;
    std:: cout <<*(*Arr+ 2) << std:: endl;
    std:: cout << **Arr << std:: endl;

}
