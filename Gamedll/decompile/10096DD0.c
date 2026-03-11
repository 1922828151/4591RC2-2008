/*
 * func-name: ??0Effect_ShadedParticles@@QAE@ABV0@@Z_0
 * func-address: 0x10096dd0
 * callers: 0x10012391
 * callees: none
 */

Effect_ShadedParticles *__thiscall Effect_ShadedParticles::Effect_ShadedParticles(
        Effect_ShadedParticles *this,
        const struct Effect_ShadedParticles *a2)
{
  Actor::Actor(this, a2);
  *(_DWORD *)this = &Effect_ShadedParticles::`vftable';
  *((_DWORD *)this + 263) = *((_DWORD *)a2 + 263);
  *((float *)this + 264) = *((float *)a2 + 264);
  *((float *)this + 265) = *((float *)a2 + 265);
  *((float *)this + 266) = *((float *)a2 + 266);
  *((float *)this + 267) = *((float *)a2 + 267);
  *((float *)this + 268) = *((float *)a2 + 268);
  *((float *)this + 269) = *((float *)a2 + 269);
  *((float *)this + 270) = *((float *)a2 + 270);
  *((float *)this + 271) = *((float *)a2 + 271);
  *((float *)this + 272) = *((float *)a2 + 272);
  *((float *)this + 273) = *((float *)a2 + 273);
  *((float *)this + 274) = *((float *)a2 + 274);
  *((float *)this + 275) = *((float *)a2 + 275);
  *((float *)this + 276) = *((float *)a2 + 276);
  *((float *)this + 277) = *((float *)a2 + 277);
  *((float *)this + 278) = *((float *)a2 + 278);
  *((_DWORD *)this + 279) = *((_DWORD *)a2 + 279);
  *((_DWORD *)this + 280) = *((_DWORD *)a2 + 280);
  *((_DWORD *)this + 281) = *((_DWORD *)a2 + 281);
  *((_DWORD *)this + 282) = *((_DWORD *)a2 + 282);
  std::string::string((char *)this + 1132, (char *)a2 + 1132);
  std::string::string((char *)this + 1160, (char *)a2 + 1160);
  *((_BYTE *)this + 1188) = *((_BYTE *)a2 + 1188);
  *((float *)this + 298) = *((float *)a2 + 298);
  *((_BYTE *)this + 1196) = *((_BYTE *)a2 + 1196);
  *((float *)this + 300) = *((float *)a2 + 300);
  *((_DWORD *)this + 301) = *((_DWORD *)a2 + 301);
  *((_BYTE *)this + 1208) = *((_BYTE *)a2 + 1208);
  *((_BYTE *)this + 1209) = *((_BYTE *)a2 + 1209);
  *((_DWORD *)this + 303) = *((_DWORD *)a2 + 303);
  *((_BYTE *)this + 1216) = *((_BYTE *)a2 + 1216);
  *((_DWORD *)this + 305) = *((_DWORD *)a2 + 305);
  *((_DWORD *)this + 306) = *((_DWORD *)a2 + 306);
  return this;
}
