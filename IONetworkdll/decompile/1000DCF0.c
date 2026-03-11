/*
 * func-name: sub_1000DCF0
 * func-address: 0x1000dcf0
 * callers: 0x1000dbf0
 * callees: 0x1000dd30
 */

int __usercall sub_1000DCF0@<eax>(int a1@<eax>)
{
  void *v2; // esi
  void *v3; // edi
  _BYTE v5[8]; // [esp+10h] [ebp-8h] BYREF

  v2 = *(void **)(a1 + 8);
  if ( *(_DWORD *)(a1 + 4) > (unsigned int)v2 )
    invalid_parameter_noinfo();
  v3 = *(void **)(a1 + 4);
  if ( (unsigned int)v3 > *(_DWORD *)(a1 + 8) )
    invalid_parameter_noinfo();
  return sub_1000DD30(v5, a1, v3, a1, v2);
}
