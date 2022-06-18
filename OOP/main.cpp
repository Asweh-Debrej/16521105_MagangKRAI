#include "RankingCAKRU.cpp"


int main() {
    RankingCAKRU Leaderboard;
    CAKRU cakru1;
    CAKRU cakru2("aan yang pertama", "stei", 222222);
    CAKRU cakru3 = cakru2;
    cakru3.setNama("aan yang kedua");
    cakru3.setNIM(333333);
    cakru1.tampil();
    cakru2.tampil();
    cakru3.tampil();
    
    cakru2.tampilSekilas();
    cakru3.tampilSekilas();
    cakru3.Sabotage(cakru2);
    cakru2.tampilSekilas();
    cakru3.tampilSekilas();
    cakru2.Romusha(cakru3);
    cakru2.tampilSekilas();
    cakru3.tampilSekilas();
    cakru3.Romusha(cakru2);
    cakru2.tampilSekilas();
    cakru3.tampilSekilas();
    CAKRU cakru4 = cakru3;
    cakru4.setNama("aan yang ketiga");
    cakru4.setNIM(444444);
    cakru4.tampilSekilas();
    cakru4.Sabotage(cakru2);
    cakru2.Sabotage(cakru4);

    cakru4.tampil();
    cakru2.tampil();
    cakru3.tampil();
    cout << cakru3.getJumlahCakru() << endl;

    Leaderboard.add(cakru1);
    Leaderboard.add(cakru2);
    Leaderboard.add(cakru3);
    Leaderboard.add(cakru4);
    cout << "keluar " <<  Leaderboard.find(222222)->getNama() << " koasdasong" << endl;

    return 0;
}