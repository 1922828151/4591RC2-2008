/*
 * func-name: sub_1000B200
 * func-address: 0x1000b200
 * callers: 0x100117b0, 0x10013430
 * callees: none
 */

int __usercall sub_1000B200@<eax>(int a1@<eax>)
{
  int v1; // ecx

  v1 = *(_DWORD *)(a1 + 4);
  if ( v1 )
    return (*(_DWORD *)(a1 + 8) - v1) >> 2;
  else
    return 0;
}
