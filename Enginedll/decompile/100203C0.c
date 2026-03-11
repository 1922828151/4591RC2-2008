/*
 * func-name: ?_Tidy@?$vector@VBBox@@V?$allocator@VBBox@@@std@@@std@@IAEXXZ
 * func-address: 0x100203c0
 * callers: 0x10021590, 0x10021680, 0x100250d0, 0x100295d0, 0x1009ec20, 0x101b95e0
 * callees: 0x101a2500
 */

void __thiscall std::vector<BBox>::_Tidy(int this)
{
  void (__thiscall ***v2)(_DWORD, _DWORD); // esi
  void (__thiscall ***i)(_DWORD, _DWORD); // edi

  v2 = *(void (__thiscall ****)(_DWORD, _DWORD))(this + 4);
  if ( v2 )
  {
    for ( i = *(void (__thiscall ****)(_DWORD, _DWORD))(this + 8); v2 != i; v2 += 10 )
      (**v2)(v2, 0);
    operator delete(*(void **)(this + 4));
  }
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
