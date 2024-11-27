#include <iostream>
#include <string>
#include <windows.h>
#include <iomanip>

using namespace std;

char getSize() {
    char ukuran;
    cout << "\nPilih Ukuran \n";
    cout << "(S/s untuk Small, M/m untuk Medium, L/l untuk Large) \n";
    cout << "Masukkan Ukuran = "; 
	cin >> ukuran;

    return ukuran;
}

int main() {
    string film, bioskop, genre, seat_film, teater;
    int menu[100], harga[100], jumlah[100], sub_total[100], total_harga_film = 0, total_harga_makanan = 0, promo, pembayaran, total_harga, pilih;
    const int admin = 10 / 100 * total_harga_film;
    char selesai = false, batal;
    string perintah[100], login = "block", nama, email_msk, email_dftr, sandi_msk, sandi_dftr, nope, alamat;
    int i = 0, q = 1, n, b = 0, c = 0;
    system("cls");
    char jenisMenu;
    int MenuMakanan;
    int MenuMinuman;
    int MenuPaket;
    char ukuran;
    int pilihanPaket;
    float totalHarga, sum;

	regist:
    cout << "|------------------------------------------------------| \n";
    cout << "|              Selamat Datang di Bioskop               | \n";
    cout << "|======================================================| \n";
    cout << " 1. Punya akun bioskop \n";
    cout << " 2. Tidak punya akun \n";
    cout << " Masukan Pilihan anda: ";
    cin >> pilih;
    system("cls");

   if (pilih == 1) {
        do {
            cout << " Email: ";
            cin >> email_msk;
            cout << " Password: ";
            cin >> sandi_msk;
            if (email_msk == email_dftr && sandi_msk == sandi_dftr) {
                cout << " Selamat Anda berhasil Login \n";
                login = "berhasil";
                system("pause");
                system("cls");
                // Mengarahkan ke bagian setelah login berhasil
                goto damen;
                
            } else if (email_msk == email_dftr && sandi_msk != sandi_dftr) {
                cout << " MAAF PASSWORD SALAH \n";
                cout << " SILAHKAN COBA LAGI \n";
                q = q + 1;
                system("pause");
                system("cls");
            } else {
                cout << " MAAF ANDA BELUM MEMPUNYAI AKUN \n";
                cout << " SILAHKAN BUAT AKUN TERLEBIH DAHULU \n";
                system("pause");
                system("cls");
                goto regist;
            }

        } while (q <= 3);
        if (login != "berhasil") {
            for (n = 30; n > 0; n--) {
                cout << " MAAF USERNAME ATAU PASSWORD SALAH  \n";
                cout << " SILAHKAN COBA BEBERAPA SAAT LAGI \n";
                cout << n;
                Sleep(200);
                system("cls");
            }
            goto regist;
        }
    }

    if (pilih == 2) {
         cout << " Nama Lengkap : ";
        cin.ignore(); // Membersihkan input sebelumnya
        getline(cin, nama);
        cout << " Email : ";
        getline(cin, email_dftr);
        cout << " Password : ";
        getline(cin, sandi_dftr);
        cout << " PENDAFTARAN BERHASIL! \n";
        system("pause");
        system("cls");
        goto regist;
    } else {
        cout << " MAAF KODE YANG ANDA MASUKAN SALAH " << endl;
        system("pause");
        system("cls");
        goto regist;
    }

    damen:
    cout<< "|------------------------------------------------------|\n";
    cout<< "|                Silakan Pilih Menu                  |\n";
    cout<< "|======================================================|\n";
    cout<< " 1. Pilih Film \n";
    cout<< " 2. Pilih Makanan & Minuman \n";
    cout<< "Masukan Pilihan Anda : "; cin>>pilih;
    system ("cls");
	
	while(selesai==false){
    if (pilih == 1) {
        cout<<"\t SILAKAN PILIH MENU FILM ANDA"<<nama<<endl;
        cout<<"\t |-----------------------------------------------------|\n";
        cout<<"\t |                   1. MARVEL                         |\n";
        cout<<"\t |                   2. ANIMASI                        |\n";
        cout<<"\t |                   3. ROMANCE                        |\n";
        cout<<"\t ======================================================|\n";
        cout << "\tKlik 0 jika selesai memesan \n";
        cout<<endl;
        cout<< "\t Silakan Pilih Film : "; cin>>menu[i];
            
            if(menu[i]<=3){
                if (menu[i]==0){
                    selesai=true;
                    system ("cls");
                    goto damen;
                }
                else {
                    switch (menu[i]){
                        case 1:
                            harga[i] = 40000;
                            break;
                        case 2:
                            harga[i] = 40000;
                            break;
                        case 3:
                            harga[i] = 40000;
                            break;
                    }
                cout << "\t Jumlah Tiket yang dibeli  : ";
                cin >> jumlah[i];
                sub_total[i] = harga[i] * jumlah[i];
                total_harga= total_harga + sub_total[i];
                sum = total_harga + admin;
                i++;
                system("cls");
                }
            }
        }
    }
	system("cls");
	
	 
	if (pilih == 2) {
        do {
        cout << "Pilihan Menu:" << endl;
        cout << "A. Menu Makanan" << endl;
        cout << "B. Menu Minuman" << endl;
        cout << "C. Menu Paket" << endl;
        cout << "D. Selesai dan Hitung Total" << endl;
        cout << "Pilihlah Menu: ";
        cin >> jenisMenu;

        if (jenisMenu == 'A' || jenisMenu == 'a') {
        cout << "\nMenu Makanan:" << endl;
            cout << "1. Popcorn Caramel" << endl;
            cout << "2. Popcorn Salted" << endl;
            cout << "3. French Fries" << endl;
            cout << "4. Burger" << endl;
            cout << "5. Hotdog" << endl;
            cout << "6. Fish and Chips" << endl;
            cout << "Pilihlah Menu Makanan: ";
            cin >> MenuMakanan;

            switch (MenuMakanan) {
                case 1:
                    cout << "Pilihan Menu = Popcorn Caramel \n";
                    
                    ukuran = getSize();
                    switch (ukuran) {
                        case 'L':
                        case 'l':
                            totalHarga += 50000;  // Harga untuk menu makanan berukuran Large
                            system ("cls");
							break;
                        case 'M':
                        case 'm':
                            totalHarga += 40000;  // Harga untuk menu makanan berukuran Medium
                            system ("cls");
							break;
                        case 'S':
                        case 's':
                            totalHarga += 30000;  // Harga untuk menu makanan berukuran Small
                            system ("cls");
							break;
                        default:
                            cout << "Ukuran tidak valid!" << endl;
                            break;
                    }
                    break;

                case 2:
                    cout << "Pilihan Menu = Popcorn Salted \n";
                    
                    ukuran = getSize();
                    switch (ukuran) {
                        case 'L':
                        case 'l':
                            totalHarga += 45000;  // Harga untuk menu makanan berukuran Large
                            system ("cls");
							break;
                        case 'M':
                        case 'm':
                            totalHarga += 35000;  // Harga untuk menu makanan berukuran Medium
                            system ("cls");
							break;
                        case 'S':
                        case 's':
                            totalHarga += 25000;  // Harga untuk menu makanan berukuran Small
                            system ("cls");
							break;
                        default:
                            cout << "Ukuran tidak valid!" << endl;
                            break;
                    }
                    break;
                    
                case 3:
                    cout << "Pilihan menu = French Fries \n";
                    
                    ukuran = getSize();
                    switch (ukuran) {
                        case 'L':
                        case 'l':
                            totalHarga += 36000;  // Harga untuk menu makanan berukuran Large
                            system ("cls");
							break;
                        case 'M':
                        case 'm':
                            totalHarga += 30000;  // Harga untuk menu makanan berukuran Medium
                            system ("cls");
							break;
                        case 'S':
                        case 's':
                            totalHarga += 24000;  // Harga untuk menu makanan berukuran Small
                            system ("cls");
							break;
                        default:
                            cout << "Ukuran tidak valid!" << endl;
                            break;
            		}
            		break;
            		
            	case 4:
   					cout << "Pilihan Menu = Burger \n";
        			totalHarga += 26000;
				    system ("cls");
    				break;

				case 5:
					cout << "Pilihan Menu = Hotdog \n";
        			totalHarga += 24000;
					system ("cls");
    				break;
					
				case 6:
					cout << "Pilihan Menu = Fish and Chips \n";
        			totalHarga += 26000;
    				system ("cls");
    				break;
					
					
            	default:{
                    cout << "Menu tidak valid!" << endl;
                    system ("cls");
					break;
        		}
		}
	}
        
        else if (jenisMenu == 'B' || jenisMenu == 'b') {
            cout << "\nMenu Minuman:" << endl;
            cout << "1. Lemon Tea" << endl;
            cout << "2. Green Tea" << endl;
            cout << "3. Coca Cola" << endl;
            cout << "4. Sprite" << endl;
            cout << "5. Fanta" << endl;
            cout << "6. Aqua" << endl;
            cout << "Pilihlah Menu Minuman: ";
            cin >> MenuMinuman;
            
            switch (MenuMinuman) {
            	case 1: {
                    cout << "Pilihan Minuman = Lemon Tea \n";
                    
                    ukuran = getSize();
                    switch (ukuran) {
                        case 'L':
                        case 'l':
                            totalHarga += 22000;  // Harga untuk menu makanan berukuran Large
                            system ("cls");
							break;
                        case 'M':
                        case 'm':
                            totalHarga += 18000;  // Harga untuk menu makanan berukuran Medium
                            system ("cls");
							break;
                        case 'S':
                        case 's':
                            totalHarga += 15000;  // Harga untuk menu makanan berukuran Small
                            system ("cls");
							break;
                        
						default:
                            cout << "Ukuran tidak valid!" << endl;
                            system ("cls");
							break;
                    }
                    break;
                }
                    
                case 2: {
                    cout << "Pilihan Minuman = Green Tea \n";
                    
                    ukuran = getSize();
                    switch (ukuran) {
                        case 'L':
                        case 'l':
                            totalHarga += 28000;  // Harga untuk menu makanan berukuran Large
                            system ("cls");
							break;
                        case 'M':
                        case 'm':
                            totalHarga += 25000;  // Harga untuk menu makanan berukuran Medium
                            system ("cls");
							break;
                        case 'S':
                        case 's':
                            totalHarga += 20000;  // Harga untuk menu makanan berukuran Small
                            system ("cls");
							break;
                        default:
                            cout << "Ukuran tidak valid!" << endl;
                            system ("cls");
							break;
                    }
                    break;
                }
                    
                case 3:{
                    cout << "Pilihan Minuman = Coca-Cola \n";
                    
                    ukuran = getSize();
                    switch (ukuran) {
                        case 'L':
                        case 'l':
                            totalHarga += 32000;  // Harga untuk menu makanan berukuran Large
                            system ("cls");
							break;
                        case 'M':
                        case 'm':
                            totalHarga += 28000;  // Harga untuk menu makanan berukuran Medium
                            system ("cls");
							break;
                        case 'S':
                        case 's':
                            totalHarga += 24000;  // Harga untuk menu makanan berukuran Small
                            system ("cls");
							break;
                        default:
                            cout << "Ukuran tidak valid!" << endl;
                            system ("cls");
							break;
                        }
                        break;
                }
                            
                case 4: {
                    cout << "Pilihan Minuman = Sprite \n";
                    
                    ukuran = getSize();
                    switch (ukuran) {
                        case 'L':
                        case 'l':
                            totalHarga += 32000;  // Harga untuk menu makanan berukuran Large
                            system ("cls");
							break;
                        case 'M':
                        case 'm':
                            totalHarga += 28000;  // Harga untuk menu makanan berukuran Medium
                        	system ("cls");
						    break;
                        case 'S':
                        case 's':
                            totalHarga += 24000;  // Harga untuk menu makanan berukuran Small
                            break;
                        default:
                            cout << "Ukuran tidak valid!" << endl;
                            system ("cls");
							break;
                		}
                		break;
                }
                   case 5: {
                    cout << "Pilihan Minuman = Sprite \n";
                    
                    ukuran = getSize();
                    switch (ukuran) {
                        case 'L':
                        case 'l':
                            totalHarga += 32000;  // Harga untuk menu makanan berukuran Large
                            system ("cls");
							break;
                        case 'M':
                        case 'm':
                            totalHarga += 28000;  // Harga untuk menu makanan berukuran Medium
                            system ("cls");
							break;
                        case 'S':
                        case 's':
                            totalHarga += 24000;  // Harga untuk menu makanan berukuran Small
                            system ("cls");
							break;
                        default:
                            cout << "Ukuran tidak valid!" << endl;
                            system ("cls");
							break;
                		}
                		break;
                } 
                
                case 6:{
					cout << "Pilihan Minuman = Aqua \n";					
        			totalHarga += 12000;
        			system ("cls");
    				break;
    			}
                    
            	default:{
                    cout << "Menu tidak valid!" << endl;
                    system ("cls");
					break;
        		}
        	}
        }
		else if  (jenisMenu == 'C' || jenisMenu == 'c') {
            cout << "1. Paket 1 \n";
            cout << "\t - Popcorn S \n";
            cout << "\t - Coca-Cola S \n";
            cout << "\n2. Paket 2 \n";
            cout << "\t - Popcorn M \n";
            cout << "\t - Fanta M \n";
            cout << "\n3. Paket 3 \n";
            cout << "\t - Popcorn L \n";
            cout << "\t - Sprite L \n";
            
            cout << " Silakan Pilih Menu Paket : ";
            cin>>MenuPaket;
            
            switch (MenuPaket){
            	case 1:{
					cout << "Pilihan Paket = Paket 1 \n";					
        			totalHarga += 50000;
        			system ("cls");
    				break;
    			}
    			case 2:{
					cout << "Pilihan Paket = Paket 2 \n";					
        			totalHarga += 65000;
        			system ("cls");
    				break;
    			}
    			case 3:{
					cout << "Pilihan Paket = Paket 3 \n";					
        			totalHarga += 70000;
        			system ("cls");
    				break;
    			}
    		default:{
                    cout << "Menu tidak valid!" << endl;
                    system ("cls");
					break;
        		}	
			}
        }

    } while (jenisMenu != 'D' && jenisMenu != 'd');

    cout << "Total Yang Dipesan: Rp." << totalHarga << endl;


  
}
}

