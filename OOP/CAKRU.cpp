#include "CAKRU.hpp"

#include <iostream>
#include <string>

using namespace std;

int CAKRU::jumlahCakru = 0;

CAKRU::CAKRU():id(jumlahCakru + 1) {
    this->nim = 0;
    this->tempatPulang = "rahim mamah";
    this->nama = "kosong";
    this->jurusan = "kosong";
    this->lokasi = this->tempatPulang;
    this->nilai = DEFAULT_NILAI;
    this->attack = DEFAULT_ATTACK;
    jumlahCakru++;
    cout << "CAKRU " << this->nama << " telah dibuat dengan hampa." << endl;
}

CAKRU::CAKRU(string nama, string jurusan, int nim):id(jumlahCakru + 1) {
    this->nim = nim;
    this->tempatPulang = "rahim mamah";
    this->nama = nama;
    this->jurusan = jurusan;
    this->lokasi = lokasi;
    this->nilai = DEFAULT_NILAI;
    this->attack = DEFAULT_ATTACK;
    jumlahCakru++;
    cout << "CAKRU " << this->nama << " telah dibuat." << endl;
}

CAKRU::CAKRU(const CAKRU &panutan):id(jumlahCakru + 1) {
    this->nim = panutan.nim;
    this->tempatPulang = panutan.tempatPulang;
    this->nama = panutan.nama;
    this->jurusan = panutan.jurusan;
    this->lokasi = panutan.lokasi;
    this->nilai = DEFAULT_NILAI;
    this->attack = DEFAULT_ATTACK;
    jumlahCakru++;
    cout << "CAKRU " << this->nama << " telah disalin." << endl;
}

void CAKRU::summon(string lokasi) {
    this->lokasi = lokasi;
    cout << "CAKRU " << this->nama << " disummon ke " << lokasi << endl;
}

void CAKRU::pulang() {

    cout << "CAKRU " << this->nama << " telah pulang dari " << this->lokasi << " ke rahim mamah." << endl;
}

void CAKRU::tidur() {
    cout << "CAKRU " << this->nama << " tidur di " << this->lokasi << "." << endl;
}

void CAKRU::Romusha(CAKRU &korban) {
    cout << "CAKRU " << this->nama << " meROMUSHA " << korban.nama << ". Sebagai gantinya, attack CAKRU " << this->nama << " bertambah seperlima attacknya!" << endl;
    korban.nilai += this->attack;
    this->attack += this->attack/5;
}

void CAKRU::Sabotage(CAKRU &korban) {
    cout << "CAKRU " << this->nama << " meSABOTAGE " << korban.nama << "." << endl;
    korban.nilai -= this->attack;
}

void CAKRU::tampil() {
    cout << endl;
    cout << "NIM     : " << this->nim << endl;
    cout << "Nama    : " << this->nama << endl;
    cout << "Nilai   : " << this->nilai << endl;
    cout << "Attack  : " << this->attack << endl;
    cout << "Jurusan : " << this->jurusan << endl;
    cout << endl;
}

void CAKRU::tampilSekilas() {
    cout << "Nilai " << this->nama << " : " << this->nilai << " dengan attack : " << this->attack << endl;
}

void CAKRU::setNIM(int nim) {
    this->nim = nim;
}

void CAKRU::setAttack(float attack) {
    this->attack = attack;
}

void CAKRU::setNilai(float nilai) {
    this->nilai = nilai;
}

void CAKRU::setNama(string nama) {
    this->nama = nama;
}

void CAKRU::setJurusan(string jurusan) {
    this->jurusan = jurusan;
}

void CAKRU::setLokasi(string lokasi) {
    this->lokasi = lokasi;
}

int CAKRU::getNIM() const {
    return this->nim;
}

int CAKRU::getJumlahCakru() const {
    return this->jumlahCakru;
}

float CAKRU::getNilai() const {
    return this->nilai;
}

string CAKRU::getNama() const {
    return this->nama;
}

string CAKRU::getJurusan() const {
    return this->jurusan;
}

string CAKRU::getLokasi() const {
    return this->lokasi;
}