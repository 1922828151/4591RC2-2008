/*
 * func-name: sub_100CBE90
 * func-address: 0x100cbe90
 * callers: 0x100cd200, 0x100cd620, 0x100cd7f0
 * callees: 0x100c7520
 */

int __thiscall sub_100CBE90(int this, int a2)
{
  CREStatic::CREStatic((CREStatic *)this, 0);
  *(_DWORD *)(this + 112) = a2;
  *(_DWORD *)(this + 700) = 0;
  *(_DWORD *)(this + 704) = 0;
  *(_BYTE *)(this + 708) = 0;
  *(_BYTE *)(this + 709) = 0;
  *(_DWORD *)(this + 144) = 0;
  *(_DWORD *)this = &CREab::`vftable';
  *(_DWORD *)(this + 140) = 15;
  return this;
}
