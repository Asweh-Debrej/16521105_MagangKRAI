#include "CAKRU.cpp"



int main() {
    
    CAKRU kru1(1);
    CAKRU kru2(2);
    CAKRU kru3(3);

    for (int i = 0; i < 7; i++) {
        std::cout << "\n\n\nGiliran Ke-" << i+1 << std::endl;
        kru1.turn(kru2, kru3);
        kru2.turn(kru3, kru1);
        kru3.turn(kru1, kru2);
    }

    std::cout << "Giliran habis!" << std::endl;
    kru1.tampil();
    kru2.tampil();
    kru3.tampil();

    return 0;
}