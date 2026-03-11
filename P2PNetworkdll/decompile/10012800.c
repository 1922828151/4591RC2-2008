/*
 * func-name: sub_10012800
 * func-address: 0x10012800
 * callers: 0x10012640
 * callees: 0x10011f30, 0x100234ec
 */

int __usercall sub_10012800@<eax>(void **a1@<edi>)
{
  char *v1; // eax
  int v3; // esi
  int v4; // [esp+4h] [ebp-4h] BYREF

  v1 = (char *)malloc(0x401u);
  *a1 = v1;
  if ( !v1 )
    return -499;
  v3 = sub_10011F30(v1, &v4);
  if ( v3 )
  {
    free(*a1);
    return v3;
  }
  else if ( v4 > 0 )
  {
    *((_BYTE *)*a1 + v4) = 0;
    return 0;
  }
  else
  {
    free(*a1);
    return -799;
  }
}
