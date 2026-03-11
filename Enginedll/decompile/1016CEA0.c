/*
 * func-name: sub_1016CEA0
 * func-address: 0x1016cea0
 * callers: 0x1016cea0, 0x1016d580
 * callees: 0x1016cea0, 0x101a2500
 */

void __stdcall sub_1016CEA0(void **a1)
{
  void **v1; // edi
  void **i; // esi

  v1 = a1;
  for ( i = a1; !*((_BYTE *)i + 45); v1 = i )
  {
    sub_1016CEA0(i[2]);
    i = (void **)*i;
    std::wstring::~wstring(v1 + 3);
    operator delete(v1);
  }
}
