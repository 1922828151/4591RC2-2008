/*
 * func-name: ??0SampleWeapon@@QAE@ABV0@@Z_0
 * func-address: 0x100e5420
 * callers: 0x10008684
 * callees: none
 */

SampleWeapon *__thiscall SampleWeapon::SampleWeapon(SampleWeapon *this, const struct SampleWeapon *a2)
{
  Actor::Actor(this, a2);
  *(_DWORD *)this = &SampleWeapon::`vftable';
  *((_DWORD *)this + 263) = *((_DWORD *)a2 + 263);
  *((_DWORD *)this + 264) = *((_DWORD *)a2 + 264);
  *((_DWORD *)this + 265) = *((_DWORD *)a2 + 265);
  *((_DWORD *)this + 266) = *((_DWORD *)a2 + 266);
  *((_DWORD *)this + 267) = *((_DWORD *)a2 + 267);
  *((_DWORD *)this + 268) = *((_DWORD *)a2 + 268);
  *((float *)this + 269) = *((float *)a2 + 269);
  *((_DWORD *)this + 270) = *((_DWORD *)a2 + 270);
  *((_DWORD *)this + 271) = *((_DWORD *)a2 + 271);
  *((_DWORD *)this + 272) = *((_DWORD *)a2 + 272);
  *((_DWORD *)this + 273) = *((_DWORD *)a2 + 273);
  *((_DWORD *)this + 274) = *((_DWORD *)a2 + 274);
  *((_DWORD *)this + 275) = *((_DWORD *)a2 + 275);
  return this;
}
