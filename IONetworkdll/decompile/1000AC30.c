/*
 * func-name: sub_1000AC30
 * func-address: 0x1000ac30
 * callers: 0x1000a280, 0x1000f2a0, 0x1000f9b0, 0x100117b0, 0x10023520, 0x1002d330, 0x1002f880, 0x10032740, 0x10033800, 0x10033cf0, 0x10033f30, 0x1003cc10, 0x10042eb0, 0x100440d0, 0x10047730, 0x10047c70, 0x10047f00
 * callees: 0x1000b220, 0x1003c480
 */

int __usercall sub_1000AC30@<eax>(int a1@<ebx>, _DWORD *a2@<esi>)
{
  unsigned int v2; // ecx
  unsigned int v3; // edx
  int v4; // edi
  int result; // eax
  unsigned int v6; // edi
  int v7; // [esp+8h] [ebp-8h] BYREF

  v2 = a2[1];
  if ( v2 )
    v3 = (int)(a2[2] - v2) >> 2;
  else
    v3 = 0;
  if ( v2 && v3 < (int)(a2[3] - v2) >> 2 )
  {
    v4 = a2[2];
    LOBYTE(v7) = 0;
    result = sub_1003C480(v4, 1);
    a2[2] = v4 + 4;
  }
  else
  {
    v6 = a2[2];
    if ( v2 > v6 )
      invalid_parameter_noinfo();
    return sub_1000B220(&v7, a1, a2, v6);
  }
  return result;
}
