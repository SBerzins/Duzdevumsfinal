#include <iostream>
#include "program.h"
using namespace std;

int main() { //Funkciju izsaukšana
    laiks abc(3, 14, 25);
    abc.drukat();
    abc.aprekinat();
    abc.mainit(10, 17, 48);
    abc.drukat();
    abc.aprekinat();
}
