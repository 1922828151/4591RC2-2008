/*
 * func-name: ??4SLock@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x101d43c0
 * callers: 0x1000f3c6
 * callees: 0x1000ed31, 0x100145fb
 */

int __thiscall GameClient::SLock::operator=(int this, int a2)
{
  GameClient::Skill::operator=(a2);
  *(_DWORD *)(this + 668) = *(_DWORD *)(a2 + 668);
  *(_DWORD *)(this + 672) = *(_DWORD *)(a2 + 672);
  *(float *)(this + 676) = *(float *)(a2 + 676);
  *(_DWORD *)(this + 680) = *(_DWORD *)(a2 + 680);
  sub_1000ED31(a2 + 684);
  return this;
}
