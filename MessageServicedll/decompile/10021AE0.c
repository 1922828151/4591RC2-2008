/*
 * func-name: sub_10021AE0
 * func-address: 0x10021ae0
 * callers: 0x10020d10
 * callees: 0x10022490, 0x10023270
 */

int __usercall sub_10021AE0@<eax>(int a1@<ebx>, _DWORD *a2@<esi>)
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
    result = sub_10023270(v4, 1);
    a2[2] = v4 + 4;
  }
  else
  {
    v6 = a2[2];
    if ( v2 > v6 )
      invalid_parameter_noinfo();
    return sub_10022490(v7, a1, a2, v6);
  }
  return result;
}
