/*
 * func-name: ??4Timer_Queue@Utility@Outpop@@QAEAAV012@ABV012@@Z
 * func-address: 0x100037a0
 * callers: none
 * callees: 0x10005bc0, 0x100067f0, 0x10006fd0
 */

int __thiscall Outpop::Utility::Timer_Queue::operator=(int this, int a2)
{
  int v3; // ecx

  *(_DWORD *)(this + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(this + 8) = *(_DWORD *)(a2 + 8);
  v3 = this + 12;
  if ( v3 != a2 + 12 )
    sub_100067F0(v3, a2 + 12);
  *(_DWORD *)(this + 52) = *(_DWORD *)(a2 + 52);
  *(_DWORD *)(this + 56) = *(_DWORD *)(a2 + 56);
  *(_DWORD *)(this + 60) = *(_DWORD *)(a2 + 60);
  *(_DWORD *)(this + 64) = *(_DWORD *)(a2 + 64);
  *(_DWORD *)(this + 68) = *(_DWORD *)(a2 + 68);
  *(_DWORD *)(this + 72) = *(_DWORD *)(a2 + 72);
  *(_DWORD *)(this + 76) = *(_DWORD *)(a2 + 76);
  *(_DWORD *)(this + 80) = *(_DWORD *)(a2 + 80);
  *(_DWORD *)(this + 84) = *(_DWORD *)(a2 + 84);
  *(_DWORD *)(this + 88) = *(_DWORD *)(a2 + 88);
  *(_DWORD *)(this + 92) = *(_DWORD *)(a2 + 92);
  *(_DWORD *)(this + 96) = *(_DWORD *)(a2 + 96);
  sub_10005BC0(this + 100, a2 + 100);
  *(_DWORD *)(this + 120) = *(_DWORD *)(a2 + 120);
  *(_DWORD *)(this + 124) = *(_DWORD *)(a2 + 124);
  *(_DWORD *)(this + 128) = *(_DWORD *)(a2 + 128);
  *(_BYTE *)(this + 132) = *(_BYTE *)(a2 + 132);
  if ( this + 136 != a2 + 136 )
    sub_10006FD0(this + 136, a2 + 136);
  *(_DWORD *)(this + 176) = *(_DWORD *)(a2 + 176);
  *(_DWORD *)(this + 180) = *(_DWORD *)(a2 + 180);
  return this;
}
