/*
 * func-name: sub_10011D10
 * func-address: 0x10011d10
 * callers: 0x10011aa0
 * callees: none
 */

int __cdecl sub_10011D10(int a1, const char **a2)
{
  int v2; // ecx
  size_t v3; // ebx
  unsigned int v4; // esi
  unsigned int v5; // kr00_4
  const char *v6; // eax
  const char *v8; // eax
  int i; // esi

  v2 = *(_DWORD *)(a1 + 28);
  v3 = 0;
  if ( !v2 )
    goto LABEL_4;
  do
  {
    v4 = strlen(*(const char **)v2);
    v5 = strlen(*(const char **)(v2 + 4));
    v2 = *(_DWORD *)(v2 + 8);
    v3 += v4 + v5 + 5;
  }
  while ( v2 );
  if ( v3 )
  {
    v8 = (const char *)malloc(v3);
    *a2 = v8;
    if ( v8 )
    {
      *v8 = 0;
      for ( i = *(_DWORD *)(a1 + 28); i; i = *(_DWORD *)(i + 8) )
        sprintf((char *const)&(*a2)[strlen(*a2)], "%s: %s\r\n", *(const char **)i, *(const char **)(i + 4));
      return 0;
    }
    else
    {
      return -499;
    }
  }
  else
  {
LABEL_4:
    v6 = (const char *)malloc(1u);
    *a2 = v6;
    *v6 = 0;
    return 0;
  }
}
