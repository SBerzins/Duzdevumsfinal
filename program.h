#pragma once
class laiks {
private: //Slēpti dati
    int stunda;
    int minute;
    int sekunde;
public: //Atklātas metodes
    laiks(int a, int b, int c);
    void mainit(int a, int b, int c);
    void drukat();
    void aprekinat();
    ~laiks();
};