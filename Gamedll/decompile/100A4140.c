/*
 * func-name: sub_100A4140
 * func-address: 0x100a4140
 * callers: 0x10010136
 * callees: 0x10010136, 0x102c9d50
 */

void __stdcall sub_100A4140(void **a1)
{
  void **v1; // edi
  void **i; // esi

  v1 = a1;
  for ( i = a1; !*((_BYTE *)i + 45); v1 = i )
  {
    sub_10010136(i[2]);
    i = (void **)*i;
    std::string::~string(v1 + 3);
    operator delete(v1);
  }
}
