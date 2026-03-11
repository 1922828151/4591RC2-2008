/*
 * func-name: sub_10006750
 * func-address: 0x10006750
 * callers: 0x10005570, 0x10005780
 * callees: 0x100074e0
 */

int __usercall sub_10006750@<eax>(int a1@<eax>)
{
  void *v2; // esi
  void *v3; // edi
  int v5; // [esp+10h] [ebp-8h] BYREF

  v2 = *(void **)(a1 + 8);
  if ( *(_DWORD *)(a1 + 4) > (unsigned int)v2 )
    invalid_parameter_noinfo();
  v3 = *(void **)(a1 + 4);
  if ( (unsigned int)v3 > *(_DWORD *)(a1 + 8) )
    invalid_parameter_noinfo();
  return sub_100074E0((int)&v5, a1, v3, a1, v2);
}
