#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main() {
    	system("CLS");
    srand(time(nullptr));
   cout<<"               WELCOME TO THE GUESSING GAME"<<endl;
    cout<<"I will choose a number, and you will have 5 chances. Your chances will decrease by 1 each time you can't guess, but don't worry, I will help you"<<endl;
    int ary[1],number,YouTah = 0,hak=5;
     cout<<"          I've chosen a number, let the game begin"<<endl;
    for(int i=0; i<1; i++){
    ary[i]=rand()%49+1;
    number=ary[i];
    }

    while(1){
    cout<<"Tahmininiz:";
    cin>>YouTah;
    if(YouTah==number){
        cout<<"Congratulations, you won, you guessed the number I had in mind correctly. "<<endl;
        break;
    }
if(YouTah<number){
        cout<<"                              I've chosen a number greater than your guess"<<endl;
        hak--;
         cout<<"                                 Remaining chances: "<<hak<<endl;    
    }
if(YouTah>number){
        cout<<"                              The number I've chosen is smaller than your guess"<<endl;
     hak--;
     cout<<"                                 Remaining chances: "<<hak<<endl;    
    }

    
    if(hak==0){
        cout<<"      Unfortunately, you lost, the number I had in mind: "<<number;
    break;
    }
    }
}
