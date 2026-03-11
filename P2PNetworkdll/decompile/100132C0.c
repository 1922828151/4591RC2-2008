/*
 * func-name: sub_100132C0
 * func-address: 0x100132c0
 * callers: 0x1000f1f0
 * callees: 0x10013360, 0x10013790, 0x10013970
 */

int __usercall sub_100132C0@<eax>(int a1@<eax>, char *Destination)
{
  int result; // eax
  void *v4; // esi
  int v5; // edi
  void *v6; // ebx
  int v7; // esi
  void *Block; // [esp+4h] [ebp-8h] BYREF
  _BYTE v9[4]; // [esp+8h] [ebp-4h] BYREF

  result = sub_10013970(*(_DWORD *)(a1 + 4), "GetExternalIPAddress", &unk_10026701, &Block);
  if ( !result )
  {
    v4 = Block;
    v5 = sub_10013790(a1, Block, v9);
    if ( v5 )
    {
      free(v4);
      return v5;
    }
    else
    {
      free(v4);
      v6 = Block;
      v7 = sub_10013360(Destination);
      free(v6);
      if ( v7 )
        return v7;
      else
        return 0;
    }
  }
  return result;
}
