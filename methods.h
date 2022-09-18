//
// Created by Admin on 09.09.2022.
//
#ifndef LAB1_METHODS_H
#define LAB1_METHODS_H
struct Number{
    int first;
    int second;
Number();;
Number(int first, int second);
int getFirst();
int getSecond();
void setFirst(int one);
void setSecond(int two);
Number sqr();
void print();
void input();
Number & operator + (int num);
Number operator+(const Number &other) ;
friend Number operator +( int num,Number one);
Number & operator ++ ();
Number operator ++(int value);
};
#endif //LAB1_METHODS_H
