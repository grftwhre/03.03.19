#include <iostream>
#ifndef STACK_H
#include <stdio.h>
#define STACK_H
#endif // STACK_H
using namespace std;
int nod (int a,int b)
{
 while (a!=0 && b!=0)
 {
    if (a==b)
           return 1;
    else if (a>b)
            a=a%b;
    else
            b=b%a;
  }
return a+b;
}
struct rational
{
 int m;
 unsigned int n;
 rational (int m, unsigned n);
 void show();
};
 rational (int a, int b)
 {
     m=a/(nod(a,b));
     n=b/(nod(a,b));
 }
 rational[const rational &A]
 {
 m=A.m;
 n=A.n;
 }
class double_stack{
private:
    int mass[N]; // переменный размер
    rational first_a;
public:
    double_stack();
    int get_first();
    void set_first(int a);
    int get_i(int i);
    void push(int a);
    void pop(int a);
 };
 double_stack::double_stack()
 {
     this->set_first(-1);// первого элемента типа не существует (его номер - -1)
 }
 int double_stack::set_first(int a)
 {
     this->first=a;
 }
int double_stack::get_first()
 {
     return this->first;
 }
 int get_i(int i)
 {
     if (i>this->get_first())
         return -1;
     else return this->mass[i];
 }
 int double_stack::push(int a)
 {
     if (this->get_first()>N-1)
        return -1; //если номер элемента - N-1 то стек переполнен
     this->set_first(this->get_first()+1); //повысили количество элементов на 1
     this->mass[this->get_first()]=a;
     return 1; //если возвращена 1 то мы справились
 }
 int double_stack::pop(int a)
 {
     if (this->get_first()==-1) //если номер  первого элемента -1 то по определению стек пустой
        return -1;
     this->get_first(this->set_first()-1); //уменьшаем номер первого элемента
     return this->mass[this->get_first()+1]; //возвращение первого элемента
 }
