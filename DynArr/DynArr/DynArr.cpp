#include <iostream>
#include <cassert>
#include <cstring>
using namespace std;

//void unos(double *niz, int brojClanova) {
//	for (int i = 0; i < brojClanova; i++)
//		cin >> niz[i];
//}
//
//void prosjecna(double *niz, int brojClanova) {
//	double suma = 0, prosjek;
//	for (int i = 0; i < brojClanova; i++)
//		suma += niz[i];
//	prosjek = suma / brojClanova;
//	cout << "Prosjecna vrijednost elemenata niza iznosi " << prosjek << ".";
//}
//
//void main() {
//	int brojClanova;
//	double *niz = nullptr;
//	cout << "Unesite broj koliko clanova niza zelite: ";
//	cin >> brojClanova;
//	niz = new double[brojClanova];
//	cout << "Unesite clanove niza:" << endl;
//	unos(niz, brojClanova);
//	prosjecna(niz, brojClanova);
//	delete[] niz;
//	niz = nullptr;
//
//	system("pause>0");
//}

//void unos(int *niz, int brojElemenata) {
//	cout << "Unesite " << brojElemenata << " elemenata niza:" << endl;
//	for (int i = 0; i < brojElemenata; i++)
//		cin >> niz[i];
//}
//
//int provjeraUslova(int *niz, int count) {
//	int brojNegativnih = 0;
//	for (int i = 0; i < count; i++)
//	{
//		if (niz[i] < 0)
//			brojNegativnih++;
//	}
//	return brojNegativnih;
//}
//
//void kreiranjeNizaNegBr(int *niz1, int *niz2, int count) {
//	int j = 0;
//	for (int i = 0; i < count; i++) {
//		if (niz1[i] < 0) {
//			niz2[j] = niz1[i];
//			j++;
//		}
//	}
//}
//
//void ispis(int *niz1, int *niz2, int count1, int count2) {
//	cout << "Elementi prvog niza su: ";
//	for (int i = 0; i < count1 - 1; i++)
//		cout << niz1[i] << ", ";
//	cout << niz1[count1-1] << endl;
//	cout << "Postoji " << count2 << " negativnih brojeva u nizu broj jedan." << endl;
//	cout << "Elementi drugog niza su: ";
//	for (int i = 0; i < count2 - 1; i++)
//		cout << niz2[i] << ", ";
//	cout << niz2[count2-1] << endl;
//}
//
//void dealociraj(int *niz1,int *niz2) {
//	delete[] niz1;
//	niz1 = nullptr;
//	delete[] niz2;
//	niz2 = nullptr;
//}
//
//void main() {
//	int brojElemenata, brojNegativnihBrojeva;
//	cout << "Unesite broj koliko elemenata zelite unijeti: ";
//	cin >> brojElemenata;
//	int *niz1 = new int[brojElemenata];
//	unos(niz1, brojElemenata);
//	brojNegativnihBrojeva = provjeraUslova(niz1, brojElemenata);
//	int *niz2 = new int[brojNegativnihBrojeva];
//	kreiranjeNizaNegBr(niz1, niz2, brojElemenata);
//	ispis(niz1, niz2, brojElemenata, brojNegativnihBrojeva);
//	dealociraj(niz1, niz2);
//	system("pause>0");
//}

//void inicijalizacijaPokazivaca(int **pok, int niz[], int count){
//	pok[0] = &niz[0];
//	pok[1] = &niz[0];
//	for (int i=0;i<count-1;i++)
//	{
//		if (niz[i + 1] < niz[i])
//			pok[0] = &niz[i + 1];
//		if (niz[i + 1] > niz[i])
//			pok[1] = &niz[i + 1];
//	}
//	
//}
//
//void main() {
//	const int max = 5;
//	int niz[max] = { 6,1,3,7,2 };
//	int **pok = new int*[2];
//	inicijalizacijaPokazivaca(pok, niz, max);
//	cout << "Najmanji element niza je: " << *(pok[0]) << "\nNalazi se na memorijskoj lokaciji cija je adresa: " << pok[0] << endl;
//	cout << "Najveci element niza je: " << *(pok[1]) << "\nNalazi se na memorijskoj lokaciji cija je adresa: " << pok[1] << endl;
//	
//	delete[] pok;
//	pok = nullptr;
//	system("pause>0");
//}

