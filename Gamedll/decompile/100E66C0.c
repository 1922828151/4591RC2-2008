/*
 * func-name: ??0SampleWeapon@@QAE@PAVWorld@@@Z_0
 * func-address: 0x100e66c0
 * callers: 0x100198ad
 * callees: none
 */

SampleWeapon *__thiscall SampleWeapon::SampleWeapon(SampleWeapon *this, struct World *a2)
{
  Actor::Actor(this, a2);
  *(_DWORD *)this = &SampleWeapon::`vftable';
  *((float *)this + 265) = 0.0;
  *((float *)this + 266) = 0.0;
  *((float *)this + 267) = 0.0;
  *((_DWORD *)this + 263) = 0;
  *((_DWORD *)this + 264) = 0;
  *((float *)this + 269) = 0.2;
  *((_DWORD *)this + 273) = 0;
  *((_DWORD *)this + 274) = 0;
  *((_DWORD *)this + 275) = 0;
  *((_DWORD *)this + 268) = 100;
  *((_DWORD *)this + 270) = -1;
  *((_DWORD *)this + 271) = -1;
  *((_DWORD *)this + 272) = -1;
  *((_BYTE *)this + 1009) = 1;
  return this;
}
