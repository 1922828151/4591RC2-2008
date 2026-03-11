/*
 * func-name: sub_1000B6E0
 * func-address: 0x1000b6e0
 * callers: 0x1000b3b0, 0x10027b80
 * callees: 0x100294f2, 0x100295c0, 0x10029d92
 */

_DWORD *__thiscall sub_1000B6E0(_DWORD *this, int a2, int a3)
{
  _DWORD *result; // eax
  int v5; // [esp+0h] [ebp-28h] BYREF
  void *v6; // [esp+10h] [ebp-18h]
  int v7; // [esp+14h] [ebp-14h]
  int *v8; // [esp+18h] [ebp-10h]
  int v9; // [esp+24h] [ebp-4h]

  v8 = &v5;
  result = operator new(0x14u);
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
    result[4] = this[2];
  }
  return result;
}
