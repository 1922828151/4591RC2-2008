/*
 * func-name: sub_10019440
 * func-address: 0x10019440
 * callers: 0x10019350
 * callees: 0x1001df40, 0x10022e00
 */

int __usercall sub_10019440@<eax>(_DWORD *a1@<eax>, int a2@<ecx>)
{
  int v2; // edx
  unsigned int v4; // esi
  bool v5; // cf
  bool v6; // zf
  unsigned int v7; // edi
  unsigned int v8; // esi
  _DWORD v10[2]; // [esp+10h] [ebp-14h] BYREF
  _BYTE v11[12]; // [esp+18h] [ebp-Ch] BYREF

  v2 = a1[1];
  v4 = *(_DWORD *)(a2 + 8);
  v5 = *(_DWORD *)(a2 + 4) < v4;
  v6 = *(_DWORD *)(a2 + 4) == v4;
  v10[0] = *a1;
  v10[1] = v2;
  if ( !v5 && !v6 )
    invalid_parameter_noinfo();
  v7 = *(_DWORD *)(a2 + 4);
  if ( v7 > *(_DWORD *)(a2 + 8) )
    invalid_parameter_noinfo();
  sub_1001DF40(v11, a2, v7, a2, v4);
  v8 = *(_DWORD *)(a2 + 4);
  if ( v8 > *(_DWORD *)(a2 + 8) )
    invalid_parameter_noinfo();
  return sub_10022E00(v10, a2, v8);
}
