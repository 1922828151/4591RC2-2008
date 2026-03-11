/*
 * func-name: ??0Effect_LaserParticle@@QAE@ABV0@@Z_0
 * func-address: 0x10081e30
 * callers: 0x1000848b
 * callees: 0x1000727a
 */

Effect_LaserParticle *__thiscall Effect_LaserParticle::Effect_LaserParticle(
        Effect_LaserParticle *this,
        const struct Effect_LaserParticle *a2)
{
  Effect_Base::Effect_Base(this, a2);
  *(_DWORD *)this = &Effect_LaserParticle::`vftable';
  *((_DWORD *)this + 284) = *((_DWORD *)a2 + 284);
  *((float *)this + 285) = *((float *)a2 + 285);
  *((float *)this + 286) = *((float *)a2 + 286);
  *((float *)this + 287) = *((float *)a2 + 287);
  *((float *)this + 288) = *((float *)a2 + 288);
  *((float *)this + 289) = *((float *)a2 + 289);
  *((float *)this + 290) = *((float *)a2 + 290);
  *((float *)this + 291) = *((float *)a2 + 291);
  *((float *)this + 292) = *((float *)a2 + 292);
  *((float *)this + 293) = *((float *)a2 + 293);
  *((float *)this + 294) = *((float *)a2 + 294);
  *((float *)this + 295) = *((float *)a2 + 295);
  *((float *)this + 296) = *((float *)a2 + 296);
  *((float *)this + 297) = *((float *)a2 + 297);
  *((float *)this + 298) = *((float *)a2 + 298);
  *((float *)this + 299) = *((float *)a2 + 299);
  *((_BYTE *)this + 1200) = *((_BYTE *)a2 + 1200);
  *((float *)this + 301) = *((float *)a2 + 301);
  *((_BYTE *)this + 1208) = *((_BYTE *)a2 + 1208);
  *((float *)this + 303) = *((float *)a2 + 303);
  *((_DWORD *)this + 304) = *((_DWORD *)a2 + 304);
  *((_BYTE *)this + 1220) = *((_BYTE *)a2 + 1220);
  *((_BYTE *)this + 1221) = *((_BYTE *)a2 + 1221);
  *((float *)this + 306) = *((float *)a2 + 306);
  *((float *)this + 307) = *((float *)a2 + 307);
  *((_DWORD *)this + 308) = *((_DWORD *)a2 + 308);
  *((_DWORD *)this + 309) = *((_DWORD *)a2 + 309);
  *((_DWORD *)this + 310) = *((_DWORD *)a2 + 310);
  *((_DWORD *)this + 311) = *((_DWORD *)a2 + 311);
  *((_BYTE *)this + 1248) = *((_BYTE *)a2 + 1248);
  return this;
}
