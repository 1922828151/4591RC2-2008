/*
 * func-name: ??1FXSystem@@UAE@XZ
 * func-address: 0x1000aa70
 * callers: 0x1000ab70
 * callees: 0x100a0120, 0x100a01c0, 0x1017a0b0
 */

void __thiscall FXSystem::~FXSystem(FXSystem *this)
{
  FXManager *v2; // eax

  *(_DWORD *)this = &FXSystem::`vftable';
  v2 = FXManager::Instance();
  FXManager::RemoveSystem(v2, this);
  sub_1017A0B0((char *)this + 132);
}
