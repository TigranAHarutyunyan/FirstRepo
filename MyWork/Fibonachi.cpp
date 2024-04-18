#include <iostream>
int main(){
    int num = 0;
    std:: cout << "Enter your  Fibaonachi Triangle Size " ;
    std:: cin >> num;
    int num1 = 0;
    int num2 = 1;
    int num_c = num;
    int count = 0;
    std:: cout << num2<<std::endl;
    while(count < num_c-1){
        count++;
        num1 = 0;num2 = 1; 
        std:: cout << num2 ;       
       for(int i = 0;i<count;i++){ 
        num = num1+ num2;
        num1 = num2 ;
        num2 = num;
        std:: cout << num;    
}
        std::cout<<std::endl;      
 }
          

}
