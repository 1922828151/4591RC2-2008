/*
 * func-name: sub_1001E520
 * func-address: 0x1001e520
 * callers: 0x1001e6f0, 0x1001e800, 0x1001f4a0, 0x10021cd0, 0x10022080
 * callees: none
 */

int __usercall sub_1001E520@<eax>(int a1@<eax>, _BYTE *a2@<ecx>)
{
  if ( a1 < 0 )
    return 0;
  if ( a1 < 128 )
  {
    *a2 = a1;
    return 1;
  }
  if ( a1 < 2048 )
  {
    a2[1] = a1 & 0x3F | 0x80;
    *a2 = (a1 >> 6) | 0xC0;
    return 2;
  }
  if ( a1 < 0x10000 )
  {
    *a2 = (a1 >> 12) | 0xE0;
    a2[2] = a1 & 0x3F | 0x80;
    a2[1] = (a1 >> 6) & 0x3F | 0x80;
    return 3;
  }
  if ( a1 >= 1114112 )
    return 0;
  *a2 = (a1 >> 18) | 0xF0;
  a2[1] = (a1 >> 12) & 0x3F | 0x80;
  a2[3] = a1 & 0x3F | 0x80;
  a2[2] = (a1 >> 6) & 0x3F | 0x80;
  return 4;
}
