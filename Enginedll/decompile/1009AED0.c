/*
 * func-name: sub_1009AED0
 * func-address: 0x1009aed0
 * callers: 0x10097910
 * callees: 0x100999b0, 0x10099a20
 */

_DWORD *__thiscall sub_1009AED0(int *this, _DWORD *a2, int a3, int a4)
{
  char *v5; // edi
  char *v6; // esi
  _DWORD *result; // eax

  sub_10099A20(a4 + 104, this[2], a4);
  v5 = (char *)this[2];
  v6 = v5 - 104;
  do
  {
    sub_100999B0(v6);
    v6 += 104;
  }
  while ( v6 != v5 );
  result = a2;
  this[2] -= 104;
  a2[1] = a4;
  *a2 = a3;
  return result;
}
