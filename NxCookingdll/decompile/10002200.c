/*
 * func-name: sub_10002200
 * func-address: 0x10002200
 * callers: none
 * callees: 0x10034bd3
 */

_DWORD *__thiscall sub_10002200(_DWORD *Block, char a2)
{
  bool v3; // zf
  int v4; // eax

  v3 = Block[4] == 0;
  *Block = &meq::InputStream::`vftable';
  if ( !v3 && !*((_BYTE *)Block + 4) )
  {
    if ( !dword_100580A4 )
      __debugbreak();
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)(dword_100580A4 + 24) + 20))(dword_100580A4 + 24);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 20))(v4, Block[4]);
  }
  if ( (a2 & 1) != 0 )
    j__free(Block);
  return Block;
}
