/*
 * func-name: sub_10011910
 * func-address: 0x10011910
 * callers: 0x10011770
 * callees: 0x10012090
 */

int __usercall sub_10011910@<eax>(void **a1@<ebx>)
{
  int v1; // esi
  void *v2; // eax
  int v4; // edi
  int v5; // [esp+Ch] [ebp-4h] BYREF

  v1 = 0;
  v5 = 0;
  v2 = malloc(0x1000u);
  *a1 = v2;
  if ( !v2 )
    return -499;
  do
  {
    v4 = sub_10012090((char *)*a1 + v1, &v5);
    v1 += v5;
    if ( v4 )
    {
      free(*a1);
      return v4;
    }
  }
  while ( v5 > 0 && v1 < 4096 && (v1 < 4 || strncmp((char *)*a1 + v1 - 4, "\r\n\r\n", 4u)) );
  if ( v1 > 0 )
  {
    if ( v1 < 4096 )
    {
      *((_BYTE *)*a1 + v1) = 0;
      return 0;
    }
    else
    {
      free(*a1);
      return -898;
    }
  }
  else
  {
    free(*a1);
    return -899;
  }
}
