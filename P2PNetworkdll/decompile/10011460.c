/*
 * func-name: sub_10011460
 * func-address: 0x10011460
 * callers: 0x10013790
 * callees: none
 */

int __usercall sub_10011460@<eax>(const char *a1@<ebx>, int a2, const char *a3)
{
  void **v3; // esi
  _BYTE *v4; // eax
  const char *v6; // ecx
  _BYTE *v7; // edx
  char v8; // al
  _BYTE *v9; // eax
  const char *v10; // ecx
  _BYTE *v11; // edx
  char v12; // al

  v3 = (void **)malloc(0xCu);
  if ( !v3 )
    return -499;
  v4 = malloc(strlen(a1) + 1);
  *v3 = v4;
  if ( !v4 )
  {
    free(v3);
    return -499;
  }
  v6 = a1;
  v7 = v4;
  do
  {
    v8 = *v6;
    *v7++ = *v6++;
  }
  while ( v8 );
  v9 = malloc(strlen(a3) + 1);
  v3[1] = v9;
  if ( v9 )
  {
    v10 = a3;
    v11 = v9;
    do
    {
      v12 = *v10;
      *v11++ = *v10++;
    }
    while ( v12 );
    v3[2] = *(void **)(a2 + 28);
    ++*(_DWORD *)(a2 + 20);
    *(_DWORD *)(a2 + 28) = v3;
    return 0;
  }
  else
  {
    free(*v3);
    free(v3);
    return -499;
  }
}
