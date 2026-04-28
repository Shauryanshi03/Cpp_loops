#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter the amount"<<endl;
    cin>>n;

    int note;
    cout<<"enter the note"<<endl;
    cin>>note;


    switch(note){
        
        case 100 :cout<<(n/note)<<endl;
        break;

        case 50 :cout<<(n/note)<<endl;
        break;

        case 20 :cout<<(n/note)<<endl;
        break;

        case 1 :cout<<(n/note)<<endl;
        break;

        default :cout<<"default case"<<endl;
        break;



    }
}