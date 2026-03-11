/*
 * func-name: sub_10008C80
 * func-address: 0x10008c80
 * callers: 0x10008200, 0x1000d5a0
 * callees: 0x100091d0, 0x10009fd0
 */

int __usercall sub_10008C80@<eax>(int a1@<ebx>, _DWORD *a2@<esi>)
{
  unsigned int v2; // ecx
  unsigned int v3; // edx
  int v4; // edi
  int result; // eax
  unsigned int v6; // edi
  _DWORD v7[3]; // [esp+8h] [ebp-Ch] BYREF

  v2 = a2[1];
  if ( v2 )
    v3 = (int)(a2[2] - v2) >> 2;
  else
    v3 = 0;
  if ( v2 && v3 < (int)(a2[3] - v2) >> 2 )
  {
    v4 = a2[2];
    LOBYTE(v7[0]) = 0;
    result = sub_10009FD0(v4, a1);
    a2[2] = v4 + 4;
  }
  else
  {
    v6 = a2[2];
    if ( v2 > v6 )
      invalid_parameter_noinfo();
    return sub_100091D0(v7, a1, a2, v6);
  }
  return result;
}
