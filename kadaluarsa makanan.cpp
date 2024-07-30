#include <iostream>
#include <string>
#include <limits>
#include <ctime>
#include <conio.h>

struct Produk
{
    std::string nama_produk;
    int tanggal_beli, bulan_beli, tahun_beli;
    int tanggal_kadaluarsa, bulan_kadaluarsa, tahun_kadaluarsa;
};

void intro()
{
    system("cls");
    std::cout << "===================================" << std::endl;
    std::cout << "     Program Kadaluarsa Produk  " << std::endl;
    std::cout << "===================================" << std::endl;
    std::cout << "Tekan Enter untuk melanjutkan..." << std::endl;
    std::cin.get();
}

void showMenu()
{
    system("cls");
    std::cout << "\n=== Menu ===" << std::endl;
    std::cout << "1. Biodata Kelompok" << std::endl;
    std::cout << "2. Menghitung Kadaluarsa" << std::endl;
    std::cout << "3. Keluar" << std::endl;
    std::cout << "Pilih opsi: ";
}

void biodataKelompok()
{
    system("cls");
    std::cout << "\n=== Biodata Kelompok ===" << std::endl;
    std::cout << "Nama Kelompok: Kelompok 3" << std::endl;
    std::cout << "Anggota: \n1. Laila Hayati\n2. Asyaika Zahrah\n3. Trindah Agustina \n4. Siti Amaliya" << std::endl;
    getch();
}