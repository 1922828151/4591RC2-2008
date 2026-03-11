/*
 * func-name: sub_10013210
 * func-address: 0x10013210
 * callers: 0x10012e40
 * callees: 0x100234ec
 */

void __cdecl sub_10013210(int a1, char *Source, size_t Count)
{
  char *v3; // eax
  char *v4; // eax

  if ( *(_DWORD *)(a1 + 12) == 1 )
  {
    v3 = (char *)malloc(Count + 1);
    *(_DWORD *)(a1 + 4) = v3;
    if ( v3 )
    {
      strncpy(v3, Source, Count);
      *(_BYTE *)(Count + *(_DWORD *)(a1 + 4)) = 0;
    }
  }
  else if ( *(_DWORD *)(a1 + 16) == 1 )
  {
    if ( !strncmp(*(const char **)(a1 + 8), Source, Count) )
      *(_DWORD *)(a1 + 20) = 1;
  }
  else if ( *(_DWORD *)(a1 + 20) )
  {
    if ( *(_DWORD *)(a1 + 24) )
    {
      v4 = (char *)malloc(Count + 1);
      *(_DWORD *)a1 = v4;
      if ( v4 )
      {
        strncpy(v4, Source, Count);
        *(_BYTE *)(Count + *(_DWORD *)a1) = 0;
      }
    }
  }
}
