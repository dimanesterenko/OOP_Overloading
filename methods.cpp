#include "methods.h"
#include <iostream>
using namespace std;
//
// Created by Admin on 09.09.2022.
//
Number::Number() {
    first = 1;
    second = 1;
}

Number::Number(int one, int two) {
first =one;
second = two;
if(second==0)
    cout<<"Об'єкт - ціле число!";
}
int Number::getFirst() {
    return first;
}
int Number::getSecond() {
    return second ;
}

void Number::setFirst(int one) {
    first=one;
}

void Number::setSecond(int two) {
    if(two!=0){second = two;}
    else {cout<<"Invalid value of number! It cannot be equal to 0!";}
}

Number Number::sqr() {
    int Real = first*first - second*second;
    int Imag = first*second + first*second;
    return Number(Real,Imag);
}

void Number::print() {
    cout<<"Complex number: "<<first<<" + "<<second<<"i"<<endl;
}

void Number::input() {
    cout<<"Input first:\n";
    cin>>first;
    cout<<"Input second:\n";
    cin>>second;
    if(second=0){cout<<"Invalid value of number! It cannot be equal to 0!";}
}


Number &Number::operator + (int num) {
    this->first= this->first+num;
    return *this;
}

//object+object
Number Number::operator+(const Number & other) {
    Number temp;
    temp.first = this->first + other.first;
    temp.second = this->second + other.second;
    return temp;
}
//prefix
Number &Number::operator++() {
    this->first+=1;
    this->second+=1;
    return *this;
}

//postfix
Number Number::operator++(int value) {
    Number temp =*this;
    first++;
    second++;
    return temp ;
}
//number+object
Number operator+(int num, Number one) {
    Number temp;
    temp.first = num + one.first;
    temp.second = one.second;
    return temp;
}

