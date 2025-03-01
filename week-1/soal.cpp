#include <iostream>
#include <string>
using namespace std;

class MHS
{
  public:

  string MHSname;

  void printName()
  {
    cout << "MHS name is: " << MHSname << endl;
  }
};


int main()
{
  MHS mhs1;

  mhs1.MHSname = "Malam";

  mhs1.printName();
  return 0;
}

