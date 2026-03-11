/*
 * func-name: ?Clone@Effect_ShadedParticles@@UAEXPAVActor@@_N@Z_0
 * func-address: 0x100972e0
 * callers: 0x1000bb63
 * callees: none
 */

void __thiscall Effect_ShadedParticles::Clone(Effect_ShadedParticles *this, struct Actor *a2, bool a3)
{
  Actor::Clone(this, a2, a3);
  *((_BYTE *)a2 + 1209) = *((_BYTE *)this + 1209);
  *((_BYTE *)a2 + 1208) = *((_BYTE *)this + 1208);
  *((float *)a2 + 264) = *((float *)this + 264);
  *((_DWORD *)a2 + 263) = *((_DWORD *)this + 263);
  *((_DWORD *)a2 + 279) = *((_DWORD *)this + 279);
  *((_DWORD *)a2 + 280) = *((_DWORD *)this + 280);
  *((_DWORD *)a2 + 281) = *((_DWORD *)this + 281);
  *((_DWORD *)a2 + 282) = *((_DWORD *)this + 282);
  *((float *)a2 + 273) = *((float *)this + 273);
  *((float *)a2 + 274) = *((float *)this + 274);
  *((float *)a2 + 275) = *((float *)this + 275);
  *((float *)a2 + 266) = *((float *)this + 266);
  *((float *)a2 + 267) = *((float *)this + 267);
  *((float *)a2 + 265) = *((float *)this + 265);
  *((float *)a2 + 268) = *((float *)this + 268);
  *((float *)a2 + 269) = *((float *)this + 269);
  *((float *)a2 + 270) = *((float *)this + 270);
  *((float *)a2 + 271) = *((float *)this + 271);
  *((float *)a2 + 272) = *((float *)this + 272);
  std::string::operator=((char *)a2 + 1132, (char *)this + 1132);
  *((_BYTE *)a2 + 1188) = *((_BYTE *)this + 1188);
  *((float *)a2 + 298) = *((float *)this + 298);
  *((float *)a2 + 276) = *((float *)this + 276);
  *((float *)a2 + 277) = *((float *)this + 277);
  *((float *)a2 + 278) = *((float *)this + 278);
  *((_DWORD *)a2 + 301) = *((_DWORD *)this + 301);
}
