#include <iostream>
void InputeArray(int Arr[], int size);
void PrintArray(int Arr[],int size);
void FindElements(int Arr[],int sum,int size);
int main(){
    int size = 0;
    int sum = 0;   
   
    std:: cout << "Enter  Size of Array ";
    std:: cin  >> size;
    int Arr[size] = {0};
   if(std:: cin.fail()){
        std::cout << "You Enter something wrong " <<std:: endl;       
        return 0;        
}
    std:: cout << "Enter Sum" ;
    std:: cin >> sum;
    InputeArray(Arr,size);
    PrintArray(Arr,size); 
    FindElements(Arr,sum,size);

}
void InputeArray(int Arr[] , int size){
    int index = 0;
     if (size <= 0 ){
        return;
}
    for(int i = 0; i < size ;i++){
       
        std:: cout << "Enter  your Array  " << ++index << "  Enter   " ;
        std:: cin  >>  Arr[i];
        

}
}
void PrintArray(int Arr[], int size){
    for(int i = 0; i < size ; i++){
        std::  cout << Arr[i] << "   " ;
}
    std:: cout << std:: endl;
}

void FindElements(int Arr[],int sum,int size){
    int count = 0;
     if(size <= 0 ){
        return;
}

    for(int i = 0 ; i < size-1; i++){
        for(int j =i+1; j< size ;j++){
            if (Arr[i] + Arr[j] == sum ) {
                    count++;
                    std:: cout << " Element will  be  "  << Arr[i] << "   "   << Arr[j] <<std::endl;
                    std:: cout << "Index will be  "  << i << "  "  << j << std:: endl;
}
}
}
            if (count == 0 ){
                std:: cout << "There are no such numbers  " << std:: endl;
}
}
