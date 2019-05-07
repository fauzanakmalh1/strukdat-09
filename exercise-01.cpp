/*
Nama Program    : exercise-01
Nama            : Fauzan Akmal Hariz
NPM             : 140810180005
Tanggal buat    : 07 Mei 2019
Deskripsi       : Reversing a Word Stack Using Array
*/

#include<iostream>
#include<string.h>

using namespace std;

const int maxElemen=255;

struct Stack{
    int isi[maxElemen];
    int TOP;
};
Stack S;

void createStack(Stack& S)
{
    S.TOP=-1;
}

void push(Stack& S, char x)
{
    if(S.TOP==maxElemen-1)
    {
        cout<<"Tumpukan sudah penuh" <<endl;
    }
    else
    {
        S.TOP=S.TOP+1;
        S.isi[S.TOP]=x;
    }
}

char pop(Stack& S)
{
    char hasil;
    if(S.TOP<0)
    {
        cout<<"Tumpukan sudah kosong" <<endl;
    }
    else
    {
        hasil=S.isi[S.TOP];
        S.TOP=S.TOP-1;
    }
    return hasil;
}

int empty(Stack S)
{
    if(S.TOP==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int full(Stack S)
{
    if(S.TOP==maxElemen-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int length(const char* x)
{
    int panjang=strlen(x);
    return panjang;
}

int main()
{
    char kata[maxElemen];

    cout<<"==========================================================" <<endl;
    cout<<"Selamat Datang Di Program Pembalik Kata Stack Dengan Array" <<endl;
    cout<<"==========================================================" <<endl <<endl;

    createStack(S);

    cout<<"Masukan kata yang akan dibalik\t: "; cin>>kata; cout<<endl;

    cout<<"Kata sebelum dibalik\t: " <<kata <<endl;
    cout<<"Kata Setelah dibalik\t: ";
    for(int i=0;i<length(kata);i++)
    {
        push(S,kata[i]);
    }
    for(int i=0;i<length(kata);i++)
    {
        cout<<pop(S);
    }
    cout<<endl;
}
