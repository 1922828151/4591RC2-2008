/*
 * func-name: sub_1000B100
 * func-address: 0x1000b100
 * callers: 0x10004190, 0x10004430, 0x10005b10, 0x1000af00
 * callees: 0x10008b70, 0x1000b180
 */

void __usercall sub_1000B100(int *a1@<ebx>, _DWORD *a2@<esi>)
{
  unsigned int v2; // ecx
  unsigned int v3; // edx
  int *v4; // edi
  unsigned int v5; // edi
  _DWORD v6[3]; // [esp+8h] [ebp-Ch] BYREF

  v2 = a2[1];
  if ( v2 )
    v3 = (int)(a2[2] - v2) >> 2;
  else
    v3 = 0;
  if ( v2 && v3 < (int)(a2[3] - v2) >> 2 )
  {
    v4 = (int *)a2[2];
    LOBYTE(v6[0]) = 0;
    sub_10008B70(v4, 1, a1);
    a2[2] = v4 + 1;
  }
  else
  {
    v5 = a2[2];
    if ( v2 > v5 )
      invalid_parameter_noinfo();
    sub_1000B180(v6, a1, a2, v5);
  }
}
