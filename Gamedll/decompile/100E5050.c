/*
 * func-name: sub_100E5050
 * func-address: 0x100e5050
 * callers: 0x100117b1
 * callees: 0x100117b1, 0x102c9d50
 */

void __stdcall sub_100E5050(void **a1)
{
  void **v1; // edi
  void **i; // ebx
  char *v3; // esi
  char *j; // ebp

  v1 = a1;
  for ( i = a1; !*((_BYTE *)i + 33); v1 = i )
  {
    sub_100117B1(i[2]);
    v3 = (char *)v1[5];
    i = (void **)*i;
    if ( v3 )
    {
      for ( j = (char *)v1[6]; v3 != j; v3 += 92 )
      {
        std::string::~string(v3 + 64);
        std::string::~string(v3 + 36);
        std::string::~string(v3 + 8);
      }
      operator delete(v1[5]);
    }
    v1[5] = 0;
    v1[6] = 0;
    v1[7] = 0;
    operator delete(v1);
  }
}
