#include <iostream>
int main(){
    int num = 0;
    std:: cout << "Enter Your Number " << std::endl;
    std:: cin>> num;
    int num1 =num;
    int temp = 0;
    int temp1 = 0;
    int rNum = 0;
    while(num > 0){
    temp = rNum * 10;
    temp1 = num % 10;
    num  = num / 10;
    rNum = temp + temp1;   
}
    if(num1 == rNum){
    std:: cout <<"true"<< std::endl;
}   else{
    std:: cout <<"folse"<< std::endl;
}
}


