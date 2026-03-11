/*
 * func-name: sub_1016CAF0
 * func-address: 0x1016caf0
 * callers: 0x1000c930, 0x10058270, 0x1006dd10, 0x1009a150, 0x100d8e80, 0x10131d30, 0x1016cca0, 0x1016cfe0
 * callees: none
 */

_DWORD *__thiscall sub_1016CAF0(_DWORD *this, int a2)
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
