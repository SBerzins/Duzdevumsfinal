// Sandis Bērziņš, sb22063. D14.
// D14. Izveidot klasi "Laiks" - Time, kurā tiek glabāti trīs skaitļi - stunda, minūte, sekunde. Klasei izveidot šādas metodes:
// (1) konstruktors, ar kuru tiek padotas sākotnējās vērtības,
// (2) destruktors, kurš paziņo par objekta likvidēšanu,
// (3) metode "Mainīt" - change ar trīs parametriem, kas uzstāda jaunās vērtības,
// (4) metode "Drukāt" - print, kas izdrukā laiku,
// (5) metode "Aprēķināt" - calculate, kas izdrukā attālumu sekundēs no diennakts sākuma,
// attālumu minūtēs no diennakts sākuma un statusu (nakts vai diena - robežu noteikšana ir autora ziņā).
// Programma izveidota 05.12.2022
#include "program.h"
#include <iostream>
using namespace std;

laiks::laiks(int a, int b, int c) {//metode konstruktors
    stunda = a;
    minute = b;
    sekunde = c;
}

void laiks::mainit(int a, int b, int c) {//metode kas maina laiku
    stunda = a;
    minute = b;
    sekunde = c;
}

void laiks::drukat() { //metode kas izdrukā laiku
    cout << "Laiks ir: " << stunda << ":" << minute << ":" << sekunde << endl;
}

void laiks::aprekinat() { //metode kas aprēķina attālumu no diennakts sākuma minūtēs un sekundēs
    bool nakts = false;
    if(stunda < 7 || stunda > 22){
        nakts = true;
    }
    int slaiks = ((stunda * 3600) + (minute * 60) + sekunde);
    int mlaiks = ((stunda * 60) + minute);
    if(nakts){
        cout <<"Ir nakts, "<<"Attālums no diennakts sākuma sekundēs ir: "<<slaiks<<endl<<"Attālums no diennakts sākuma minūtēs ir: "<<mlaiks<<endl;
    }
    else {
        cout <<"Ir diena, "<<"Attālums no diennakts sākuma sekundēs ir: "<<slaiks<<endl<<"Attālums no diennakts sākuma minūtēs ir: "<<mlaiks<<endl;
    }
}
laiks::~laiks() { //metode destruktors
    cout << "Objekts likvidēts" << endl;
}

/************** Testu plāns **************************
Ievade           Paredzemais rezeultāts
3 14 25            Ir nakts, Attālums no diennakts sākuma sekundēs ir: 11665
                   Attālums no diennakts sākuma minūtēs ir 194
10 17 48           Ir diena/ Attālums no diennakts sākuma sekundēs ir: 37068
                   Attālums no diennakts sākuma minūtēs ir: 617
******************************************************/