// Nama          : Gerald Jepedro Sitorus
// Program Studi : Informatika 25
// NIM           : 252410103052
// Kata-Kata     : 
//                    <p align="center">
//                        <img src="https://media.tenor.com/CWgfFh7ozHkAAAAM/rick-astly-rick-rolled.gif" width="500" alt="Fahmi Imut Gif">
//                    </p>


/*
4. Tugas Praktikum (Tulis Output)
Tugas 1: Alokasi dan Pembebasan Memori 
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int* data = (int*) malloc(5 * sizeof(int));
    for(int i=0; i<5; i++) {
        data[i] = (i+1) * 10;
    }
    cout << "Isi array: ";
    for(int i=0; i<5; i++) cout << data[i] << " ";
    cout << endl;
    free(data);
}

/* 
Program ini menggunakan fungsi malloc untuk mengalokasikan memori dinamis sebesar 5 elemen bertipe integer.
Setelah memori dialokasikan, program mengisi setiap elemen array dengan nilai 10, 20, 30, 40, dan 50 menggunakan perulangan for.
Kemudian, program mencetak isi array ke layar. 
Setelah penggunaan selesai, memori dibebaskan menggunakan fungsi free agar tidak terjadi kebocoran memori.

Output dari program adalah:
Isi array: 10 20 30 40 50
*/

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Tugas 2: Menggunakan calloc()

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int* angka = (int*) calloc(5, sizeof(int));
    cout << "Nilai awal (harus nol): ";
    for(int i=0; i<5; i++) cout << angka[i] << " ";
    cout << endl;
    free(angka);
}

/*
Program ini menggunakan calloc untuk mengalokasikan memori untuk 5 elemen integer. 
Fungsi calloc berbeda dari malloc karena selain mengalokasikan memori, ia juga menginisialisasi semua nilai menjadi nol. 
Program kemudian menampilkan nilai awal array yang semuanya nol. Setelah selesai, memori dibebaskan menggunakan free.

Output dari program adalah:
Nilai awal (harus nol): 0 0 0 0 0
*/

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Tugas 3: Mengubah Ukuran Memori dengan realloc()

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int* data = (int*) malloc(3 * sizeof(int));
    for(int i=0; i<3; i++) data[i] = i + 1;

    data = (int*) realloc(data, 6 * sizeof(int));
    for(int i=3; i<6; i++) data[i] = i + 1;

    cout << "Isi setelah realloc: ";
    for(int i=0; i<6; i++) cout << data[i] << " ";
    cout << endl;
    free(data);
}

/*
Program ini awalnya mengalokasikan memori untuk 3 elemen integer dan mengisi setiap elemen dengan 1, 2, dan 3. 
Kemudian, program memperbesar ukuran memori menjadi 6 elemen menggunakan realloc. 
Elemen tambahan diisi dengan nilai 4, 5, dan 6. Program menampilkan seluruh isi array setelah realloc. 
Memori tetap dibebaskan setelah selesai.

Output dari program adalah:
Isi setelah realloc: 1 2 3 4 5 6 
*/

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Tugas 4: Refactoring Program (Modern C++)

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string name = "Universitas Jember";
    cout << "Nama: " << name << endl;

    vector<int> nilai(5);
    for(int i=0; i<5; i++) nilai[i] = (i+1)*5;

    cout << "Nilai: ";
    for(int n : nilai) cout << n << " ";
    cout << endl;
}

/* 
Program ini menggunakan fitur string dan vector. 
Nama universitas disimpan dalam variabel string dan dicetak. 
Array integer diganti dengan vector, yang otomatis mengelola memori. 
Nilai vector diisi dengan 5, 10, 15, 20, 25 dan kemudian dicetak ke layar. 
Karena menggunakan vector, tidak perlu lagi memanggil malloc atau free secara manual.

Output dari program adalah:
Nama: Universitas Jember
Nilai: 5 10 15 20 25 
*/

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

/*
5. Pertanyaan dan Tugas Akhir
(1) Jelaskan perbedaan utama antara stack dan heap dalam pengelolaan memori!
(2) Apa yang terjadi jika kita tidak memanggil free() setelah malloc()?
(3) Kumpulkan file hasil praktikum dalam format .cpp
*/

/* 
Pertanyaan 1: Perbedaan utama antara stack dan heap

Stack adalah area memori yang digunakan untuk menyimpan variabel lokal dan informasi kontrol fungsi. 
Alokasi memori pada stack dilakukan secara otomatis saat variabel dibuat, dan de-alokasi juga terjadi otomatis saat- 
variabel keluar dari scope. Stack bersifat cepat, namun ukurannya terbatas. 
Contohnya, variabel int a dibuat di stack.

Heap adalah area memori untuk alokasi dinamis, 
di mana program harus secara eksplisit meminta memori menggunakan malloc atau calloc dan membebaskannya menggunakan free. 
Heap lebih fleksibel dan ukurannya lebih besar dibanding stack, namun alokasi dan de-alokasinya lebih lambat. 
Heap biasanya digunakan untuk data yang ukurannya tidak diketahui saat kompilasi. 
*/

/* 
Pertanyaan 2: Apa yang terjadi jika tidak memanggil free setelah malloc

Jika free tidak dipanggil setelah malloc, memori yang dialokasikan tetap terpakai meskipun program tidak lagi menggunakannya. 
Hal ini menyebabkan kebocoran memori, yang jika terjadi berulang kali dapat membuat program menggunakan lebih banyak- 
memori daripada yang dibutuhkan. 
Program yang terus menerus mengalami memory leak bisa menjadi lambat, menghabiskan sumber daya sistem, dan- 
pada kasus ekstrim bisa mengalami crash karena kehabisan memori. 
*/

/*
Pertanyaan 3: Kumpulkan file hasil praktikum dalam format .cpp

Yui Hirasawa!!!
*/