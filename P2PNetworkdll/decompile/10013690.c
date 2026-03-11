/*
 * func-name: sub_10013690
 * func-address: 0x10013690
 * callers: 0x1000f1f0, 0x10010fd0
 * callees: 0x10013790, 0x10013970, 0x100234da, 0x100234ec
 */

int __cdecl sub_10013690(int a1, __int16 a2)
{
  char *v2; // esi
  int v4; // edi
  void *v5; // ebx
  int v6; // esi
  void *Block; // [esp+14h] [ebp-8h] BYREF
  int v8; // [esp+18h] [ebp-4h] BYREF

  v2 = (char *)malloc(strlen("UDP") + 108);
  if ( !v2 )
    return -499;
  sprintf(
    v2,
    "<NewRemoteHost></NewRemoteHost>\r\n<NewExternalPort>%d</NewExternalPort>\r\n<NewProtocol>%s</NewProtocol>\r\n",
    a2,
    "UDP");
  v4 = sub_10013970(*(_DWORD *)(a1 + 4), "DeletePortMapping", v2, &Block);
  if ( v4 )
  {
    free(v2);
    return v4;
  }
  else
  {
    free(v2);
    v5 = Block;
    v6 = sub_10013790(a1, Block, &v8);
    if ( v6 )
    {
      free(v5);
      if ( v8 == 714 )
        return -694;
      else
        return v6;
    }
    else
    {
      free(Block);
      free(v5);
      return 0;
    }
  }
}
