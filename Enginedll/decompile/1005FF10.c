/*
 * func-name: sub_1005FF10
 * func-address: 0x1005ff10
 * callers: 0x10060010
 * callees: 0x10061750, 0x100617f0, 0x10061bf0, 0x10061c70
 */

int __thiscall sub_1005FF10(_DWORD *this, unsigned int a2, unsigned __int16 a3)
{
  _DWORD *v4; // ebx
  unsigned __int16 v5; // ax
  int v6; // ecx
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  _DWORD *v10; // ebx
  int v11; // ecx
  int v12; // edi
  __int16 v13; // ax
  int result; // eax
  unsigned __int16 v15; // [esp+10h] [ebp-4h]
  __int16 v16; // [esp+1Ch] [ebp+8h]

  v4 = this + 13;
  v5 = sub_10061750(1);
  v6 = this[3];
  v7 = v5;
  v15 = v5;
  if ( !v6 || a2 >= (this[4] - v6) >> 1 )
    invalid_parameter_noinfo();
  v8 = this[3];
  if ( *(_WORD *)(v8 + 2 * a2) != 0xFFFF )
  {
    if ( !v8 || a2 >= (this[4] - v8) >> 1 )
      invalid_parameter_noinfo();
    sub_10061BF0(*(_WORD *)(this[3] + 2 * a2), v7);
  }
  v9 = this[3];
  if ( !v9 || a2 >= (this[4] - v9) >> 1 )
    invalid_parameter_noinfo();
  *(_WORD *)(this[3] + 2 * a2) = v7;
  *(_WORD *)(*v4 + 6 * (unsigned __int16)v7) = a3;
  v10 = this + 20;
  v11 = (unsigned __int16)sub_100617F0(1);
  v12 = 12 * a3;
  v13 = *(_WORD *)(this[6] + v12 + 4);
  v16 = v11;
  if ( v13 != -1 )
  {
    sub_10061C70(v13, v11);
    LOWORD(v11) = v16;
  }
  *(_WORD *)(this[6] + v12 + 4) = v11;
  result = 12 * (unsigned __int16)v11;
  *(_DWORD *)(result + *v10) = a2;
  *(_WORD *)(result + *v10 + 4) = v15;
  return result;
}
