/*
 * func-name: sub_10011AA0
 * func-address: 0x10011aa0
 * callers: 0x10011650
 * callees: 0x10011c40, 0x10011d10, 0x10011de0
 */

int __cdecl sub_10011AA0(const char **Block, char **a2)
{
  const char **v2; // ebp
  int result; // eax
  int v4; // esi
  int v5; // esi
  char *v6; // edi
  char *v7; // eax
  void *v8; // ebx
  const char **v9; // esi
  void *v10; // [esp+4h] [ebp-10h] BYREF
  void *v11; // [esp+8h] [ebp-Ch] BYREF
  unsigned int v12; // [esp+Ch] [ebp-8h]
  unsigned int v13; // [esp+10h] [ebp-4h]

  v2 = Block;
  if ( !Block || !a2 )
    return -498;
  result = sub_10011DE0(&Block);
  if ( !result )
  {
    v4 = sub_10011C40(v2, &v10);
    if ( v4 )
    {
      free(Block);
      return v4;
    }
    else
    {
      v5 = sub_10011D10(v2, &v11);
      if ( v5 )
      {
        free(Block);
        free(v10);
        return v5;
      }
      else
      {
        v13 = strlen(*v2);
        v12 = strlen((const char *)Block);
        v6 = (char *)v11;
        v7 = (char *)malloc(v12 + strlen((const char *)v10) + strlen((const char *)v11) + strlen(v2[3]) + v13 + 28);
        *a2 = v7;
        if ( v7 )
        {
          v8 = v10;
          v9 = Block;
          sprintf(
            v7,
            "POST /%s HTTP/1.1\r\nHOST: %s\r\n%s%s\r\n%s",
            *v2,
            (const char *)Block,
            (const char *)v10,
            v6,
            v2[3]);
          free(v9);
          free(v8);
          free(v6);
          return 0;
        }
        else
        {
          free(Block);
          free(v10);
          free(v6);
          return -499;
        }
      }
    }
  }
  return result;
}
