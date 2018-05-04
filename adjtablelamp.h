#include<iostream>
using namespace std;
#include "tablelamp.h"

class AdjTableLamp : public TableLamp
{
  public:
  AdjTableLamp() : TableLamp()
  {
    this -> brig = 1.00;
  }
  void dim()
  {
    if(this -> brig > 0.1)
    {
      this-> brig -= 0.1;
    }
  }
  void print(ostream& o)
  {
    o<< *this <<"With brightness " << this->brig <<endl<<endl;
  }
  private:
  float brig;

};