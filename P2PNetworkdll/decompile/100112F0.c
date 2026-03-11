/*
 * func-name: sub_100112F0
 * func-address: 0x100112f0
 * callers: 0x10013790
 * callees: none
 */

int __usercall sub_100112F0@<eax>(void ***a1@<eax>, const char *a2, const char *a3, __int16 a4, const char *a5)
{
  void **v6; // esi
  _BYTE *v7; // eax
  const char *v9; // ecx
  _BYTE *v10; // edx
  char v11; // al
  _BYTE *v12; // eax
  const char *v13; // ecx
  _BYTE *v14; // edx
  char v15; // al
  _BYTE *v16; // eax
  const char *v17; // ecx
  _BYTE *v18; // edx
  char v19; // al

  if ( !a2 || !a3 || a4 < 0 || !a5 || !a1 )
    return -498;
  v6 = (void **)malloc(0x20u);
  *a1 = v6;
  if ( !v6 )
    return -499;
  v7 = malloc(strlen(a3) + 1);
  *v6 = v7;
  if ( !v7 )
  {
    free(v6);
    return -499;
  }
  v9 = a3;
  v10 = v7;
  do
  {
    v11 = *v9;
    *v10++ = *v9++;
  }
  while ( v11 );
  v12 = malloc(strlen(a2) + 1);
  v6[1] = v12;
  if ( v12 )
  {
    v13 = a2;
    v14 = v12;
    do
    {
      v15 = *v13;
      *v14++ = *v13++;
    }
    while ( v15 );
    *((_WORD *)v6 + 4) = a4;
    v16 = malloc(strlen(a5) + 1);
    v6[3] = v16;
    if ( v16 )
    {
      v17 = a5;
      v18 = v16;
      do
      {
        v19 = *v17;
        *v18++ = *v17++;
      }
      while ( v19 );
      v6[4] = 0;
      v6[5] = 0;
      v6[6] = 0;
      v6[7] = 0;
      return 0;
    }
    else
    {
      free(*v6);
      free(v6[1]);
      free(v6);
      return -499;
    }
  }
  else
  {
    free(*v6);
    free(v6);
    return -499;
  }
}
