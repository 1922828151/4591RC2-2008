/*
 * func-name: sub_100021A0
 * func-address: 0x100021a0
 * callers: 0x10001e70
 * callees: 0x10001610, 0x100017e0, 0x100019e0, 0x10034bd3
 */

char *__thiscall sub_100021A0(char *Block, char a2)
{
  _DWORD *v3; // ecx

  v3 = Block + 36;
  *(_DWORD *)Block = &meq::SocketWin32::`vftable';
  *v3 = &meq::SocketWin32::`vftable';
  sub_100017E0(v3);
  (*(void (__thiscall **)(char *))(*(_DWORD *)Block + 20))(Block);
  sub_10001610(Block + 32816, byte_10049374);
  *((_DWORD *)Block + 8211) = 0;
  sub_100019E0(Block);
  if ( (a2 & 1) != 0 )
    j__free(Block);
  return Block;
}
