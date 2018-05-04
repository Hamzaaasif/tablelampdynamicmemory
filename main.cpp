#include<iostream>
using namespace std;
#include "adjtablelamp.h"
int main()
{
  AdjTableLamp *mylamp=new AdjTableLamp();
  cout<<*mylamp<<endl;
  mylamp->print(cout);
  mylamp->pressswitch();
  mylamp->dim();
  mylamp->print(cout);
  system("pause");
}