
#include <iostream>
using namespace std;
int main(){
    int pf,calculus,ict;
    string name;
    
    cout<<"enter your name ";
    cin>>name;

    cout<<"enter your pf marks ";
    cin>> pf;

    cout<<"enter your calculus marks ";
    cin>> calculus;
    
    cout <<"enter your ict marks ";
    cin>> ict;
    
    int total= 300;

    int sum= pf+calculus+ict;
    cout<<"ontained marks"<< sum <<endl;

double average= sum/3;
cout<<"yur average marks are"<<average<<endl;

cout<<"name: "<< name <<endl;
cout<<"total: "<< sum<<endl;
cout<<"average: "<< average<<endl;

if(average >= 80){
    cout<<"you have obtained A1 grade"<<endl;
}else if(average >= 70){
    cout<<"you have obtained A grade"<<endl;
}else if(average >= 60){
    cout<<"you have b garde"<<endl;
}else{cout<<"d garde";}
if(sum > 150){
    cout<<"pass"<<endl;
}if(average>= 80){
    cout<<"excellent student";
}


return 0;
}