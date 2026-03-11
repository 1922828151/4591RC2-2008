/*
 * func-name: sub_102619A0
 * func-address: 0x102619a0
 * callers: 0x1000cf7c
 * callees: 0x10013967
 */

int __thiscall sub_102619A0(int this, int a2)
{
  char v4; // [esp+Fh] [ebp-11h] BYREF
  int v5; // [esp+10h] [ebp-10h]
  int v6; // [esp+1Ch] [ebp-4h]

  v5 = this;
  CREControl::CREControl((CREControl *)this, 0);
  *(_DWORD *)this = &CCorpGroupList::`vftable';
  *(_DWORD *)(this + 536) = 0;
  *(_DWORD *)(this + 540) = 0;
  *(_BYTE *)(this + 560) = 0;
  v6 = 0;
  *(_DWORD *)(this + 584) = 0;
  *(_DWORD *)(this + 588) = 0;
  *(_DWORD *)(this + 592) = 0;
  LOBYTE(v6) = 1;
  sub_10013967((int)&v4, (int)&v4);
  return this;
}
