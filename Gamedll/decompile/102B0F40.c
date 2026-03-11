/*
 * func-name: sub_102B0F40
 * func-address: 0x102b0f40
 * callers: 0x100035c6
 * callees: 0x10017de6
 */

int __thiscall sub_102B0F40(int this)
{
  unsigned int v2; // edi
  _DWORD *v3; // ebx
  int v4; // ecx
  int result; // eax
  int v6; // [esp+10h] [ebp-4h]

  v2 = *(_DWORD *)(this + 8);
  if ( *(_DWORD *)(this + 4) > v2 )
    _invalid_parameter_noinfo();
  v3 = *(_DWORD **)(this + 4);
  if ( (unsigned int)v3 > *(_DWORD *)(this + 8) )
    _invalid_parameter_noinfo();
  LOBYTE(v6) = *(_BYTE *)(this + 16);
  if ( (int)((v2 - (_DWORD)v3) & 0xFFFFFFFC) > 4 )
  {
    v4 = *(_DWORD *)(v2 - 4);
    *(_DWORD *)(v2 - 4) = *v3;
    sub_10017DE6((int)v3, 0, (int)(v2 - (_DWORD)v3 - 4) >> 2, v4, v6);
  }
  result = *(_DWORD *)(this + 4);
  if ( result )
  {
    if ( (*(_DWORD *)(this + 8) - result) >> 2 )
      *(_DWORD *)(this + 8) -= 4;
  }
  return result;
}
