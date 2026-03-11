/*
 * func-name: sub_100ECA00
 * func-address: 0x100eca00
 * callers: 0x100eb8b0, 0x100ed330, 0x100ed5c0, 0x100ed940
 * callees: 0x1017a0b0, 0x101a2500
 */

void __thiscall sub_100ECA00(int this)
{
  sub_1017A0B0(this + 40);
  if ( *(_DWORD *)(this + 4) )
    operator delete(*(void **)(this + 4));
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
