/*
 * func-name: ??4EventAttemper@@QAEAAV0@ABV0@@Z
 * func-address: 0x100326a0
 * callers: none
 * callees: 0x10023e50, 0x1002f9b0, 0x1002fbc0, 0x10031b20
 */

int __thiscall EventAttemper::operator=(int this, int a2)
{
  _DWORD *v3; // ecx

  *(float *)(this + 4) = *(float *)(a2 + 4);
  v3 = (_DWORD *)(this + 8);
  if ( v3 != (_DWORD *)(a2 + 8) )
    sub_1002F9B0(v3, a2 + 8);
  *(_DWORD *)(this + 48) = *(_DWORD *)(a2 + 48);
  if ( this + 52 != a2 + 52 )
    sub_10023E50(this + 52, a2 + 52, **(_DWORD ***)(a2 + 56), a2 + 52, *(_DWORD **)(a2 + 56), a2);
  if ( this + 64 != a2 + 64 )
    sub_1002FBC0((_DWORD *)(this + 64), a2 + 64);
  *(_DWORD *)(this + 104) = *(_DWORD *)(a2 + 104);
  if ( this + 108 != a2 + 108 )
    sub_10023E50(this + 108, a2 + 108, **(_DWORD ***)(a2 + 112), a2 + 108, *(_DWORD **)(a2 + 112), a2);
  if ( this + 120 != a2 + 120 )
    sub_10031B20((_DWORD *)(this + 120), a2 + 120);
  if ( this + 160 != a2 + 160 )
    sub_10023E50(this + 160, a2 + 160, **(_DWORD ***)(a2 + 164), a2 + 160, *(_DWORD **)(a2 + 164), a2);
  return this;
}
