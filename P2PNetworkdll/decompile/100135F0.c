/*
 * func-name: sub_100135F0
 * func-address: 0x100135f0
 * callers: 0x100134b0
 * callees: 0x10012240, 0x10012390, 0x10013a20, 0x10023292, 0x100232d4, 0x100232f7
 */

int __cdecl sub_100135F0(char **a1)
{
  _DWORD *v1; // ecx
  _DWORD *v2; // esi
  int result; // eax
  SOCKET *v4; // edi
  void *Block; // [esp+4h] [ebp-40Ch] BYREF
  int v6; // [esp+8h] [ebp-408h] BYREF
  char Destination[512]; // [esp+Ch] [ebp-404h] BYREF
  int v8[128]; // [esp+20Ch] [ebp-204h] BYREF

  v2 = v1;
  result = sub_10013A20(*a1, Destination, (int)v8, (int)&v6);
  if ( !result )
  {
    result = sub_10012390(&Block, Destination, v6, 2);
    if ( !result )
    {
      v4 = (SOCKET *)Block;
      result = sub_10012240(v2, (SOCKET *)Block);
      if ( !result )
      {
        closesocket(*v4);
        WSACleanup();
        free(v4);
        return 0;
      }
    }
  }
  return result;
}
