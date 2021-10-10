#include<iostream>

void SplashScreen(){
    std::cout<<"RUNNING THE NEW PROGRAM\tPRE_ALPHA_BUILD V 0.0.1"<<std::endl<<std::endl;
}

void name(){
    char name[20];
    std::cout<<std::endl<<"Enter your name: ";
    std::cin>>name;
    std::cout<<std::endl<<"It's good to meet you "<<name;
}

int main(){
SplashScreen();
std::cout<<"Hello World!";
name();
return 0;
}
