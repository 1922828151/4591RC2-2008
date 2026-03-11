/*
 * func-name: sub_100C7910
 * func-address: 0x100c7910
 * callers: 0x10005579
 * callees: 0x1000daf3, 0x102c9d50
 */

Effect_Base *__thiscall sub_100C7910(Effect_Base *this, char a2)
{
  *(_DWORD *)this = &Effect_WaterDecal::`vftable';
  Effect_Base::~Effect_Base(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
