/*
 * func-name: sub_10020830
 * func-address: 0x10020830
 * callers: 0x10020830, 0x10023c80, 0x10026e50, 0x10138880, 0x10139890
 * callees: 0x10020830, 0x101a2500
 */

void __stdcall sub_10020830(void **a1)
{
  void **v1; // edi
  void **i; // esi

  v1 = a1;
  for ( i = a1; !*((_BYTE *)i + 49); v1 = i )
  {
    sub_10020830(i[2]);
    i = (void **)*i;
    std::string::~string(v1 + 3);
    operator delete(v1);
  }
}
