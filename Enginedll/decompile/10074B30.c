/*
 * func-name: sub_10074B30
 * func-address: 0x10074b30
 * callers: 0x10075a20
 * callees: 0x10070eb0, 0x1013efb0, 0x101a2522
 */

_DWORD *__thiscall sub_10074B30(_DWORD *this, int a2)
{
  unsigned int v4; // edi
  unsigned int v5; // ecx
  unsigned int v6; // eax
  unsigned int v7; // esi
  _DWORD *v9; // [esp-14h] [ebp-38h]
  _DWORD *v10; // [esp-10h] [ebp-34h]
  int v11; // [esp-Ch] [ebp-30h] BYREF
  int v12; // [esp-8h] [ebp-2Ch]
  unsigned int v13; // [esp-4h] [ebp-28h]
  _DWORD v14[9]; // [esp+0h] [ebp-24h] BYREF
  unsigned int v15; // [esp+2Ch] [ebp+8h]

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  this[4] = 0;
  v4 = *(_DWORD *)(a2 + 16) + *(_DWORD *)(a2 + 12);
  v14[5] = v14;
  v14[8] = 0;
  v11 = 0;
  v5 = *(_DWORD *)(a2 + 12);
  v14[3] = this;
  v14[4] = &v11;
  if ( v5 > v4 || v4 > v5 + *(_DWORD *)(a2 + 16) )
    invalid_parameter_noinfo();
  v13 = v4;
  v12 = a2;
  v6 = *(_DWORD *)(a2 + 12);
  v15 = v6;
  if ( v6 > v6 + *(_DWORD *)(a2 + 16) )
  {
    invalid_parameter_noinfo();
    v6 = v15;
  }
  v9 = (_DWORD *)a2;
  v10 = (_DWORD *)v6;
  v7 = this[3];
  if ( v7 > v7 + this[4] )
    invalid_parameter_noinfo();
  sub_10070EB0(this, 0, this, v7, 0, v9, v10, v11, v12, v13);
  return this;
}
