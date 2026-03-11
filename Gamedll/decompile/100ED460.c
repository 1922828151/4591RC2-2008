/*
 * func-name: sub_100ED460
 * func-address: 0x100ed460
 * callers: 0x1000d3cd
 * callees: 0x10008e72, 0x1000a8e4
 */

bool __thiscall sub_100ED460(struct HUDBase *this)
{
  HUDSystem *v1; // eax

  *(_DWORD *)this = &HUDBase::`vftable';
  v1 = HUDSystem::Instance();
  return HUDSystem::RemoveHUD(v1, this);
}
