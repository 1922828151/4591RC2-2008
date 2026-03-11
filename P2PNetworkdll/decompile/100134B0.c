/*
 * func-name: sub_100134B0
 * func-address: 0x100134b0
 * callers: 0x1000f1f0
 * callees: 0x100135f0, 0x10013790, 0x10013970, 0x100234da, 0x100234ec
 */

int __cdecl sub_100134B0(int a1, __int16 a2)
{
  int result; // eax
  void *v3; // ebx
  char *v4; // esi
  int v5; // edi
  void *v6; // ebp
  int v7; // edi
  void *Block; // [esp+4h] [ebp-8h] BYREF
  int v9; // [esp+8h] [ebp-4h] BYREF

  Block = 0;
  result = sub_100135F0(a1);
  if ( !result )
  {
    v3 = Block;
    v4 = (char *)malloc(strlen((const char *)Block) + strlen("UDP") + 320);
    if ( v4 )
    {
      sprintf(
        v4,
        "<NewRemoteHost></NewRemoteHost>\r\n"
        "<NewExternalPort>%d</NewExternalPort>\r\n"
        "<NewProtocol>%s</NewProtocol>\r\n"
        "<NewInternalPort>%d</NewInternalPort>\r\n"
        "<NewInternalClient>%s</NewInternalClient>\r\n"
        "<NewEnabled>1</NewEnabled>\r\n"
        "<NewPortMappingDescription></NewPortMappingDescription>\r\n"
        "<NewLeaseDuration>0</NewLeaseDuration>\r\n",
        a2,
        "UDP",
        a2,
        (const char *)Block);
      v5 = sub_10013970(*(_DWORD *)(a1 + 4), "AddPortMapping", v4, &Block);
      if ( v5 )
      {
        free(v3);
        free(v4);
        return v5;
      }
      else
      {
        free(v4);
        v6 = Block;
        v7 = sub_10013790(a1, Block, &v9);
        free(v3);
        free(v6);
        if ( v7 )
        {
          if ( v9 == 718 )
            return -694;
          else
            return v7;
        }
        else
        {
          free(Block);
          return 0;
        }
      }
    }
    else
    {
      free(Block);
      return -499;
    }
  }
  return result;
}
