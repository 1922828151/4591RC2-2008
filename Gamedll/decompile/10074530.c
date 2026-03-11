/*
 * func-name: sub_10074530
 * func-address: 0x10074530
 * callers: 0x1000ed90
 * callees: 0x1000d0a3, 0x102c9d50
 */

_DWORD *__thiscall sub_10074530(int this, _DWORD *a2, int a3, _DWORD **a4)
{
  _DWORD *v5; // ebp
  _DWORD *result; // eax
  int v7; // [esp+0h] [ebp-18h]
  int v8; // [esp+4h] [ebp-14h]

  if ( !a3 )
    _invalid_parameter_noinfo();
  if ( a4 == *(_DWORD ***)(a3 + 4) )
    _invalid_parameter_noinfo();
  v5 = *a4;
  if ( a4 != *(_DWORD ***)(this + 4) )
  {
    *a4[1] = v5;
    (*a4)[1] = a4[1];
    sub_1000D0A3(v7, v8);
    operator delete(a4);
    --*(_DWORD *)(this + 8);
  }
  result = a2;
  a2[1] = v5;
  *a2 = a3;
  return result;
}
