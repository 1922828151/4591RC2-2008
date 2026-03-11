/*
 * func-name: sub_1003BDC0
 * func-address: 0x1003bdc0
 * callers: 0x1002bac0, 0x10049080, 0x1004dbd0
 * callees: 0x100152c0, 0x10015330
 */

_DWORD *__usercall sub_1003BDC0@<eax>(int *a1@<eax>, _DWORD *a2@<ecx>)
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
  v4 = (char *)a2[2];
  v5 = a2[1] < (unsigned int)v4;
  v6 = a2[1] == (_DWORD)v4;
  v10[0] = *a1;
  v10[1] = v2;
  if ( !v5 && !v6 )
    invalid_parameter_noinfo();
  v7 = (char *)a2[1];
  if ( (unsigned int)v7 > a2[2] )
    invalid_parameter_noinfo();
  sub_100152C0((int)a2, v11, (int)a2, v7, (int)a2, v4);
  v8 = (_DWORD *)a2[1];
  if ( (unsigned int)v8 > a2[2] )
    invalid_parameter_noinfo();
  return sub_10015330(9u, a2, v10, (int)a2, v8);
}
