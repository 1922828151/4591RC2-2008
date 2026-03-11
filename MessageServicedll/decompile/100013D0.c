/*
 * func-name: ??4Context@Message@Outpop@@QAEAAV012@ABV012@@Z
 * func-address: 0x100013d0
 * callers: none
 * callees: 0x100029f0, 0x10002e80
 */

int __thiscall Outpop::Message::Context::operator=(int this, int a2)
{
  int v4; // [esp+Ch] [ebp-4h]

  if ( this + 4 != a2 + 4 )
    sub_10002E80(v4, a2 + 4, **(_DWORD **)(a2 + 8), a2 + 4, *(_DWORD *)(a2 + 8));
  if ( this + 16 != a2 + 16 )
    sub_10002E80(v4, a2 + 16, **(_DWORD **)(a2 + 20), a2 + 16, *(_DWORD *)(a2 + 20));
  *(_DWORD *)(this + 28) = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(this + 32) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(this + 36) = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(this + 40) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(this + 44) = *(_DWORD *)(a2 + 44);
  *(_DWORD *)(this + 48) = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(this + 52) = *(_DWORD *)(a2 + 52);
  *(_DWORD *)(this + 56) = *(_DWORD *)(a2 + 56);
  *(_DWORD *)(this + 60) = *(_DWORD *)(a2 + 60);
  *(_DWORD *)(this + 64) = *(_DWORD *)(a2 + 64);
  *(_DWORD *)(this + 68) = *(_DWORD *)(a2 + 68);
  *(_DWORD *)(this + 72) = *(_DWORD *)(a2 + 72);
  *(_DWORD *)(this + 76) = *(_DWORD *)(a2 + 76);
  *(_DWORD *)(this + 80) = *(_DWORD *)(a2 + 80);
  *(_BYTE *)(this + 84) = *(_BYTE *)(a2 + 84);
  *(_DWORD *)(this + 88) = *(_DWORD *)(a2 + 88);
  if ( this + 92 != a2 + 92 )
    sub_100029F0(this + 92, a2 + 92);
  return this;
}
