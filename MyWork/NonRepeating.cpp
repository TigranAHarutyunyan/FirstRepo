#include <iostream>
void NonRepating(int Arr[][3]);
void InputeArray(int Arr[3][3]);
int main() {
    int Arr[3][3] ;
    InputeArray(Arr);
    NonRepating(Arr);
}
void InputeArray(int Arr[3][3]){
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ;j++){
            std:: cout <<" Eneter Element [" << i << "][" << j << "]" ;
            std:: cin >> Arr[i][j];
}
}
}

void NonRepeating(int Arr[][3]) {
    bool nonRep = false;
    bool isUnique  = true ;
    int temp = 0;
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

            
            if (isUnique) {
                std::cout << temp << " ";
                nonRep = true; 
            }
        }
    }
    if (nonRep) {
        std::cout << "\nThere are no repeating numbers." << std::endl;
    } else {
        std::cout << "\nAll numbers are repeating." << std::endl;
    }
}
