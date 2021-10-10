#include<iostream>

void name(){
    char name[20];
    std::cout<<std::endl<<"Enter your name: ";
    std::cin>>name;
    std::cout<<std::endl<<"It's good to meet you "<<name;
}

int main(){
std::cout<<"Hello World!";
name();
return 0;
}
