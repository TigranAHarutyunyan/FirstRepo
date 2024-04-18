#include <iostream>

void NonRepeating(int Arr[3][3]);
void InputArray(int Arr[3][3]);
void PrintArray(int Arr[3][3]);
int main() {
    int Arr[3][3];
    InputArray(Arr);
    PrintArray(Arr);
    NonRepeating(Arr);
    
    return 0;
}
void PrintArray(int Arr[3][3]){
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0;j < 3 ; j++){
            std:: cout << Arr[i][j] ;
}
        std:: cout << std:: endl;
}
}

void InputArray(int Arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << "Enter Element [" << i << "][" << j << "]: ";
            std::cin >> Arr[i][j];
        }
    }
}

void NonRepeating(int Arr[3][3]) {
    bool nonRep = false;
    int temp = 0 ;
    bool isUnique = 0 ;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
             temp = Arr[i][j];
             isUnique = true;

            
            for (int k = 0; k < 3; k++) {
                for (int y = 0; y < 3; y++) {
                    if (i != k || j != y) { 
                        if (temp == Arr[k][y]) {
                            isUnique = false;
                            break; 
}
} 
}
                if (!isUnique) {
                    break; 
}            
}
}
            if (isUnique) {
                std::cout << temp << " ";
                nonRep = true; 
}
}
}

    
    if (nonRep) {
        std::cout << "There are non-repeating numbers." << std::endl;
    return;
}
        std::cout << "All numbers are repeating." << std::endl;
    
}

