/*
 * func-name: ?_Destroy@?$vector@VBBox@@V?$allocator@VBBox@@@std@@@std@@IAEXPAVBBox@@0@Z
 * func-address: 0x10020390
 * callers: 0x10025190, 0x10025310, 0x10025440
 * callees: none
 */

int __stdcall std::vector<BBox>::_Destroy(
        int (__thiscall ***a1)(_DWORD, _DWORD),
        int (__thiscall ***a2)(_DWORD, _DWORD))
{
  int (__thiscall ***i)(_DWORD, _DWORD); // esi
  int result; // eax

  for ( i = a1; i != a2; i += 10 )
    result = (**i)(i, 0);
  return result;
}
