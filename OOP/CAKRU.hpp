#ifndef _CAKRU_HPP
#define _CAKRU_HPP

#include <iostream>
#include <string>

using namespace std;

#define DEFAULT_NILAI 100
#define DEFAULT_ATTACK 15

class CAKRU {
    private:
        const int id;
        static int jumlahCakru;
        int nim;
        float attack;
        float nilai;
        string nama;
        string jurusan;
        string lokasi;
        string tempatPulang;

    public:
        CAKRU();
        CAKRU(string nama, string jurusan, int nim);
        CAKRU(const CAKRU&);

        // Method
        void summon(string lokasi);
        void pulang();
        void tidur();
        void Sabotage(CAKRU &korban);
        void Romusha(CAKRU &korban);
        void tampil();
        void tampilSekilas();

        // Setter
        void setNIM(int nim);
        void setAttack(float attack);
        void setNilai(float nilai);
        void setNama(string nama);
        void setJurusan(string jurusan);
        void setLokasi(string lokasi);
        
        // Getter
        int getID() const;
        int getNIM() const;
        int getJumlahCakru() const;
        float getNilai() const;
        string getNama() const;
        string getJurusan() const;
        string getLokasi() const;
};



#endif