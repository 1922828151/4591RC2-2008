/*
 * func-name: ??0Effect_Light@@QAE@ABV0@@Z_0
 * func-address: 0x1009f520
 * callers: 0x10016de7
 * callees: 0x1000727a
 */

Effect_Light *__thiscall Effect_Light::Effect_Light(Effect_Light *this, const struct Effect_Light *a2)
{
  Effect_Base::Effect_Base(this, a2);
  *(_DWORD *)this = &Effect_Light::`vftable';
  *((_DWORD *)this + 284) = *((_DWORD *)a2 + 284);
  *((float *)this + 285) = *((float *)a2 + 285);
  return this;
}
