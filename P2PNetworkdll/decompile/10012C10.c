/*
 * func-name: sub_10012C10
 * func-address: 0x10012c10
 * callers: 0x10012870
 * callees: 0x10013b70, 0x100234ec
 */

int __cdecl sub_10012C10(char *Str, void **a2)
{
  char *v2; // edi
  char *(__cdecl *v4)(const char *, const char *); // ebx
  char *v5; // esi
  const char *v6; // esi
  char *v7; // ebx
  void *v8; // eax
  char *Block; // [esp+8h] [ebp-4h]

  v2 = (char *)malloc(strlen(Str) + 1);
  Block = v2;
  if ( !v2 )
    return -499;
  sub_10013B70(Str);
  v4 = strstr;
  if ( strstr(Str, "200 OK") )
  {
    v5 = strstr(v2, "\r\n");
    if ( v5 )
    {
      while ( 1 )
      {
        v6 = v5 + 2;
        v7 = v4(v6, "\r\n");
        if ( !v7 )
          break;
        if ( !strncmp(v6, "LOCATION:", 9u) )
        {
          v8 = malloc(v7 - (v6 + 9) + 1);
          *a2 = v8;
          if ( v8 )
          {
            sscanf(&Str[v6 + 9 - Block], "%s", v8);
            free(Block);
            return 0;
          }
          else
          {
            free(Block);
            return -499;
          }
        }
        v2 = Block;
        v5 = strstr(v6, "\r\n");
        if ( !v5 )
          break;
        v4 = strstr;
      }
    }
    free(v2);
    if ( (unsigned int)((_BYTE *)*a2 + strlen((const char *)*a2) + 1 - (_BYTE *)*a2) <= 0x200 )
    {
      return -795;
    }
    else
    {
      free(*a2);
      return -695;
    }
  }
  else
  {
    free(v2);
    return -797;
  }
}
