/*
 * func-name: sub_10009290
 * func-address: 0x10009290
 * callers: 0x10007760, 0x10007c20, 0x100089e0, 0x1000d950
 * callees: 0x10008500, 0x100088f0
 */

_DWORD *__usercall sub_10009290@<eax>(int *a1@<eax>, int a2@<ecx>)
{
  int v2; // edx
  char *v4; // esi
  bool v5; // cf
  bool v6; // zf
  char *v7; // edi
  _DWORD *v8; // esi
  int v10[2]; // [esp+10h] [ebp-14h] BYREF
  _DWORD v11[3]; // [esp+18h] [ebp-Ch] BYREF

  v2 = a1[1];
  v4 = *(char **)(a2 + 8);
  v5 = *(_DWORD *)(a2 + 4) < (unsigned int)v4;
  v6 = *(_DWORD *)(a2 + 4) == (_DWORD)v4;
  v10[0] = *a1;
  v10[1] = v2;
  if ( !v5 && !v6 )
    invalid_parameter_noinfo();
  v7 = *(char **)(a2 + 4);
  if ( (unsigned int)v7 > *(_DWORD *)(a2 + 8) )
    invalid_parameter_noinfo();
  sub_100088F0(a2, v11, a2, v7, a2, v4);
  v8 = *(_DWORD **)(a2 + 4);
  if ( (unsigned int)v8 > *(_DWORD *)(a2 + 8) )
    invalid_parameter_noinfo();
  return sub_10008500(a2, 9u, v10, a2, v8);
}
