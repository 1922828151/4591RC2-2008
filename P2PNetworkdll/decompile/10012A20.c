/*
 * func-name: sub_10012A20
 * func-address: 0x10012a20
 * callers: 0x10012870
 * callees: 0x10012640, 0x100234da, 0x100234ec
 */

int __cdecl sub_10012A20(int *a1, char *cp)
{
  int v2; // esi
  char *v3; // ebx
  int v5; // ebx
  void *v6; // eax
  int v7; // ebx
  void *v8; // eax
  char *Block; // [esp+10h] [ebp-10h]
  int v10; // [esp+14h] [ebp-Ch]
  int v11; // [esp+18h] [ebp-8h]
  int v12; // [esp+1Ch] [ebp-4h]

  v2 = 0;
  v11 = 0;
  v12 = 0;
  v3 = (char *)malloc(0x32u);
  Block = v3;
  if ( !v3 )
    return -499;
  v10 = 0;
  while ( 1 )
  {
    if ( (v10 & 1) != 0 )
      sprintf(v3, "urn:schemas-upnp-org:service:%s", "WANPPPConnection:1");
    else
      sprintf(v3, "urn:schemas-upnp-org:service:%s", "WANIPConnection:1");
    v5 = sub_10012640(cp, a1);
    if ( (v10 & 1) != 0 )
      v12 = *a1 - v11;
    else
      v11 = *a1;
    if ( ++v10 >= 2 )
      break;
    v3 = Block;
  }
  if ( *a1 )
  {
    if ( v11 <= 0 )
    {
LABEL_17:
      v7 = 0;
      if ( v12 <= 0 )
      {
LABEL_20:
        *a1 = v2;
        free(Block);
        return 0;
      }
      else
      {
        while ( 1 )
        {
          v8 = malloc(0x13u);
          *(&dword_10030B64 + 2 * v2) = v8;
          if ( !v8 )
            break;
          strcpy((char *)v8, "WANPPPConnection:1");
          ++v7;
          ++v2;
          if ( v7 >= v12 )
            goto LABEL_20;
        }
        free(Block);
        if ( !v2 )
          return -499;
        *a1 = v2;
        return 0;
      }
    }
    else
    {
      while ( 1 )
      {
        v6 = malloc(0x12u);
        *(&dword_10030B64 + 2 * v2) = v6;
        if ( !v6 )
          break;
        strcpy((char *)v6, "WANIPConnection:1");
        if ( ++v2 >= v11 )
          goto LABEL_17;
      }
      free(Block);
      if ( !v2 )
        return -499;
      *a1 = v2;
      return 0;
    }
  }
  else
  {
    free(Block);
    return v5;
  }
}
