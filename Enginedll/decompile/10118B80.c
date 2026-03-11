/*
 * func-name: ??0RenderBase@@QAE@XZ
 * func-address: 0x10118b80
 * callers: 0x10016b70, 0x10016d80, 0x10029960, 0x1008f370, 0x100df7d0, 0x10122c20, 0x10127f50, 0x10137010, 0x1013a9b0, 0x1013f3a0, 0x1016e600
 * callees: 0x1002ba70, 0x10118a00
 */

RenderBase *__thiscall RenderBase::RenderBase(RenderBase *this)
{
  struct RenderCallbackManager *v2; // eax
  int v4; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)this = &RenderBase::`vftable';
  v4 = (int)this;
  v2 = RenderCallbackManager::Instance();
  sub_1002BA70(v2, &v4);
  return this;
}
