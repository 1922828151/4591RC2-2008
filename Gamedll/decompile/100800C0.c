/*
 * func-name: ??0Effect_Laser@@QAE@ABV0@@Z_0
 * func-address: 0x100800c0
 * callers: 0x100190f6
 * callees: 0x1000727a
 */

Effect_Laser *__thiscall Effect_Laser::Effect_Laser(Effect_Laser *this, const struct Effect_Laser *a2)
{
  Effect_Laser *result; // eax

  Effect_Base::Effect_Base(this, a2);
  *(_DWORD *)this = &Effect_Laser::`vftable';
  *((float *)this + 284) = *((float *)a2 + 284);
  *((_DWORD *)this + 285) = *((_DWORD *)a2 + 285);
  *((float *)this + 286) = *((float *)a2 + 286);
  result = this;
  *((float *)this + 287) = *((float *)a2 + 287);
  *((float *)this + 288) = *((float *)a2 + 288);
  *((_BYTE *)this + 1156) = *((_BYTE *)a2 + 1156);
  return result;
}
