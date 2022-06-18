        CAKRU(string nama, string jurusan, int nim);
        CAKRU(const CAKRU&);

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