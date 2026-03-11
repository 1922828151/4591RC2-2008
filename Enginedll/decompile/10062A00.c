/*
 * func-name: sub_10062A00
 * func-address: 0x10062a00
 * callers: 0x10060ac0
 * callees: 0x1005b1f0, 0x10061620
 */

int __thiscall sub_10062A00(int this, int *a2)
{
  int result; // eax
  unsigned int v4; // eax
  int v5; // edi
  unsigned int v6; // ecx
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // edi
  int v10; // ecx
  int v11; // ebp

  result = sub_10061620(this, (int)a2);
  if ( result == -1 )
  {
    v4 = (*(int (__cdecl **)(int *))(this + 20))(a2);
    v5 = *(_DWORD *)(this + 4);
    if ( v5 )
      v6 = (*(_DWORD *)(this + 8) - v5) >> 4;
    else
      v6 = 0;
    if ( *(_BYTE *)(this + 24) )
      v7 = v4 & *(_DWORD *)(this + 28);
    else
      v7 = v4 % v6;
    if ( !v5 || v7 >= (*(_DWORD *)(this + 8) - v5) >> 4 )
      invalid_parameter_noinfo();
    v8 = *(_DWORD *)(this + 4);
    v9 = 16 * v7;
    v10 = *(_DWORD *)(16 * v7 + v8 + 4);
    if ( v10 )
      v11 = (*(_DWORD *)(v9 + v8 + 8) - v10) >> 2;
    else
      v11 = 0;
    if ( !v8 || v7 >= (*(_DWORD *)(this + 8) - v8) >> 4 )
      invalid_parameter_noinfo();
    sub_1005B1F0((_DWORD *)(v9 + *(_DWORD *)(this + 4)), a2);
    return v11 | (v7 << 16);
  }
  return result;
}
