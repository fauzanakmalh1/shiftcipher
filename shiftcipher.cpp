/* 
Nama Program    : Shift Cipher
Nama            : Fauzan Akmal Hariz
NPM             : 140810180005
Tanggal Buat    : 15 September 2020
Deskripsi       : Program Enkripsi Dekripsi dengan Shift Cipher
*/

#include <iostream>
#include <string.h>

using namespace std;

void enkripsi(){
    char msg[100], ch;
    int i, j, length, key;

    cout << "\nSilahkan Masukkan Pesan\t: ";
    cin.ignore(); cin.getline(msg, 100);

    cout << "Silahkan Masukkan Kunci\t: ";
    cin >> key;
    
    length = strlen(msg);

    for(int i = 0; msg[i] != '\0'; ++i){
        ch = msg[i];
        //Enkripsi untuk karakter lowercase
        if (ch >= 'a' && ch <= 'z'){
            ch = ch + key;
            if (ch > 'z') {
            ch = ch - 'z' + 'a' - 1;
            }  
            msg[i] = ch;
        }
        //Enkripsi untuk karakter uppercase
        else if (ch >= 'A' && ch <= 'Z'){
            ch = ch + key;
            if (ch > 'Z'){
            ch = ch - 'Z' + 'A' - 1;
            }
            msg[i] = ch;
        }
    }
    
    cout << "\n==================================================\n\n";
    cout << "Pesan Enkripsi\t\t: " << msg <<endl;
    cout << "\n==================================================\n";
}

void dekripsi(){
    char msg[100], ch;
    int i, j, length, key;

    cout << "\nSilahkan Masukkan Pesan\t: ";
    cin.ignore(); cin.getline(msg, 100);

    cout << "Silahkan Masukkan Kunci\t: ";
    cin >> key;
    
    length = strlen(msg);

    for(int i = 0; msg[i] != '\0'; ++i){
        ch = msg[i];
        //Dekripsi untuk karakter lowercase
        if(ch >= 'a' && ch <= 'z') {
            ch = ch - key;
            if(ch < 'a'){
            ch = ch + 'z' - 'a' + 1;
            }
            msg[i] = ch;
        }
        //Dekripsi untuk karakter uppercase
        else if(ch >= 'A' && ch <= 'Z') {
            ch = ch - key;
            if(ch < 'A') {
            ch = ch + 'Z' - 'A' + 1;
            }
            msg[i] = ch;
        }
    }

    cout << "\n==================================================\n\n";
    cout << "Pesan Dekripsi\t\t: " << msg <<endl;
    cout << "\n==================================================\n";

}

int main(){

    int choice;

    do{
        awal:
        system("cls");
        cout << "\n==================================================\n";
        cout << "               PROGRAM SHIFT CIPHER                \n";
        cout << "==================================================\n\n";
        cout << "==================================================\n";
        cout << "=                   PILIHAN MENU                 =\n";
        cout << "==================================================\n";
        cout << "=                1. Enkripsi                     =\n";
        cout << "=                2. Dekripsi                     =\n";
        cout << "=                3. Keluar Program               =\n";
        cout << "==================================================\n\n";
        cout << "Silahkan Masukkan Pilihan: "; 
        cin >> choice;
        cout << "\n==================================================\n";
        switch (choice){
            case 1:
                enkripsi();
                break;
            case 2:
                dekripsi();
                break;
            case 3:
				cout<<"\nTerima Kasih Telah Menggunakan Program Ini\n";
                return 0;
                break;
			default :
				cout<<"\nMaaf Pilihan Anda Tidak Tersedia\n";
				goto awal;
			}
			cout<<endl;
            system("pause");
		} while(choice!=3);
}