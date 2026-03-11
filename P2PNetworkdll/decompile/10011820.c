/*
 * func-name: sub_10011820
 * func-address: 0x10011820
 * callers: 0x10011770
 * callees: 0x10012090
 */

int __usercall sub_10011820@<eax>(int a1@<eax>, void **a2@<edi>)
{
  void *v2; // eax
  int v4; // esi
  int v5; // [esp+4h] [ebp-4h] BYREF

  v5 = 0;
  v2 = malloc(a1 + 1);
  *a2 = v2;
  if ( !v2 )
    return -499;
  v4 = sub_10012090(v2, &v5);
  if ( v4 )
  {
    free(*a2);
    return v4;
  }
  else
  {
    *((_BYTE *)*a2 + v5) = 0;
    return 0;
  }
}
