/*
 * func-name: ??1RenderBase@@QAE@XZ
 * func-address: 0x10118a60
 * callers: 0x1000d0c0, 0x100100e0, 0x10015030, 0x10016b90, 0x10016bd0, 0x10016da0, 0x10029960, 0x100299b0, 0x10029a00, 0x1002e490, 0x1002e500, 0x10030270, 0x1008f370, 0x1008f580, 0x100dd6d0, 0x10122c20, 0x10127f50, 0x10137030, 0x1013a9b0, 0x1013df40, 0x1013f3a0, 0x1013f480, 0x1016d6e0
 * callees: 0x1001f570, 0x10118a00
 */

void __thiscall RenderBase::~RenderBase(RenderBase *this)
{
  RenderCallbackManager *v1; // eax

  *(_DWORD *)this = &RenderBase::`vftable';
  v1 = RenderCallbackManager::Instance();
  RenderCallbackManager::RemoveCallback(v1, this);
}
