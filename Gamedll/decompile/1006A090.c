/*
 * func-name: sub_1006A090
 * func-address: 0x1006a090
 * callers: 0x1000bf7d
 * callees: none
 */

int __thiscall sub_1006A090(_DWORD *this, _DWORD *a2)
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
