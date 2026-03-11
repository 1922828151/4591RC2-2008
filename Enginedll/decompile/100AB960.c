/*
 * func-name: ?RePosPrevPages@CRETabPages@@IAEXXZ
 * func-address: 0x100ab960
 * callers: 0x100aba50, 0x100b13c0, 0x100cd620
 * callees: none
 */

void __thiscall CRETabPages::RePosPrevPages(CRETabPages *this)
{
  int v2; // eax
  int v3; // ebp
  int v4; // edi
  int v5; // esi
  int v6; // [esp+8h] [ebp-4h]

  v2 = *((_DWORD *)this + 134);
  v3 = 0;
  if ( v2 )
  {
    v4 = *((_DWORD *)this + 24);
    if ( v2 > 0 )
    {
      v6 = 0;
      do
      {
        v5 = v6 + *((_DWORD *)this + 133);
        (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(v5 + 528) + 156))(
          *(_DWORD *)(v5 + 528),
          v4,
          *(_DWORD *)(*(_DWORD *)(v5 + 528) + 100));
        v6 += 532;
        ++v3;
        v4 += *(_DWORD *)(*(_DWORD *)(v5 + 528) + 96) + *(_DWORD *)(*(_DWORD *)(v5 + 528) + 104) + 8;
      }
      while ( v3 < *((_DWORD *)this + 134) );
    }
  }
}
