#include<iostream>
using namespace std;
class TableLamp
{
  public:
  TableLamp()
  {
    this-> on_off = OFF;
  }
  void pressswitch()
    {
      on_off = ( on_off == ON) ? OFF : ON ;
    }

    friend ostream& operator << (ostream& o , const TableLamp& T );

  private:
  enum state{ON,OFF} on_off;

};

 ostream& operator << (ostream& o ,const TableLamp& T )
    {
      return  ( T.on_off == T.ON)  ? o<<"Table lamp is ON"<<endl : o<<"Table lamp is OFF"<<endl ;
    };