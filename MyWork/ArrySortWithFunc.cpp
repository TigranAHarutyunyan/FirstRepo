#include <iostream>
void sortArray(int Arr[], int sizeArray){
    
    int temp = 0;
    for(int i = 0; i< sizeArray-1;i++){  
            for(int j = 0 ; j<sizeArray-i-1;j++){
                        if(Arr[j]>Arr[j+1]){
                                temp  = Arr[j];
                                Arr[j] = Arr[j+1];
                                Arr[j+1]= temp;
}
}
}
}
void printArray(int Array[],int sizeArray){
            for(int i = 0 ; i<sizeArray;i++){
                std:: cout <<Array[i]<< "  ";
}
}
void inputeArray(int Array[],int sizeArray){
    int index = 0;
    for(int i = 0;i< sizeArray ; i++){
        
        std:: cout << "Enter Element " << ++index  << "  "  ;
        std:: cin >> Array[i];
}
}
int main(){
    int size = 0;
    std:: cout <<"Enter  number of Elements";
    std:: cin>>size;
    int Array[size] = {0};
    inputeArray(Array,size);  
    sortArray(Array,size);
    printArray(Array,size);
        return  0;
}
