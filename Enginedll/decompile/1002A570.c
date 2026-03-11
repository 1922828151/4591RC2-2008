/*
 * func-name: ??0Prefab@@QAE@ABV0@@Z
 * func-address: 0x1002a570
 * callers: 0x1005b060, 0x1005b0e0, 0x1005e940, 0x10090f70, 0x1009a9a0
 * callees: 0x100233a0, 0x10029dd0
 */

Prefab *__thiscall Prefab::Prefab(Prefab *this, const struct Prefab *a2)
{
  Actor::Actor(this, a2);
  *(_DWORD *)this = &Prefab::`vftable';
  *((_BYTE *)this + 1052) = *((_BYTE *)a2 + 1052);
  *((_BYTE *)this + 1053) = *((_BYTE *)a2 + 1053);
  *((float *)this + 264) = *((float *)a2 + 264);
  *((float *)this + 265) = *((float *)a2 + 265);
  *((_DWORD *)this + 266) = *((_DWORD *)a2 + 266);
  *((float *)this + 267) = *((float *)a2 + 267);
  *((_DWORD *)this + 268) = *((_DWORD *)a2 + 268);
  *((_DWORD *)this + 269) = *((_DWORD *)a2 + 269);
  *((_BYTE *)this + 1080) = *((_BYTE *)a2 + 1080);
  *((float *)this + 271) = *((float *)a2 + 271);
  *((float *)this + 272) = 0.0;
  *((float *)this + 273) = 0.0;
  *((float *)this + 274) = 0.0;
  *((float *)this + 276) = 0.0;
  *((float *)this + 277) = 0.0;
  *((float *)this + 278) = 0.0;
  *((float *)this + 280) = 0.0;
  *((float *)this + 281) = 0.0;
  *((float *)this + 282) = 0.0;
  *((float *)this + 284) = 0.0;
  *((float *)this + 285) = 0.0;
  *((float *)this + 286) = 0.0;
  qmemcpy((char *)this + 1088, (char *)a2 + 1088, 0x40u);
  sub_100233A0((_DWORD *)this + 288, (int)a2 + 1152);
  *((_DWORD *)this + 292) = *((_DWORD *)a2 + 292);
  return this;
}
