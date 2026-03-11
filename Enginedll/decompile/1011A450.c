/*
 * func-name: sub_1011A450
 * func-address: 0x1011a450
 * callers: 0x101197c0
 * callees: 0x10119fe0
 */

_DWORD *__thiscall sub_1011A450(char **this, _DWORD *a2, int a3, int a4)
{
  char *v5; // edi
  char *v6; // esi
  _DWORD *result; // eax

  sub_10119FE0((char *)(a4 + 40), this[2], (_DWORD *)a4);
  v5 = this[2];
  v6 = v5 - 40;
  do
  {
    std::string::~string(v6 + 12);
    v6 += 40;
  }
  while ( v6 != v5 );
  result = a2;
  this[2] -= 40;
  a2[1] = a4;
  *a2 = a3;
  return result;
}
