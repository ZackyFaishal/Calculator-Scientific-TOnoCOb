/** Nama File : main.c
 *  Deskripsi : File Body Kalkulator
 *  Oleh      : -Zacky Faishal Abror
 *				-Annisa Dinda Gantini
*				-Dhafin Rizqi Fadhilah
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "kalkulator.h"
#include "konversi.h"
<<<<<<< HEAD
#include "convertlength.h"
=======
>>>>>>> 08d68130d2ff6e01f0d012e58559b0ee4bbe4035
#include "Trigonometri.h"

void mainKalkulator();
void mainBilling();
void mainKonversi();
void SetColor(unsigned short);
void features();
void about();
int choice;

int main(){
	system("cls");
	SetColor(13);
	printf(" _________________________________________________________________________________________________________________ \n");
	printf("\xb3");
	printf("                                                                                                                 \xb3\n");
	printf("\xb3");
	SetColor(12);
	printf("   $$$$$$$$$     $$$$$    $$        $$$$$$$$  $$      $$  $$           $$$$$    $$$$$$$$$$    $$$$$    $$$$$$    ");
	SetColor(13);
	printf("\xb3\n");
	printf("\xb3");
	SetColor(12);
	printf("  $$           $$     $$  $$       $$         $$      $$  $$         $$     $$      $$      $$     $$  $$    $$  ");
	SetColor(13);
	printf("\xb3\n");
	printf("\xb3");
	SetColor(12);
	printf("  $$           $$     $$  $$       $$         $$      $$  $$         $$     $$      $$      $$     $$  $$    $$  ");
	SetColor(13);
	printf("\xb3\n");
	printf("\xb3  $$           $$     $$  $$       $$         $$      $$  $$         $$     $$      $$      $$     $$  $$   $$   \xb3\n");
	printf("\xb3  $$           $$$$$$$$$  $$       $$         $$      $$  $$         $$$$$$$$$      $$      $$     $$  $$  $$    \xb3\n");
	printf("\xb3  $$           $$     $$  $$       $$         $$      $$  $$         $$     $$      $$      $$     $$  $$   $$   \xb3\n");
	printf("\xb3    $$$$$$$$   $$     $$  $$$$$$$$$ $$$$$$$$   $$$$$$$$   $$$$$$$$$  $$     $$      $$        $$$$$    $$    $$  \xb3\n");
    printf("\xb3_________________________________________________________________________________________________________________\xb3\n");
    printf("\xb3");
    SetColor(12);
	printf("                  [1]FEATURES           [2]ABOUT          [3]HOW TO PLAY        [4]EXIT                          ");
	SetColor(13);
	printf("\xb3\n");
    printf("\xb3_________________________________________________________________________________________________________________\xb3\n\n");
    printf("YOUR CHOICE : ");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			features();
			break;
		case 2:
			about();
			break;
		case 3:
			howToPlay();
		case 4:
			return 0;
		default:
			SetColor(64);
			puts("\nINVALID !! PLEASE INSERT THE RIGHT CHOOSE\n");
			SetColor(13);
			system("pause");
			main();
			break;
	}
    return 0;
}

void features(){
	system("cls");
	int choicefeatures;
	SetColor(7);
	puts("\n\n\t\t\t\t\t =============================");
	puts("\t\t\t\t\t| 1] Kalkulator               |");
	SetColor(15);
	puts("\t\t\t\t\t| 2] Konversi Mata Uang       |");
	SetColor(14);
	puts("\t\t\t\t\t| 3] Konversi Satuan Panjang  |");
	SetColor(14);
<<<<<<< HEAD
	puts("\t\t\t\t\t| 4] Trigono                  |");
=======
	puts("\t\t\t\t\t| 4] Trigono              |");
>>>>>>> 08d68130d2ff6e01f0d012e58559b0ee4bbe4035
	SetColor(6);
	puts("\t\t\t\t\t| 5] Back                     |");
	puts("\t\t\t\t\t =============================");
	printf("\n\t\t\t\t\t\xaf Your Choice: ");
	scanf("%i",&choicefeatures);
	fflush(stdin);
	switch(choicefeatures){
		case 1:
			mainKalkulator();
			break;
		case 2:
			mainKonversi();
			break;
		case 3:
<<<<<<< HEAD
			mainKonversiPanjang();
=======
			mainBilling();
>>>>>>> 08d68130d2ff6e01f0d012e58559b0ee4bbe4035
			break;	
		case 4:
			mainTrigono();
			break;
		case 5:
			main();
			break;
		default:
			SetColor(64);
			puts("\n\t\t\t\tINVALID !! PLEASE INSERT THE RIGHT CHOOSE\n");
			SetColor(15);
			system("pause");
			features();
			break;
	}
}

void mainKalkulator(){
	fflush(stdin);
	system("cls");
	SetColor(4);
	stack s;
    RootTree root;
    info hasil;
    int lanjutHitung;
    char operasi[100];

    createstack(&s);
    createTree(&root);
    
    printf("\n  _  __     _ _          _       _              ");
    printf("\n | |/ /    | | |        | |     | |             ");
    printf("\n | ' / __ _| | | ___   _| | __ _| |_ ___  _ __  ");
    printf("\n |  < / _` | | |/ / | | | |/ _` | __/ _ \\| '__| ");
    printf("\n | . \\\ (_| | |   <| |_| | | (_| | || (_) | |    ");
    printf("\n |_|\_\\\\__,_|_|_|\\_\\\\__,_|_|\\__,_|\\__\\___/|_|    ");
                                               
	SetColor(64);
    printf("\n\n\n \xaf Masukkan perhitungan: \n \xaf");
    scanf("%[^\n]s",&operasi);
    toPostfix(operasi,s,&hasil);

    buildTree(s,&root,hasil);
    
    SetColor(4);
    printf("\n \xaf hasil : %d\n",calculate(root));
    printf("\n Lakukan perhitungan kembali?\n Pilihan \n 1. Ya 2. Tidak\n");
    printf("Pilihanmu : ");
	scanf("%d",&lanjutHitung);
    	switch(lanjutHitung){
    		case 1 :
    			mainKalkulator();
    			break;
    		default:
    			main();
		}
<<<<<<< HEAD
=======
}

void mainTrigono(){
	system("cls");
SetColor(9);
printf( " ________  _______   ______   ______    ______   __    __   ______ \n ");
printf( "|        \\|       \\ |      \\ /      \\  /      \\ |  \\  |  \\ /      \\ \n");
printf( "  \\$$$$$$$$| $$$$$$$\  \\$$$$$$|  $$$$$$\\|  $$$$$$\\| $$\\ | $$|  $$$$$$\\ \n");
printf( "    | $$   | $$__| $$  | $$  | $$ __\\$$| $$  | $$| $$$\\| $$| $$  | $$ \n");
printf( "    | $$   | $$    $$  | $$  | $$|    \\| $$  | $$| $$$$\\ $$| $$  | $$ \n");
printf( "    | $$   | $$$$$$$\\  | $$  | $$ \\$$$$| $$  | $$| $$\\$$ $$| $$  | $$ \n");
printf( "    | $$   | $$  | $$ _| $$_ | $$__| $$| $$__/ $$| $$ \\$$$$| $$__/ $$ \n");
printf( "    | $$   | $$  | $$|   $$ \\ \\$$    $$ \\$$    $$| $$  \\$$$ \\$$    $$ \n");
printf( "      \$$    \\$$   \\$$ \\$$$$$$  \\$$$$$$   \\$$$$$$  \\$$   \\$$  \\$$$$$$ \n");
SetColor(4);
printf(" 1.  Akar 2\n");
printf(" 2.  Angka Pangkat Angka\n");
printf(" 3.  Nilai Faktorial\n");
printf(" 4.  Nilai Logaritma\n");
printf(" 5.  Nilai Modulus\n");
printf(" 6.  Nilai Sin\n");
printf(" 7.  Nilai Cos\n");
printf(" 8.  Nilai Tan\n");
printf(" 9.  Nilai Cosec\n");
printf(" 10. Nilai Cot\n");
printf(" 11. Nilai Sec\n");
printf(" Angka sembarang = main menu\n\n");
printf("MASUKAN PILIHAN:  ");
	int inputan;
	scanf("%d",&inputan);
	switch(inputan){
		case 1:
			akarDua();
			mainTrigono();
			break;
		case 2:
			angkaPangkatAngka();
			mainTrigono();
			break;
		case 3:	
			Faktorial();
			mainTrigono();
			break;
		case 4:
			Logaritma();
			mainTrigono();
			break;
		case 5:
			modulus();
			mainTrigono();
			break;
		case 6:
			TrigonoSin();
			mainTrigono();
			break;
		case 7:
			TrigonoCos();
			mainTrigono();
			break;
		case 8:
			TrigonoTan();
			mainTrigono();
			break;	
		case 9:
			TrigonoCosec();
			mainTrigono();
			break;		
		case 10:
			TrigonoCot();
			mainTrigono();
			break;	
		case 11:
			TrigonoSec();
			mainTrigono();
			break;	
		default :
			main();
	}
>>>>>>> 08d68130d2ff6e01f0d012e58559b0ee4bbe4035
}

void mainTrigono(){
	system("cls");
SetColor(9);
printf( " ________  _______   ______   ______    ______   __    __   ______ \n ");
printf( "|        \\|       \\ |      \\ /      \\  /      \\ |  \\  |  \\ /      \\ \n");
printf( "  \\$$$$$$$$| $$$$$$$\  \\$$$$$$|  $$$$$$\\|  $$$$$$\\| $$\\ | $$|  $$$$$$\\ \n");
printf( "    | $$   | $$__| $$  | $$  | $$ __\\$$| $$  | $$| $$$\\| $$| $$  | $$ \n");
printf( "    | $$   | $$    $$  | $$  | $$|    \\| $$  | $$| $$$$\\ $$| $$  | $$ \n");
printf( "    | $$   | $$$$$$$\\  | $$  | $$ \\$$$$| $$  | $$| $$\\$$ $$| $$  | $$ \n");
printf( "    | $$   | $$  | $$ _| $$_ | $$__| $$| $$__/ $$| $$ \\$$$$| $$__/ $$ \n");
printf( "    | $$   | $$  | $$|   $$ \\ \\$$    $$ \\$$    $$| $$  \\$$$ \\$$    $$ \n");
printf( "      \$$    \\$$   \\$$ \\$$$$$$  \\$$$$$$   \\$$$$$$  \\$$   \\$$  \\$$$$$$ \n");
SetColor(4);
printf(" 1.  Akar 2\n");
printf(" 2.  Angka Pangkat Angka\n");
printf(" 3.  Nilai Faktorial\n");
printf(" 4.  Nilai Logaritma\n");
printf(" 5.  Nilai Modulus\n");
printf(" 6.  Nilai Sin\n");
printf(" 7.  Nilai Cos\n");
printf(" 8.  Nilai Tan\n");
printf(" 9.  Nilai Cosec\n");
printf(" 10. Nilai Cot\n");
printf(" 11. Nilai Sec\n");
printf(" Angka sembarang = main menu\n\n");
printf("MASUKAN PILIHAN:  ");
	int inputan;
	scanf("%d",&inputan);
	switch(inputan){
		case 1:
			akarDua();
			mainTrigono();
			break;
		case 2:
			angkaPangkatAngka();
			mainTrigono();
			break;
		case 3:	
			Faktorial();
			mainTrigono();
			break;
		case 4:
			Logaritma();
			mainTrigono();
			break;
		case 5:
			modulus();
			mainTrigono();
			break;
		case 6:
			TrigonoSin();
			mainTrigono();
			break;
		case 7:
			TrigonoCos();
			mainTrigono();
			break;
		case 8:
			TrigonoTan();
			mainTrigono();
			break;	
		case 9:
			TrigonoCosec();
			mainTrigono();
			break;		
		case 10:
			TrigonoCot();
			mainTrigono();
			break;	
		case 11:
			TrigonoSec();
			mainTrigono();
			break;	
		default :
			main();
	}
}

void mainKonversiPanjang(){
	char again[1];
	awal:
		system("cls");
		printf("  _                      _   _        _____                          _                      \n");
		printf(" | |                    | | | |      / ____|                        | |                     \n");
		printf(" | |     ___ _ __   __ _| |_| |__   | |     ___  _ ____   _____ _ __| |_ ___ _ __           \n");
		printf(" | |    / _ \\ '_ \\ / _` | __| '_ \\  | |    / _ \\| '_ \\ \\ / / _ \\ '__| __/ _ \\ '__|  \n");
		printf(" | |___|  __/ | | | (_| | |_| | | | | |___| (_) | | | \\ V /  __/ |  | ||  __/ |            \n");
		printf(" |______\\___|_| |_|\\__, |\\__|_| |_|  \\_____\\___/|_| |_|\\_/ \\___|_|   \\__\\___|_|    \n");
		printf("                    __/ |                                                                   \n");
		printf("                   |___/                                                                    \n\n");
		printf("1] Milimeter \n");
		printf("2] Centimeter \n");
		printf("3] Desimeter \n");
		printf("4] Meter \n");
		printf("5] Dekameter \n");
		printf("6] Hektometer \n");
		printf("7] Kilometer \n");
		
		printf("\n\xaf\xaf Convert dari satuan: ");
		scanf("%d",&length);
		
		printf("\xaf\xaf Ke dalam satuan: ");
		scanf("%d",&tolength);
		
		printf("\xaf\xaf Masukkan nilai: ");
		scanf("%f",&input);
		
		position = difference(length,tolength);	
		diff = position;	
		if(position<0){
			position = -1*position;
		}
		converter = timesordiv(position);
		result=calculateLength(input,converter);
		convertToChar();
		printf("\n\xaf\xaf Hasil konversi dari %s ke %s adalah %f\n\n",charfrom,charto,result);
		printf("Apakah anda ingin melakukan konversi lagi? [y/n] \n");
		scanf("%s",again);
		if(strcmp(again,"y")==0 || strcmp(again,"Y")==0){
			goto awal;
		}else{
			main();
		}
}

void mainKonversi(){
	int pilih;
	char back;
	menu :
	system("COLOR 60");
	system("cls");
	printf("\n\t\t\t\t ____________________________________________\n");
	printf("\t\t\t\t\xb3 Program Konversi Mata Uang                 \xb3\n");
	printf("\t\t\t\t\xb3____________________________________________\xb3\n");
	printf("\t\t\t\t\xb3 1.Rupiah ke Dollar                         \xb3\n");
	printf("\t\t\t\t\xb3 2.Dollar ke Rupiah                         \xb3\n");
	printf("\t\t\t\t\xb3 3.Rupiah ke Yen                            \xb3\n");
	printf("\t\t\t\t\xb3 4.Yen ke Rupiah                            \xb3\n");
	printf("\t\t\t\t\xb3 5.Rupiah ke Euro                           \xb3\n");
	printf("\t\t\t\t\xb3 6.Euro ke Rupiah                           \xb3\n");
	printf("\t\t\t\t\xb3____________________________________________\xb3\n");
	printf("\t\t\t\t Masukkan Pilihan :");
	scanf("%d",&pilih);
	
	switch(pilih){
		case 1 :
			convertRupiahtoDollar();
			break;
		case 2 :
			convertDollartoRupiah();
			break;
		case 3 :
			convertRupiahtoYen();
			break;
		case 4 :
			convertYentoRupiah();
			break;
		case 5 :
			convertRupiahtoEuro();
			break;
		case 6 :
			convertEurotoRupiah();
			break;
		default :
			SetColor(64);
			puts("\n\t\t\t\tINVALID !! PLEASE INSERT THE RIGHT CHOOSE\n");
			SetColor(6);
			system("pause");
			goto menu;
			break;
	}

	printf("\n\t\t\t\t Apakah ingin mengkonversi mata uang lain?(Masukkan Y/N untuk melanjutkan)");
	scanf("%c",&back);
	
	switch(back){
		case 'y':
		case 'Y':
			system("cls");
			goto menu;
			break;
		case 'n':
		case 'N':
			SetColor(13);
			main();
			break;
	}

	if(back == 'y'|| back == 'Y'){
		system("cls");
		goto menu;
	} else{
		exit(0);
	}
	return 0;
}

void about(){
	system("cls");
	SetColor(12);
	printf("\n\t\t\t About \n");
	printf("\nAplikasi Kalkulator ini dibuat oleh kelompok TOnoCOb");
	printf("\nKelas 1A-D4 Teknik Informatika, yang beranggotakan : ");
	printf("\n  1. Annisa Dinda Gantini  - 211524003");
	printf("\n  2. Dhafin Rizqi Fadhilah - 211524007");
	printf("\n  3. Zacky Faishal Abror   - 211524031");
	printf("\nUntuk memenuhi Tugas Besar mata kuliah Struktur Data dan Algoritma.\n\n");
	system("pause");
	main();
}

void howToPlay(){
	system("cls");
	SetColor(12);
	printf("\t\t\tCARA MENGGUNAKAN APLIKASI\n");
	printf("KALKULATOR\n");
	printf("1. Masukan operasi matematika yang akan dimasukan, bisa menggunakan +,-,x,X,*,/,:\n");
	printf("2. Pastikan perhitungan yang dilakukan benar dan tidak terjadi error\n");
	printf("3. Tekan Enter untuk melihat hasil perhitungan\n");
	printf("4. Bila ingin melakukan perhitungan kembali ketik1, dan ketik 2 untuk kembali ke menu\n\n\n");
	printf("BILLING\n");
	printf("1. masukan banyak barang\n");
	printf("2. Masukan sesuai instruksi yang telah terdapat pada tampilan billing\n\n\n");
	printf("KONVERSI MATA UANG\n");
	printf("1. Masukan pilihan apa yang akan dikonversikan\n");
<<<<<<< HEAD
	printf("2. Masukan nominal uang yang akan dikonversikan, lalu tekan enter\n");
=======
	printf("2. Masukan nominal uang yang akan dikonversikan, lalu tekan enter");
>>>>>>> 08d68130d2ff6e01f0d012e58559b0ee4bbe4035
	system("pause");
	main();
	
}

void SetColor(unsigned short color) {
	HANDLE hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsoleOutput,color);
}
