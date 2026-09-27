#include <iostream>
using namespace std;
int main(){
    cout<<"Eligibility criteria:"<<endl<<"marks in maths >= 65"<<endl<<"and marks in physics >= 55"<<endl<<"and mark in chemistry >= 50"<<endl<<"and total marks in all three subjects >= 190"<<endl<<"or total in maths and physics >= 140"<<endl;
    int physics,chemistry,maths;
    cout<<"enter the marks in math";
    cin >> maths;

    cout<<"enter the marks in chemistry";
    cin >> chemistry;

    cout<<"enter the marks in physics";
    cin>> physics;

    int sum = maths + chemistry + physics;
    cout<<"total marks of math physics and chemistry:" <<sum<<endl;
    
    int sun= maths + physics;
    cout<<"total marks of maths and physics:"<<sun<<endl;

    if(sum >= 190){
        cout<<"you are eligible";
    }if(sun >= 140){
    cout<<"you are eligible";}else{
        cout<<"you are not eligible";
    }

    return 0;
}