/*
 * func-name: sub_1006DFE0
 * func-address: 0x1006dfe0
 * callers: 0x1006dfe0, 0x1006f0c0, 0x1006f820
 * callees: 0x1006dfe0, 0x101a2500
 */

void __stdcall sub_1006DFE0(void **a1)
{
  void **v1; // edi
  void **i; // esi

  v1 = a1;
  for ( i = a1; !*((_BYTE *)i + 81); v1 = i )
  {
    sub_1006DFE0(i[2]);
    i = (void **)*i;
    std::string::~string(v1 + 13);
    std::string::~string(v1 + 3);
    operator delete(v1);
  }
}
