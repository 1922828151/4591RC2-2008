/*
 * func-name: sub_10012B60
 * func-address: 0x10012b60
 * callers: 0x100129a0, 0x10018c00, 0x100190e0, 0x1001d9c0, 0x10027970
 * callees: 0x1000a1e0, 0x1001df40
 */

_DWORD *__usercall sub_10012B60@<eax>(int *a1@<eax>, int a2@<ecx>)
{
  int v2; // edx
  unsigned int v4; // esi
  bool v5; // cf
  bool v6; // zf
  unsigned int v7; // edi
  _DWORD *v8; // esi
  int v10[2]; // [esp+10h] [ebp-14h] BYREF
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
  v8 = *(_DWORD **)(a2 + 4);
  if ( (unsigned int)v8 > *(_DWORD *)(a2 + 8) )
    invalid_parameter_noinfo();
  return sub_1000A1E0(9u, a2, v10, a2, v8);
}
