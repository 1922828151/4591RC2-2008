/*
 * func-name: sub_100111A0
 * func-address: 0x100111a0
 * callers: 0x10012d90
 * callees: none
 */

int __usercall sub_100111A0@<eax>(void ***a1@<eax>, const char *a2, const char *a3, __int16 a4)
{
  void **v5; // esi
  _BYTE *v6; // eax
  const char *v8; // ecx
  _BYTE *v9; // edx
  char v10; // al
  _BYTE *v11; // eax
  const char *v12; // ecx
  _BYTE *v13; // edx
  char v14; // al

  if ( !a2 || !a3 || a4 < 0 || !a1 )
    return -498;
  v5 = (void **)malloc(0xCu);
  *a1 = v5;
  if ( !v5 )
    return -499;
  v6 = malloc(strlen(a3) + 1);
  *v5 = v6;
  if ( !v6 )
  {
    free(v5);
    return -499;
  }
  v8 = a3;
  v9 = v6;
  do
  {
    v10 = *v8;
    *v9++ = *v8++;
  }
  while ( v10 );
  v11 = malloc(strlen(a2) + 1);
  v5[1] = v11;
  if ( v11 )
  {
    v12 = a2;
    v13 = v11;
    do
    {
      v14 = *v12;
      *v13++ = *v12++;
    }
    while ( v14 );
    *((_WORD *)v5 + 4) = a4;
    return 0;
  }
  else
  {
    free(*v5);
    free(v5);
    return -499;
  }
}
