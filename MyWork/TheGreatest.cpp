#include <iostream>
int main(){
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;
	int num5 = 0;
	std:: cout << "Enter first number " <<std::endl;
	std:: cin >>num1;
	std:: cout << "Enter second number "  <<std::endl;
	std:: cin >> num2;
	std:: cout << "Enter yout fhird number " <<std::endl;
        std:: cin >> num3;
        std:: cout << "Enter your fourth number " <<std::endl;
        std:: cin >> num4;
        std:: cout << "Enter your fifth	 number " <<std::endl;
	std:: cin >>num5;
	if(num1 >  num2 && num1 >  num3 && num1 >  num4 && num1 >  num5 ){
	
		std::cout << num1 <<"Is The Greatest " << std :: endl;

	}
	else if (num2 > num1 && num2 > num3 && num2 >  num4 && num2 > num5){
	
           std:: cout << num2 <<"is the Greatest " << std :: endl;
         }
	else if (num3 > num1 && num3 > num2 && num3 > num4  && num3 > num5){
           std:: cout << num3 << "Is the Greatest " << std :: endl;
	}
	else if( num4 > num1 &&  num4 > num2 && num4 > num3 && num4 > num5){
	
	   std:: cout << num4 <<"is The Greatest " << std:: endl;
	}
	else if(num5 > num1 && num5 > num2 && num5 > num3 && num5 > num4){
		std::cout << num5 <<"Is the Greatest " << std::endl ;
	}
	else {
		std:: cout << "there is no lagrest number " <<std :: endl;
	}
	

}	
