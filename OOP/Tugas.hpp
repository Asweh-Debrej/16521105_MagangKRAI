#include <iostream>
#include <string>

class CAKRU {
    public:
        int nim;
        int nilai;
        int attack;
        std::string nama;
        std::string jurusan;
        void summon(std::string lokasi) {
            std::cout << "CAKRU " << nama << " disummon ke " << lokasi << std::endl;
        }
        void pulang(std::string lokasi) {
            std::cout << "CAKRU " << nama << " pulang dari " << lokasi << std::endl;
        }
        void tidur(std::string lokasi) {
            std::cout << "CAKRU " << nama << " tidur di " << lokasi << std::endl;
        }
        void Sabotage(CAKRU *korban) {
            korban->nilai -= nilai;
        }
        void Romusha(CAKRU *korban) {
            korban->nilai += nilai;
        }
};