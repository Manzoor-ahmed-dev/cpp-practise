#include <iostream>
using namespace std;
int main(){
    int secret=7;
    int guess;
   

    do{
         cout<<"enter your number : ";
    cin>>guess;
        if(guess>secret){
            cout<<"you are close but your number is greater"<<endl;
        }else if(guess<secret){
            cout<<"you are close but your number is lower"<<endl;
        }else{
            cout<<"right answer"<<endl<<"congratuolations"<<endl;
        }
    }while(guess!=7);
}