/*
 * func-name: ??0Effect_LightDizzy@@QAE@ABV0@@Z_0
 * func-address: 0x10089650
 * callers: 0x10018c9b
 * callees: none
 */

Effect_LightDizzy *__thiscall Effect_LightDizzy::Effect_LightDizzy(
        Effect_LightDizzy *this,
        const struct Effect_LightDizzy *a2)
{
  Actor::Actor(this, a2);
  *(_DWORD *)this = &Effect_LightDizzy::`vftable';
  std::string::string((char *)this + 1052, (char *)a2 + 1052);
  std::string::string((char *)this + 1080, (char *)a2 + 1080);
  *((float *)this + 277) = *((float *)a2 + 277);
  *((float *)this + 278) = *((float *)a2 + 278);
  *((float *)this + 279) = *((float *)a2 + 279);
  *((float *)this + 280) = *((float *)a2 + 280);
  *((_DWORD *)this + 281) = *((_DWORD *)a2 + 281);
  *((float *)this + 282) = *((float *)a2 + 282);
  *((_DWORD *)this + 283) = *((_DWORD *)a2 + 283);
  *((_DWORD *)this + 284) = *((_DWORD *)a2 + 284);
  *((_DWORD *)this + 285) = *((_DWORD *)a2 + 285);
  *((_DWORD *)this + 286) = *((_DWORD *)a2 + 286);
  *((_DWORD *)this + 287) = *((_DWORD *)a2 + 287);
  *((_DWORD *)this + 288) = *((_DWORD *)a2 + 288);
  *((float *)this + 289) = *((float *)a2 + 289);
  *((float *)this + 290) = *((float *)a2 + 290);
  *((float *)this + 291) = *((float *)a2 + 291);
  *((float *)this + 292) = *((float *)a2 + 292);
  *((_BYTE *)this + 1172) = *((_BYTE *)a2 + 1172);
  return this;
}
