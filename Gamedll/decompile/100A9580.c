/*
 * func-name: ??1Laser@@UAE@XZ_0
 * func-address: 0x100a9580
 * callers: 0x1000efc5
 * callees: 0x102c0750
 */

void __thiscall Laser::~Laser(Laser *this)
{
  *(_DWORD *)this = &Laser::`vftable';
  sub_102C0750((char *)this + 180);
  FXSystem::~FXSystem(this);
}
