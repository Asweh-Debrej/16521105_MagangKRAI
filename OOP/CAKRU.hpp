#ifndef _CAKRU_HPP
#define _CAKRU_HPP

#include <iostream>
#include <string>

class CAKRU {
    private:
        unsigned id;
        unsigned int nim;
        unsigned int nilai;
        unsigned int attack;
        std::string nama;
        std::string jurusan;
        std::string lokasi;

    public:
        CAKRU();
        CAKRU(int id);
        CAKRU(const CAKRU&);
        ~CAKRU();
        void summon();
        void pulang();
        void tidur();
        void Sabotage(CAKRU &korban);
        void Romusha(CAKRU &korban);
        void turn(CAKRU &korban1, CAKRU &korban2);
        void tampil();
};



#endif