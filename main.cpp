#include<iostream>
#include<cmath>
using namespace std;

int ModuloTwo(int a, int b){
    return a%b;
}

int MultTwo(int a, int b){
    return a*b;
}

int AddTwo(int a, int b){
    return a+b;
}

int SubTwo(int a, int b){
    return a-b;
}

void lol(){
    cout<<endl<<"LOL";
}

void SplashScreen(){
    cout<<"RUNNING THE ULTRA NEW NEW PROGRAM\tPRE_ALPHA_BUILD V 0.0.1"<<endl<<endl;
}

void name(){
    char name[20];
    cout<<endl<<"Enter your name: ";
    cin>>name;
    cout<<endl<<"It's good to meet you "<<name;
}

int main(){
SplashScreen();
cout<<"Hello World!";
name();
int num[2];
cout<<endl<<"Enter one number: ";
cin>>num[0];
cout<<endl<<"Enter second number: ";
cin>>num[1];
cout<<endl<<"The sum of these numbers is: "<<AddTwo(num[0],num[1]);
cout<<endl<<"The diff of these two numbers is: "<<SubTwo(num[0], num[1]);
cout<<endl<<"The product of these two numbers is: "<<MultTwo(num[0],num[1]);
cout<<endl<<"The remainder of the division of these two numbers is: "<<ModuloTwo(num[0], num[1])<<endl;
cout<<"square root of first number : "<<sqrt(num[0])<<endl;
cout<<"square root of second number : "<<sqrt(num[1])<<endl;   
cout<<endl;
lol();
return 0;
}

/*Just testing this shit. WTF do I even do? Am I messing up your code Dhroooooobb*/
