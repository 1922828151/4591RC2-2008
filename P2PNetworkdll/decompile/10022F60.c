/*
 * func-name: sub_10022F60
 * func-address: 0x10022f60
 * callers: 0x10022c90
 * callees: none
 */

void __usercall sub_10022F60(void **a1@<eax>)
{
  unsigned int v2; // esi
  void *v3; // edi

  v2 = 0;
  if ( a1[1] )
  {
    do
    {
      if ( *((_DWORD *)*a1 + v2) )
        free(*((void **)*a1 + v2));
      ++v2;
    }
    while ( v2 < (unsigned int)a1[1] );
  }
  v3 = *a1;
  if ( v3 )
    free(v3);
}
