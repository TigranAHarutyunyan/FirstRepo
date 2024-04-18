#include <iostream>
void  ReverseArray(char Arr[] , int size);
void  InputeArray(char Arr[], int size);
void  PrintArray(char Arr[], int size );

int main(){
    int size = 0;       
    std:: cout << "Emter  Size of Array ";
    std:: cin >> size ;
    std:: cout <<"Enter word" <<std:: endl;
    char Array[size]; 
    InputeArray(Array,size);
    ReverseArray(Array,size);    
    PrintArray(Array,size);    
}
          


void InputeArray(char Arr[] , int size){
    for(int i = 0 ;i< size; i++){
        std:: cin >> Arr[i];
}
}
void ReverseArray(char Arr[] , int size){
    char temp;
    for(int i = 0; i< size-1; i++){
        for(int j = 0 ; j< size- i  - 1 ; j++){
                temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp; 
                
                
}          
}
}
void PrintArray(char Arr[],int size){
    for(int i= 0; i < size ;i++){
        std:: cout << Arr[i];
}
        std:: cout <<std:: endl;
}
