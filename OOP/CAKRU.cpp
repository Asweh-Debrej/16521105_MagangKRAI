#include "CAKRU.hpp"

#include <iostream>
#include <string>


CAKRU::CAKRU() {
    this->jurusan = "kosong";
    this->lokasi = "kosong";
    this->nama = "kosong";
}

CAKRU::CAKRU(int id) {
    int nim;
    std::string nama;
    std::string jurusan;
    std::string lokasi;

    std::cout << "\nCAKRU " << id << std::endl;
    std::cout << "Nama : ";
    std::cin >> nama;
    this->nama = nama;
    std::cout << "Jurusan : ";
    std::cin >> jurusan;
    this->jurusan = jurusan;
    std::cout << "Nim : ";
    std::cin >> nim;
    this->nim = nim;
    std::cout << "Tempat hidup : ";
    std::cin >> lokasi;
    this->lokasi = lokasi;
    this->nilai = 100;
    this->attack = 15;
    this->summon();
}

CAKRU::~CAKRU() {
    this->pulang();
    delete[] this;
}

void CAKRU::summon() {
    std::cout << "CAKRU " << this->nama << " disummon ke " << this->lokasi << std::endl;
}

void CAKRU::pulang() {
    std::cout << "CAKRU " << this->nama << " telah pulang dari " << this->lokasi << "." << std::endl;
}

void CAKRU::tidur() {
    std::cout << "CAKRU " << this->nama << " tidur di " << this->lokasi << "." << std::endl;
}

void CAKRU::Romusha(CAKRU &korban) {
    std::cout << "CAKRU " << this->nama << " meROMUSHA " << korban.nama << ". Sebagai gantinya, nilai CAKRU " << this->nama << " juga bertambah setengah attacknya!" << std::endl;
    korban.nilai += this->attack;
    this->attack += this->attack/2;
}

void CAKRU::Sabotage(CAKRU &korban) {
    std::cout << "CAKRU " << this->nama << " meSABOTAGE " << korban.nama << "." << std::endl;
    korban.nilai -= this->attack;
}

void CAKRU::turn(CAKRU &korban1, CAKRU &korban2) {
    int act;
    std::cout << "\nSekarang giliran CAKRU " << this->nama << std::endl;
    std::cout << "nilai : " << this->nilai << ", attack : " << this->attack << std::endl;
    std::cout << "\n mau ngapain?" << std::endl;
    std::cout << " 1. SABOTASE" << std::endl;
    std::cout << " 2. ROMUSHA" << std::endl;
    std::cout << " 3. Tidur" << std::endl;
    std::cout << ">>> " << std::endl;
    std::cin >> act;
    std::cout << std::endl;

    if (act == 1) {
        std::cout << "Mau SABOTASE siapa?" << std::endl;
        std::cout << "1. " << korban1.nama << std::endl;
        std::cout << "2. " << korban2.nama << std::endl;
        std::cout << ">>> " << std::endl;
        std::cin >> act;
        std::cout << std::endl;
        if (act == 1) {
            this->Sabotage(korban1);
        } else if (act == 2) {
            this->Sabotage(korban2);
        }
    } else if (act == 2) {
        std::cout << "Mau ROMUSHA siapa?" << std::endl;
        std::cout << "1. " << korban1.nama << std::endl;
        std::cout << "2. " << korban2.nama << std::endl;
        std::cout << ">>> " <<std::endl;
        std::cin >> act;
        std::cout << std::endl;
        if (act == 1) {
            this->Romusha(korban1);
        } else if (act == 2) {
            this->Romusha(korban2);
        }
    } else if (act == 3) {
        this->tidur();
    }
}

void CAKRU::tampil() {
    std::cout << "\n\nCAKRU " << this->nama << std::endl;
    std::cout << std::endl;
    std::cout << "Nim           : " << this->nim << std::endl;
    std::cout << "Nilai         : " << this->nilai << std::endl;
    std::cout << "Jurusan       : " << this->jurusan << std::endl;
    std::cout << "Tempat perang : " << this->lokasi << std::endl;
}