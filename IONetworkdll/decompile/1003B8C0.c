/*
 * func-name: sub_1003B8C0
 * func-address: 0x1003b8c0
 * callers: 0x100292b0, 0x100390a0
 * callees: 0x1003b9e0, 0x1003c480
 */

int __usercall sub_1003B8C0@<eax>(int a1@<ebx>, _DWORD *a2@<esi>)
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
    result = sub_1003C480(v4, 1);
    a2[2] = v4 + 4;
  }
  else
  {
    v6 = a2[2];
    if ( v2 > v6 )
      invalid_parameter_noinfo();
    return sub_1003B9E0(v7, a1, a2, v6);
  }
  return result;
}
