#ifndef _RankingCAKRU_HPP
#define _RankingCAKRU_HPP

#include <iostream>
#include <string>
#include "CAKRU.cpp"

#define MAX_CAKRU 10

class RankingCAKRU {
    private:
        string namaLeaderBoard;
        static int jumlahCakru;
        CAKRU *listCakru;

    public:
        RankingCAKRU();
        RankingCAKRU(const RankingCAKRU&);
        ~RankingCAKRU();

        void add(CAKRU &cakru);
        void remove(int nim);
        void show();
        CAKRU *find(int nim);


};

#endif