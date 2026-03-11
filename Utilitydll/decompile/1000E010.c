/*
 * func-name: sub_1000E010
 * func-address: 0x1000e010
 * callers: 0x10006bf0, 0x1000db80
 * callees: 0x100078a0, 0x10007c50
 */

_DWORD *__usercall sub_1000E010@<eax>(int *a1@<eax>, int a2@<ecx>)
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
  sub_100078A0(a2, v11, a2, v7, a2, v4);
  v8 = *(_DWORD **)(a2 + 4);
  if ( (unsigned int)v8 > *(_DWORD *)(a2 + 8) )
    invalid_parameter_noinfo();
  return sub_10007C50(9u, a2, v10, a2, v8);
}
