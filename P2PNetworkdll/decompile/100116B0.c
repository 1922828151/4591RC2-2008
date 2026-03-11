/*
 * func-name: sub_100116B0
 * func-address: 0x100116b0
 * callers: 0x100115f0, 0x10011650
 * callees: 0x10011770, 0x10012040, 0x10012390, 0x10023292, 0x100232d4
 */

int __usercall sub_100116B0@<eax>(int a1@<eax>, const char *a2@<ecx>, int a3)
{
  int result; // eax
  SOCKET *v5; // esi
  int v6; // edi
  void *Block; // [esp+10h] [ebp-4h] BYREF

  result = sub_10012390(a1, 1);
  if ( !result )
  {
    strlen(a2);
    v5 = (SOCKET *)Block;
    v6 = sub_10012040(Block, &Block);
    if ( v6 || (v6 = sub_10011770(v5, a3)) != 0 )
    {
      closesocket(*v5);
      WSACleanup();
      free(v5);
      return v6;
    }
    else
    {
      closesocket(*v5);
      WSACleanup();
      free(v5);
      return 0;
    }
  }
  return result;
}
