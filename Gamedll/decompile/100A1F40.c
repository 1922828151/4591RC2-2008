/*
 * func-name: sub_100A1F40
 * func-address: 0x100a1f40
 * callers: 0x1000e098
 * callees: none
 */

_DWORD *__thiscall sub_100A1F40(_DWORD *this, int a2)
{
  _DWORD *result; // eax
  int v3; // ecx
  _DWORD *v4; // ecx

  result = *(_DWORD **)(a2 + 8);
  *(_DWORD *)(a2 + 8) = *result;
  if ( !*(_BYTE *)(*result + 45) )
    *(_DWORD *)(*result + 4) = a2;
  result[1] = *(_DWORD *)(a2 + 4);
  v3 = this[1];
  if ( a2 == *(_DWORD *)(v3 + 4) )
  {
    *(_DWORD *)(v3 + 4) = result;
    *result = a2;
    *(_DWORD *)(a2 + 4) = result;
  }
  else
  {
    v4 = *(_DWORD **)(a2 + 4);
    if ( a2 == *v4 )
      *v4 = result;
    else
      v4[2] = result;
    *result = a2;
    *(_DWORD *)(a2 + 4) = result;
  }
  return result;
}
