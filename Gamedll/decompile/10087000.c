/*
 * func-name: ??0Effect_LightBeam@@QAE@ABV0@@Z_0
 * func-address: 0x10087000
 * callers: 0x1000e390
 * callees: 0x1000727a
 */

Effect_LightBeam *__thiscall Effect_LightBeam::Effect_LightBeam(
        Effect_LightBeam *this,
        const struct Effect_LightBeam *a2)
{
  Effect_LightBeam *result; // eax

  Effect_Base::Effect_Base(this, a2);
  *(_DWORD *)this = &Effect_LightBeam::`vftable';
  *((_DWORD *)this + 284) = *((_DWORD *)a2 + 284);
  *((float *)this + 285) = *((float *)a2 + 285);
  result = this;
  *((float *)this + 286) = *((float *)a2 + 286);
  *((float *)this + 287) = *((float *)a2 + 287);
  *((float *)this + 288) = *((float *)a2 + 288);
  *((float *)this + 289) = *((float *)a2 + 289);
  *((float *)this + 290) = *((float *)a2 + 290);
  *((float *)this + 291) = *((float *)a2 + 291);
  *((float *)this + 292) = *((float *)a2 + 292);
  *((float *)this + 293) = *((float *)a2 + 293);
  *((float *)this + 294) = *((float *)a2 + 294);
  *((_DWORD *)this + 295) = *((_DWORD *)a2 + 295);
  return result;
}
