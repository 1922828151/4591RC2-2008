/*
 * func-name: sub_10009C50
 * func-address: 0x10009c50
 * callers: 0x1000c930, 0x10058270, 0x1006dd10, 0x1009a150, 0x100d8e80, 0x10131d30, 0x1016cca0, 0x1016cfe0
 * callees: none
 */

int __thiscall sub_10009C50(_DWORD *this, _DWORD *a2)
{
  int result; // eax
  int v3; // esi
  int v4; // ecx
  _DWORD *v5; // ecx

  result = *a2;
  *a2 = *(_DWORD *)(*a2 + 8);
  v3 = *(_DWORD *)(result + 8);
  if ( !*(_BYTE *)(v3 + 45) )
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
