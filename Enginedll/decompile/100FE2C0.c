/*
 * func-name: sub_100FE2C0
 * func-address: 0x100fe2c0
 * callers: 0x100fe730, 0x100fe930
 * callees: none
 */

int __thiscall sub_100FE2C0(_DWORD *this, _DWORD *a2)
{
  int result; // eax
  int v3; // esi
  int v4; // ecx
  _DWORD *v5; // ecx

  result = *a2;
  *a2 = *(_DWORD *)(*a2 + 8);
  v3 = *(_DWORD *)(result + 8);
  if ( !*(_BYTE *)(v3 + 17) )
    *(_DWORD *)(v3 + 4) = a2;
  *(_DWORD *)(result + 4) = a2[1];
  v4 = this[1];
  if ( a2 == *(_DWORD **)(v4 + 4) )
  {
    *(_DWORD *)(v4 + 4) = result;
    *(_DWORD *)(result + 8) = a2;
    a2[1] = result;
  }
  else
  {
    v5 = (_DWORD *)a2[1];
    if ( a2 == (_DWORD *)v5[2] )
      v5[2] = result;
    else
      *v5 = result;
    *(_DWORD *)(result + 8) = a2;
    a2[1] = result;
  }
  return result;
}
