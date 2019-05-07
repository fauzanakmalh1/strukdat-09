/*
Nama Program    : exercise-02
Nama            : Fauzan Akmal Hariz
NPM             : 140810180005
Tanggal buat    : 07 Mei 2019
Deskripsi       : Reversing a Word Stack Using Linked List
*********************************************************/

#include <iostream>
#include <string.h>

using namespace std;

const int maxElmt=255;

struct elmtList{
    char isi;
    elmtList* next;
};

typedef elmtList* pointer;
typedef pointer List;

void createStack(List& TOP)
{
    TOP=NULL;
}

void createElmt(pointer& pBaru, char k)
{
    pBaru=new elmtList;
    pBaru->isi=k;
    cout<<pBaru->isi;
    pBaru->next=NULL;
}

void push(List& TOP, pointer pBaru)
{
    if (TOP==NULL)
    {
        TOP=pBaru;
    }
    else
    {
        pBaru->next=TOP;
        TOP=pBaru;
    }
}

void pop(List& TOP, pointer&pHapus)
{
    if (TOP==NULL)
    {
        pHapus=NULL;
        cout<<"Stack kosong, tidak ada yang dihapus" <<endl;
    }
    else if(TOP->next==NULL)
    {
        pHapus=TOP;
        TOP=NULL;
    }
    else
    {
        pHapus=TOP;
        TOP=TOP->next;
        pHapus->next=NULL;
    }
    cout<<pHapus->isi;
}

main()
{
    List TOP;
    pointer s, pHapus;
    char kata[maxElmt], lanjut;

    cout<<"=================================================================" <<endl;
    cout<<"Selamat Datang Di Program Pembalik Kata Stack Dengan List Berkait" <<endl;
    cout<<"=================================================================" <<endl <<endl;

    createStack(TOP);

    do
    {
        cout<<"Masukan kata yang akan dibalik\t: "; cin>>kata; cout<<endl;

        cout<<"Kata sebelum dibalik\t: ";
        for (int i=0; i<strlen(kata); i++)
        {
            createElmt(s, kata[i]);
            push(TOP,s);
        }
        cout<<endl;

        cout<<"Kata sesudah dibalik\t: ";
        for (int i=0; i<strlen(kata); i++)
        {
            pop(TOP,pHapus);
        }
        cout<<endl <<endl;
        cout<<"Anda ingin melanjutkan (Y/N)?\t: "; cin>>lanjut; cout<<endl;
    }while(lanjut=='Y' || lanjut=='y');
}