//void unos(int **pok, int a,int b) {
//	for (int i = 0; i < a; i++) {
//		for (int j = 0; j < b; j++)
//			cin >> pok[i][j];
//	}
//}
//
//void suma(int **pok1, int **pok2, int **pok3, int a, int b) {
//	for (int i = 0; i < a; i++) {
//		for (int j = 0; j < b; j++)
//			pok3[i][j] = pok1[i][j] + pok2[i][j];
//	}
//}
//
//void ispis(int **pok, int a, int b) {
//	for (int i = 0; i < a; i++) {
//		cout << endl;
//		for (int j = 0; j < b; j++) {
//			cout << "\t" << pok[i][j];
//		}
//	}
//	cout << endl <<endl;
//}
//
//void dealokacija(int **pok, int a) {
//	for (int i = 0; i < a; i++)
//		delete[] pok[i];
//	delete[] pok;
//	pok = nullptr;
//}
//
//void main() {
//	int a, b;
//
//	cout << "Unesite dimenzije matrica: ";
//	cin >> a >> b;
//
//	int **mat1 = new int*[a];
//	for (int i = 0; i < a; i++)
//		mat1[i] = new int[b];
//	int **mat2 = new int*[a];
//	for (int i = 0; i < a; i++)
//		mat2[i] = new int[b];
//
//	cout << "Unesite clanove prve matrice:" << endl;
//	unos(mat1, a, b);
//	cout << "Unesite clanove druge matrice:" << endl;
//	unos(mat2, a, b);
//
//	int **mat3 = new int*[a];
//	for (int i = 0; i < a; i++)
//		mat3[i] = new int[b];
//
//	suma(mat1, mat2, mat3, a, b);
//
//	cout << "Prva matrica:" << endl;
//	ispis(mat1, a, b);
//
//	cout << "Druga matrica:" << endl;
//	ispis(mat2, a, b);
//
//	cout << "Rezultat zbira matrica:" << endl;
//	ispis(mat3, a, b);
//
//	dealokacija(mat1, a);
//	dealokacija(mat2, a);
//	dealokacija(mat3, a);
//
//	system("pause>0");
//}

char*crt = "\n---------------------------------------------------------------------\n";

struct radnik {
	int ib;
	char ime[10];
	char prezime[10];
	double dohodak[12];
	int staz;
	char spol[10];
};

void unos(radnik *pok, int count) {
	for (int i = 0; i < count; i++) {
		cout << "Identifikacioni broj: ";
		cin >> pok[i].ib;
		cout << "Ime: ";
		cin.ignore();
		cin.get(pok[i].ime, 10);
		cin.ignore();
		cout << "Prezime: ";
		cin.get(pok[i].prezime, 10);
		cout << "Unesite dohotke za svaki mjesec u godini:" << endl;
		cout << "\tJanuar: ";
		cin >> pok[i].dohodak[0];
		cout << "\tFebruar: ";
		cin >> pok[i].dohodak[1];
		cout << "\tMart: ";
		cin >> pok[i].dohodak[2];
		cout << "\tApril: ";
		cin >> pok[i].dohodak[3];
		cout << "\tMaj: ";
		cin >> pok[i].dohodak[4];
		cout << "\tJuni: ";
		cin >> pok[i].dohodak[5];
		cout << "\tJuli: ";
		cin >> pok[i].dohodak[6];
		cout << "\tAugust: ";
		cin >> pok[i].dohodak[7];
		cout << "\tSeptembar: ";
		cin >> pok[i].dohodak[8];
		cout << "\tOktobar: ";
		cin >> pok[i].dohodak[9];
		cout << "\tNovembar: ";
		cin >> pok[i].dohodak[10];
		cout << "\tDecembar: ";
		cin >> pok[i].dohodak[11];
		cout << "Spol: ";
		cin.ignore();
		cin.get(pok[i].spol, 10);
		cout << "Staz: ";
		cin >> pok[i].staz;		
		system("cls");
	}
}

void ispis(radnik *pok, int count) {
	for (int i = 0; i < count; i++) {
		cout << crt;
		cout << "Identifikacioni broj: " << pok[i].ib << endl;
		cout << "Ime: " << pok[i].ime << endl;
		cout << "Prezime: " << pok[i].prezime << endl;
		cout << "\t\t::Dohodak::" << endl;
		cout << "\tJanuar: " <<  pok[i].dohodak[0] << endl;
		cout << "\tFebruar: " << pok[i].dohodak[1] << endl;
		cout << "\tMart: " << pok[i].dohodak[2] << endl;
		cout << "\tApril: " << pok[i].dohodak[3] << endl;
		cout << "\tMaj: " << pok[i].dohodak[4] << endl;
		cout << "\tJuni: " << pok[i].dohodak[5] << endl;
		cout << "\tJuli: " << pok[i].dohodak[6] << endl;
		cout << "\tAugust: " << pok[i].dohodak[7] << endl;
		cout << "\tSeptembar: " << pok[i].dohodak[8] << endl;
		cout << "\tOktobar: " << pok[i].dohodak[9] << endl;
		cout << "\tNovembar: " << pok[i].dohodak[10] << endl;
		cout << "\tDecembar: " << pok[i].dohodak[11] << endl;
		cout << "Staz: " << pok[i].staz << endl;
		cout << "Spol: " << pok[i].spol << crt;

	}
}

