#include <iostream>
int main(){
    int num = 0;
    int fact = 1;
    std:: cout <<"Enter your Number " <<std:: endl;
    std:: cin >> num ;
    for(int i = num ;i >= 1;i--){
        fact = fact * i ;
    }
    std:: cout << "Factorial wil be " << fact << std:: endl;
}
