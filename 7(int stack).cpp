#include <iostream>
#ifndef STACK_H
#include <stdio.h>
#define STACK_H
#endif // STACK_H
using namespace std;
class int_stack{
private:
    int mass[N]; // ���������� ������
    int* first;
    int* top;
public:
    int_stack();
    int get_first();
    void set_first(int a);
    int get_i(int i);
    void push(int a);
    void pop(int a);
    int get_max(int i);
 };
 int_stack(const int_stack& s)
 {
     this->N=s.size;
     this->mass=new [s.size];
     this->top=mass;
     int *p=s.mass;
     while(p<s.top)
        *top++=*p++;
 }
 int_stack::int_stack()
 {
     this->set_first(-1);// ������� �������� ���� �� ���������� (��� ����� - -1)
 }
 int int_stack::set_first(int a)
 {
     this->first=a;
 }
int int_stack::get_first()
 {
     return this->first;
 }
 int int_stack::get_max(int i)
{
      if (this->get_first()==-1) //���� �����  ������� �������� -1 �� �� ����������� ���� ������
        return -1;
     this->get_first(this->set_first()-1); //��������� ����� ������� ��������
     return this->mass[i]; //����������� ������� ��������
}
 int get_i(int i)
 {
     if (i>this->get_first())
         return -1;
     else return this->mass[i];
 }
 int int_stack::push(int a)
 {
     if (this->get_first()>N-1)
        return -1; //���� ����� �������� - N-1 �� ���� ����������
     this->set_first(this->get_first()+1); //�������� ���������� ��������� �� 1
     this->mass[this->get_first()]=a;
     return 1; //���� ���������� 1 �� �� ����������
 }
 int int_stack::pop(int a)
 {
     if (this->get_first()==-1) //���� �����  ������� �������� -1 �� �� ����������� ���� ������
        return -1;
     this->get_first(this->set_first()-1); //��������� ����� ������� ��������
     return this->mass[this->get_first()+1]; //����������� ������� ��������
 }
