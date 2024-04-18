#include <iostream>
int main(){
    int num = 0;
    std:: cout << "Enter your Number " <<std::endl;
    std:: cin >> num ;
    int rNum = 0;
    int temp = 0;
    int temp1 = 0;
    while(num > 0){
    temp = rNum * 10;
    temp1 = num % 10;
    num  = num / 10;
    rNum = temp + temp1; 
    
}   std::cout << "that number will be  " << rNum <<std::endl;
}