int prebrojiZene(radnik*pok, int count) {
	int brojac = 0;
	for (int i = 0; i < count; i++) {
		if (strstr(pok[i].spol, "Zenski") != nullptr)
			brojac++;
	}
	cout << endl << brojac << " radnik(a) je zena." << endl;
	return brojac;
}

void kopiraj_zene(radnik *pok1, radnik *pok2, int count) {
	int index = 0;
	for (int i = 0; i < count; i++) {
		if (strstr(pok1[i].spol, "Zenski") != nullptr) {
			pok2[index] = pok1[i];
			index++;		
		}
	}
}

radnik *najduzePrezime(radnik *pok, int count) {
	radnik *pok2 = nullptr;
	pok2 = new radnik;
	int pom = 0;
	for (int i = 1; i < count; i++) {
		if (strlen(pok[pom].prezime) < strlen(pok[i].prezime))
			pom = i;
	}
	pok2 = &pok[pom];
	return pok2;
	delete pok2;
	pok2 = nullptr;
}

void pretraga_po_imenu(radnik *pok, int count) {
	char radnik_ime[15];
	cout << "Unesite ime trazenog radnika po imenu: ";
	cin.ignore();
	cin.get(radnik_ime, 15);
	int pom = 0;
	for (int i = 0; i < count; i++) {
		if (strstr(pok[i].ime, radnik_ime) != nullptr) {
			pom = i;
			cout << crt;
			cout << "\t\tObiljezja trazenog radnika:" << endl;
			cout << "Identifikacioni broj: " << pok[pom].ib << endl;
			cout << "Ime: " << pok[pom].ime << endl;
			cout << "Prezime: " << pok[pom].prezime << endl;
			cout << "\t\t::Dohodak::" << endl;
			cout << "\tJanuar: " << pok[pom].dohodak[0] << endl;
			cout << "\tFebruar: " << pok[pom].dohodak[1] << endl;
			cout << "\tMart: " << pok[pom].dohodak[2] << endl;
			cout << "\tApril: " << pok[pom].dohodak[3] << endl;
			cout << "\tMaj: " << pok[pom].dohodak[4] << endl;
			cout << "\tJuni: " << pok[pom].dohodak[5] << endl;
			cout << "\tJuli: " << pok[pom].dohodak[6] << endl;
			cout << "\tAugust: " << pok[pom].dohodak[7] << endl;
			cout << "\tSeptembar: " << pok[pom].dohodak[8] << endl;
			cout << "\tOktobar: " << pok[pom].dohodak[9] << endl;
			cout << "\tNovembar: " << pok[pom].dohodak[10] << endl;
			cout << "\tDecembar: " << pok[pom].dohodak[11] << endl;
			cout << "Staz: " << pok[pom].staz << endl;
			cout << "Spol: " << pok[pom].spol << crt;
		}
	}
}

void prihodi(radnik *pok, int count, int identifikacioni_broj) {
	double prihod = 0.0, pom=0.0, staz_pom=0.0;
	for (int i = 0; i < count; i++) {
		if (pok[i].ib == identifikacioni_broj)
		{
			for (int j = 0; j < 12; j++) {
				pom += (pok[i].dohodak[j]);
			}
			prihod = pom + (((pom / 100) * 6) * pok[i].staz);
			cout << "Godisnji prihod trazenog radnika iznosi: " << prihod << " KM" << endl;
		}
	}
}

void main() {
	int a, brojZena, ib;
	cout << "Unesite koliko objekata tipa radnik zelite kreirati: ";
	cin >> a;
	system("cls");
	radnik*pok = new radnik[a];
	unos(pok, a);
	ispis(pok, a);
	brojZena = prebrojiZene(pok, a);
	radnik*pok2 = new radnik[brojZena];
	kopiraj_zene(pok, pok2, a);
	radnik *pok3 = najduzePrezime(pok, a);
	cout << endl << "Radnik sa najduzim prezimenom je: " << pok3->ime << " " << pok3->prezime << "." << endl;
	pretraga_po_imenu(pok, a);
	cout << "Unesite identifikacioni broj radnika za koga zelite izracunati godisnje prihode: ";
	cin >> ib;
	prihodi(pok, a, ib);
	delete[] pok;
	pok = nullptr;
	delete[] pok2;
	pok2 = nullptr;
	system("pause>0");
}