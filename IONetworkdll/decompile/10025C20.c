/*
 * func-name: sub_10025C20
 * func-address: 0x10025c20
 * callers: 0x100259b0, 0x10034e50
 * callees: 0x1004e870, 0x1004e98e, 0x1004f112
 */

_DWORD *__thiscall sub_10025C20(_DWORD *this, int a2, int a3)
{
  _DWORD *result; // eax
  _DWORD v5[5]; // [esp+0h] [ebp-28h] BYREF
  int v6; // [esp+14h] [ebp-14h]
  _DWORD *v7; // [esp+18h] [ebp-10h]
  int v8; // [esp+24h] [ebp-4h]

  v7 = v5;
  result = (_DWORD *)operator new(16);
  v5[4] = result;
  v8 = 0;
  if ( result )
    *result = a2;
  v6 = 1;
  if ( result != (_DWORD *)-4 )
    result[1] = a3;
  v6 = 2;
  if ( result != (_DWORD *)-8 )
  {
    result[2] = *this;
    result[3] = this[1];
  }
  return result;
}
