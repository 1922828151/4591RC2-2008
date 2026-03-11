/*
 * func-name: sub_1001B720
 * func-address: 0x1001b720
 * callers: 0x100115c0
 * callees: 0x10017810
 */

int __thiscall sub_1001B720(int this)
{
  sub_10017810((_DWORD *)this);
  *(float *)(this + 132) = 3.4028235e38;
  *(_DWORD *)(this + 92) = 0;
  *(_DWORD *)(this + 96) = 0;
  *(float *)(this + 136) = 0.0;
  *(_DWORD *)(this + 100) = 0;
  *(_DWORD *)(this + 104) = 0;
  *(_BYTE *)(this + 140) = 0;
  *(_BYTE *)(this + 141) = 1;
  *(_DWORD *)this = &Opcode::HybridRayCollider::`vftable';
  return this;
}
