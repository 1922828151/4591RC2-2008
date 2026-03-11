/*
 * func-name: sub_10057F50
 * func-address: 0x10057f50
 * callers: 0x10058d90, 0x1005e6e0
 * callees: 0x101a2500
 */

void __thiscall sub_10057F50(int this)
{
  void (__thiscall ***v2)(_DWORD, _DWORD); // esi
  void (__thiscall ***i)(_DWORD, _DWORD); // edi

  v2 = *(void (__thiscall ****)(_DWORD, _DWORD))(this + 4);
  if ( v2 )
  {
    for ( i = *(void (__thiscall ****)(_DWORD, _DWORD))(this + 8); v2 != i; v2 += 13 )
      (**v2)(v2, 0);
    operator delete(*(void **)(this + 4));
  }
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
