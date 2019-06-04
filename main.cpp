#include <iostream>
#include "Don_hang.h"
#include "BanhCuon.h"
#include "BC_mong.h"
#include "BC_chay.h"
#include "BC_thit_lon.h"
#include "BC_db.h"
using namespace std;
int main()
{
    /*BanhCuon *a;
    BanhCuon *b;
    BanhCuon *c;
    BanhCuon *d;*/
    BC_chay A(100, 10000, 100, 15000);
    BC_mong B(100, 10000, 100, 10000);
    BC_thit_lon C(100, 10000, 100, 20000);
    BC_db D(100, 10000, 100, 20000, 100, 30000);
    /*a=&A;
    b=&B;
    c=&C;
    d=&D;*/

    Don_hang  don_hang(A,B,C,D);
    don_hang.Print();
}