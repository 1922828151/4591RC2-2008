/*
 * func-name: ??0HUDSystem@@QAE@ABV0@@Z_0
 * func-address: 0x100edfd0
 * callers: 0x10011969
 * callees: 0x100197e0
 */

HUDSystem *__thiscall HUDSystem::HUDSystem(HUDSystem *this, const struct HUDSystem *a2)
{
  *(_BYTE *)this = *(_BYTE *)a2;
  sub_100197E0((int)a2 + 4);
  return this;
}
