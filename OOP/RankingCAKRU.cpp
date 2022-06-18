#include "RankingCAKRU.hpp"

#include <iostream>
#include <string>

using namespace std;

int RankingCAKRU::jumlahCakru = 0;

RankingCAKRU::RankingCAKRU() {
    CAKRU cakru;
    this->namaLeaderBoard = "Unnamed";
    this->listCakru = new CAKRU[MAX_CAKRU];
}

RankingCAKRU::RankingCAKRU(const RankingCAKRU& panutan) {
    cout << "Leaderboard " << this->namaLeaderBoard << " telah disalin." << endl;
    this->namaLeaderBoard = panutan.namaLeaderBoard;
    this->listCakru = panutan.listCakru;
}

RankingCAKRU::~RankingCAKRU() {
    delete[] this->listCakru;
}

void RankingCAKRU::add(CAKRU &cakru) {
    for(int i = 0; i < MAX_CAKRU; i++) {
        if((this->listCakru[i].getNIM() == cakru.getNIM()) || (cakru.getNIM() == 0)) {
            cout << "Cakru " << this->listCakru[i].getNama() << " gagal ditambahkan ke leaderboard karena NIM masih nol atau duplikat." << endl;
            return;
        }
    }
    this->listCakru[0] = cakru; // function "CAKRU::operator=(const CAKRU &)" (declared implicitly) cannot be referenced -- it is a deleted function
    *this->find(0) = cakru; // function "CAKRU::operator=(const CAKRU &)" (declared implicitly) cannot be referenced -- it is a deleted function
}

void RankingCAKRU::remove(int nim) {
    cout << "CAKRU " << this->find(nim)->getNama() << " telah dikeluarkan dari leaderboard " << this->namaLeaderBoard << "." << endl;
    this->jumlahCakru --;
    this->find(nim)->setNIM(0);
}

void RankingCAKRU::show() {
    for(int i = 0; i < this->jumlahCakru; i++) {
        if(this->listCakru[i].getNIM() != 0){
            this->listCakru[i].tampil();
        }
    }
}

CAKRU *RankingCAKRU::find(int nim) {
    CAKRU hasil;
    for(int i = 0; i < this->jumlahCakru; i++) {
        if (this->listCakru[i].getNIM() == nim) {
            return &this->listCakru[i];
        }
    }

    return &hasil;
}