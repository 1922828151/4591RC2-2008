/*
 * func-name: sub_1014C6A0
 * func-address: 0x1014c6a0
 * callers: 0x1001285a
 * callees: 0x102c9d50
 */

void __thiscall sub_1014C6A0(int this)
{
  void (__thiscall ***v2)(_DWORD, _DWORD); // esi
  void (__thiscall ***i)(_DWORD, _DWORD); // edi

  v2 = *(void (__thiscall ****)(_DWORD, _DWORD))(this + 4);
  if ( v2 )
  {
    for ( i = *(void (__thiscall ****)(_DWORD, _DWORD))(this + 8); v2 != i; v2 += 146 )
      (**v2)(v2, 0);
    operator delete(*(void **)(this + 4));
  }
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
