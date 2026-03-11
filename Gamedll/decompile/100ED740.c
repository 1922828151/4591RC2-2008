/*
 * func-name: sub_100ED740
 * func-address: 0x100ed740
 * callers: 0x10007888
 * callees: 0x10008e72, 0x1000a8e4, 0x102c9d50
 */

struct HUDBase *__thiscall sub_100ED740(struct HUDBase *this, char a2)
{
  HUDSystem *v3; // eax

  *(_DWORD *)this = &HUDBase::`vftable';
  v3 = HUDSystem::Instance();
  HUDSystem::RemoveHUD(v3, this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
