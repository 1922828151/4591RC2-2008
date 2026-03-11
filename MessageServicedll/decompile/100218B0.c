/*
 * func-name: sub_100218B0
 * func-address: 0x100218b0
 * callers: 0x1001aec0, 0x10021450
 * callees: 0x1001e400, 0x10021bb0
 */

int __usercall sub_100218B0@<eax>(int a1@<ebx>, _DWORD *a2@<esi>)
{
  unsigned int v2; // ecx
  unsigned int v3; // edx
  int v4; // edi
  int result; // eax
  unsigned int v6; // edi
  _DWORD v7[3]; // [esp+8h] [ebp-Ch] BYREF

  v2 = a2[1];
  if ( v2 )
    v3 = (int)(a2[2] - v2) >> 3;
  else
    v3 = 0;
  if ( v2 && v3 < (int)(a2[3] - v2) >> 3 )
  {
    v4 = a2[2];
    LOBYTE(v7[0]) = 0;
    result = sub_1001E400(v4, 1);
    a2[2] = v4 + 8;
  }
  else
  {
    v6 = a2[2];
    if ( v2 > v6 )
      invalid_parameter_noinfo();
    return sub_10021BB0(v7, a1, a2, v6);
  }
  return result;
}
