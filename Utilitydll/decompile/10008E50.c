/*
 * func-name: sub_10008E50
 * func-address: 0x10008e50
 * callers: 0x10008d00, 0x1000d580
 * callees: 0x10018cf2, 0x10018e10, 0x10019586
 */

_DWORD *__thiscall sub_10008E50(_DWORD *this, int a2, int a3)
{
  _DWORD *result; // eax
  int v5; // [esp+0h] [ebp-28h] BYREF
  void *v6; // [esp+10h] [ebp-18h]
  int v7; // [esp+14h] [ebp-14h]
  int *v8; // [esp+18h] [ebp-10h]
  int v9; // [esp+24h] [ebp-4h]

  v8 = &v5;
  result = operator new(0x10u);
  v6 = result;
  v9 = 0;
  if ( result )
    *result = a2;
  v7 = 1;
  if ( result != (_DWORD *)-4 )
    result[1] = a3;
  v7 = 2;
  if ( result != (_DWORD *)-8 )
  {
    result[2] = *this;
    result[3] = this[1];
  }
  return result;
}
