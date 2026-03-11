/*
 * func-name: sub_10015DB0
 * func-address: 0x10015db0
 * callers: 0x10012080, 0x10015330
 * callees: 0x100160d0
 */

int __usercall sub_10015DB0@<eax>(int a1@<eax>)
{
  void *v2; // esi
  void *v3; // edi
  int v5[3]; // [esp+10h] [ebp-Ch] BYREF

  v2 = *(void **)(a1 + 8);
  if ( *(_DWORD *)(a1 + 4) > (unsigned int)v2 )
    invalid_parameter_noinfo();
  v3 = *(void **)(a1 + 4);
  if ( (unsigned int)v3 > *(_DWORD *)(a1 + 8) )
    invalid_parameter_noinfo();
  return sub_100160D0((int)v5, a1, v3, a1, v2);
}
