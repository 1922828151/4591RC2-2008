/*
 * func-name: sub_1024FC80
 * func-address: 0x1024fc80
 * callers: 0x10015b86
 * callees: 0x1001971d, 0x102c9d50
 */

_DWORD *__thiscall sub_1024FC80(int this, _DWORD *a2, int a3, _DWORD **a4)
{
  _DWORD *v6; // eax
  _DWORD *v7; // edi
  _DWORD *result; // eax
  int v10; // [esp+0h] [ebp-18h]
  int v11; // [esp+4h] [ebp-14h]
  _DWORD *v12; // [esp+24h] [ebp+Ch]

  if ( !a3 )
    _invalid_parameter_noinfo();
  if ( a4 == *(_DWORD ***)(a3 + 4) )
    _invalid_parameter_noinfo();
  v6 = *a4;
  v12 = *a4;
  if ( a4 != *(_DWORD ***)(this + 4) )
  {
    *a4[1] = v6;
    (*a4)[1] = a4[1];
    v7 = a4[3];
    if ( v7 )
    {
      if ( v7[9]-- == 1 )
      {
        sub_1001971D(v10, v11);
        operator delete(v7);
      }
    }
    operator delete(a4);
    --*(_DWORD *)(this + 8);
  }
  result = a2;
  *a2 = a3;
  a2[1] = v12;
  return result;
}
