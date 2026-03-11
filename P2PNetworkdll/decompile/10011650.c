/*
 * func-name: sub_10011650
 * func-address: 0x10011650
 * callers: 0x10013790
 * callees: 0x100116b0, 0x10011aa0
 */

int __usercall sub_10011650@<eax>(void *a1@<eax>, int a2, int a3)
{
  int result; // eax
  void *v4; // edi
  int v5; // esi
  void *Block; // [esp+8h] [ebp-4h] BYREF

  result = sub_10011AA0(a1, (int)&Block);
  if ( !result )
  {
    v4 = Block;
    v5 = sub_100116B0(a2, a3);
    free(v4);
    if ( v5 )
      return v5;
    else
      return 0;
  }
  return result;
}
