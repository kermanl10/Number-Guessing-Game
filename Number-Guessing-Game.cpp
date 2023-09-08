#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main() {
    	system("CLS");
    srand(time(nullptr));
   cout<<"               TAHMIN OYUNUNA HOSGELDINIZ"<<endl;
    cout<<"Bir Sayi Tuttum 5 Hakkiniz Var Ben Size Yardimci Olucam"<<endl;
    int ary[1],number,YouTah = 0,hak=5;
     cout<<"          SAYI TUTTUMMM"<<endl;
    for(int i=0; i<1; i++){
    ary[i]=rand()%49+1;
    number=ary[i];
    }

    while(1){
    cout<<"Tahmininiz:";
    cin>>YouTah;
    if(YouTah==number){
        cout<<"Tebrikler KAZANDINIZZZZZ TUTTUGUM SAYI "<<number<<" DI"<<endl;
        break;
    }
if(YouTah<number){
        cout<<"                              Daha Buyuk Bi Sayi Tuttum"<<endl;
        hak--;
         cout<<"                                 Kalan Hakkiniz: "<<hak<<endl;    
    }
if(YouTah>number){
        cout<<"                              Daha Kucuk Bi Sayi Tuttum"<<endl;
     hak--;
     cout<<"                                 Kalan Hakkiniz: "<<hak<<endl;    
    }

    
    if(hak==0){
        cout<<"      Malesef Kaybettiniz Tuttugum Sayi: "<<number;
    break;
    }
    }
}
