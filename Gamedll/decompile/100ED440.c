/*
 * func-name: sub_100ED440
 * func-address: 0x100ed440
 * callers: 0x10012742
 * callees: 0x10005c54, 0x10008e72
 */

struct HUDBase *__thiscall sub_100ED440(struct HUDBase *this)
{
  HUDSystem *v2; // eax

  *(_DWORD *)this = &HUDBase::`vftable';
  v2 = HUDSystem::Instance();
  HUDSystem::AddHUD(v2, this);
  return this;
}
