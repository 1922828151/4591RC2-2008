/*
 * func-name: sub_100D1C70
 * func-address: 0x100d1c70
 * callers: 0x100c53c0
 * callees: 0x1006d580
 */

_DWORD *__thiscall sub_100D1C70(char **this, _DWORD *a2, int a3, int a4)
{
  char *v5; // edi
  char *v6; // esi
  _DWORD *result; // eax

  sub_1006D580((char *)(a4 + 40), this[2], (_DWORD *)a4);
  v5 = this[2];
  v6 = v5 - 40;
  do
  {
    std::wstring::~wstring(v6 + 12);
    v6 += 40;
  }
  while ( v6 != v5 );
  result = a2;
  this[2] -= 40;
  a2[1] = a4;
  *a2 = a3;
  return result;
}
