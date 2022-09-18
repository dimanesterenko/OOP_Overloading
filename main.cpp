#include <iostream>
#include "methods.h"
#include "methods.cpp"
using namespace std;
//Поле first – цілочисельна дійсна частина, поле second – цілочисельна уявна
//частина числа. Реалізувати метод sqr() для зведення цього числа в квадрат.
int main() {
cout<<"-------------Content-------------\n";
cout<<"1.Task 1.\n"<<"2.Task 2.\n"<<"3.Exit.\n";
int click;
cout<<"Enter the number of tasks: ";
cin>>click;
    switch (click) {
        case 1:{
            Number A;
            Number B(3,4);
            cout<<"Content of object A: ";
            A.print();
            cout<<"Content of object B: ";
            B.print();
            Number C;
            C=B.sqr();
            cout<<"Content of object C: ";
            C.print();
            Number Arr[3];
            for (int i = 0; i < 3; ++i) {
                Arr[i].input();
                cout<<"Arr["<<i<<"] - ";
                Arr[i].print();
            }
            break;}
        case 2:{
            Number Q,S(3,4);
            Number D,K,F;
            D = Q+S;
            cout<<"Object+object\nObject D: \n";
            D.print();
            K = Q+3;
            cout<<"Object+number\nObject K: \n";
            K.print();
            F = 3+S;
            cout<<"Number+object\nObject F: \n";
            F.print();
            ++Q;
            cout<<"Increment results\nPrefix form:\n";
            Q.print();
            D=S++;
            cout<<"Suffix form\n";
            D.print();
            S.print();
            break;
        }
        case 3:{
            exit(1);}
        default:{
            cout<<("\nInvalid choice\n");
            break;}
    }

return 0;
}