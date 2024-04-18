#include <iostream>
int main(){
    int size = 0;
    std:: cout << "Enter your Triangl Size " <<std::endl;
    std ::cin >> size  ;
    int count = 0;
    while (count < size){
        count++;
     for (int i = 0; i < count ;i++){
    std:: cout <<"*" ;

}
    std:: cout << std::endl;
}
    
    std:: cout << "Enter your Triangl Size " << std:: endl;
    std:: cin >> size ;
    int size_1 = size;
    count = 0 ;
    while(count < size){
        count++;
        size_1--;
        for(int i = 0; i< size_1 ;i++){
                std:: cout <<" " ;
                 
}
        for(int j = 0;j<count ;j++){
            std:: cout <<"*" ;
}
            std::cout<<std::endl;
}
        
   size_1 = 0;
   std:: cout <<"Enter your Triangle Size" <<std:: endl;
   std:: cin >> size ;
   count = 0;
   size_1 = size;
   while(count < size){
        count++;
        size_1--;
            for(int i =0;i<size_1;i++){
                    std:: cout <<" " ;
}
            for(int j = 0 ;j<count;j++){
                    std:: cout <<" *";
}
        std:: cout << std::endl;
}              
}
