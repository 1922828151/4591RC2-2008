/*
 * func-name: ??0Effect_MultiTexParticles@@QAE@ABV0@@Z_0
 * func-address: 0x1008ee40
 * callers: 0x10007c3e
 * callees: 0x100056c8
 */

Effect_MultiTexParticles *__thiscall Effect_MultiTexParticles::Effect_MultiTexParticles(
        Effect_MultiTexParticles *this,
        const struct Effect_MultiTexParticles *a2)
{
  Actor::Actor(this, a2);
  *(_DWORD *)this = &Effect_MultiTexParticles::`vftable';
  *((_DWORD *)this + 263) = *((_DWORD *)a2 + 263);
  *((_DWORD *)this + 264) = *((_DWORD *)a2 + 264);
  *((_DWORD *)this + 265) = *((_DWORD *)a2 + 265);
  *((float *)this + 266) = *((float *)a2 + 266);
  *((_BYTE *)this + 1068) = *((_BYTE *)a2 + 1068);
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
  *((float *)this + 279) = *((float *)a2 + 279);
  *((float *)this + 280) = *((float *)a2 + 280);
  *((float *)this + 281) = *((float *)a2 + 281);
  *((_DWORD *)this + 282) = *((_DWORD *)a2 + 282);
  *((_DWORD *)this + 283) = *((_DWORD *)a2 + 283);
  *((_DWORD *)this + 284) = *((_DWORD *)a2 + 284);
  *((_DWORD *)this + 285) = *((_DWORD *)a2 + 285);
  *((_DWORD *)this + 286) = *((_DWORD *)a2 + 286);
  std::string::string((char *)this + 1148, (char *)a2 + 1148);
  std::string::string((char *)this + 1176, (char *)a2 + 1176);
  *((_BYTE *)this + 1204) = *((_BYTE *)a2 + 1204);
  *((float *)this + 302) = *((float *)a2 + 302);
  *((_BYTE *)this + 1212) = *((_BYTE *)a2 + 1212);
  *((float *)this + 304) = *((float *)a2 + 304);
  *((_DWORD *)this + 305) = *((_DWORD *)a2 + 305);
  *((_BYTE *)this + 1224) = *((_BYTE *)a2 + 1224);
  *((_BYTE *)this + 1225) = *((_BYTE *)a2 + 1225);
  *((_BYTE *)this + 1226) = *((_BYTE *)a2 + 1226);
  *((_BYTE *)this + 1227) = *((_BYTE *)a2 + 1227);
  *((_BYTE *)this + 1228) = *((_BYTE *)a2 + 1228);
  *((float *)this + 308) = *((float *)a2 + 308);
  sub_100056C8((int)a2 + 1236);
  *((_DWORD *)this + 313) = *((_DWORD *)a2 + 313);
  *((_BYTE *)this + 1256) = *((_BYTE *)a2 + 1256);
  *((_DWORD *)this + 315) = *((_DWORD *)a2 + 315);
  return this;
}
