/*
 * func-name: sub_10101F00
 * func-address: 0x10101f00
 * callers: 0x101381e0
 * callees: 0x1010f500
 */

void __thiscall sub_10101F00(_DWORD *this, int a2)
{
  int v2; // eax
  int v3; // esi
  _DWORD *v4; // ecx
  _DWORD *i; // edi
  _DWORD *v6; // ebx
  int v7; // [esp+10h] [ebp-8h] BYREF
  _DWORD *v8; // [esp+14h] [ebp-4h]

  v2 = *(_DWORD *)(a2 + 360);
  if ( v2 )
    *(_BYTE *)(v2 + 4) = 0;
  v3 = (int)(this + 18);
  v4 = (_DWORD *)this[19];
  v8 = (_DWORD *)*v4;
  for ( i = v8; i != v4 && i[2] != a2; i = (_DWORD *)*i )
    ;
  v6 = *(_DWORD **)(v3 + 4);
  if ( !v3 )
    invalid_parameter_noinfo();
  if ( i != v6 )
    sub_1010F500((int)&v7, v3, i);
}
