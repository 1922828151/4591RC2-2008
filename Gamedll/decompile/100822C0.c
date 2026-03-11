/*
 * func-name: ?Clone@Effect_LaserParticle@@UAEXPAVActor@@_N@Z_0
 * func-address: 0x100822c0
 * callers: 0x100191b4
 * callees: 0x1001a988
 */

void __thiscall Effect_LaserParticle::Clone(Effect_LaserParticle *this, struct Actor *a2, bool a3)
{
  Effect_Base::Clone(this, a2, a3);
  *((_BYTE *)a2 + 1221) = *((_BYTE *)this + 1221);
  *((_BYTE *)a2 + 1220) = *((_BYTE *)this + 1220);
  *((float *)a2 + 285) = *((float *)this + 285);
  *((_DWORD *)a2 + 284) = *((_DWORD *)this + 284);
  *((float *)a2 + 294) = *((float *)this + 294);
  *((float *)a2 + 295) = *((float *)this + 295);
  *((float *)a2 + 296) = *((float *)this + 296);
  *((float *)a2 + 287) = *((float *)this + 287);
  *((float *)a2 + 288) = *((float *)this + 288);
  *((float *)a2 + 286) = *((float *)this + 286);
  *((float *)a2 + 289) = *((float *)this + 289);
  *((float *)a2 + 290) = *((float *)this + 290);
  *((float *)a2 + 291) = *((float *)this + 291);
  *((float *)a2 + 292) = *((float *)this + 292);
  *((float *)a2 + 293) = *((float *)this + 293);
  *((_BYTE *)a2 + 1200) = *((_BYTE *)this + 1200);
  *((float *)a2 + 301) = *((float *)this + 301);
  *((float *)a2 + 297) = *((float *)this + 297);
  *((float *)a2 + 298) = *((float *)this + 298);
  *((float *)a2 + 299) = *((float *)this + 299);
  *((_DWORD *)a2 + 304) = *((_DWORD *)this + 304);
  *((float *)a2 + 306) = *((float *)this + 306);
  *((float *)a2 + 307) = *((float *)this + 307);
  *((_DWORD *)a2 + 308) = *((_DWORD *)this + 308);
  *((_DWORD *)a2 + 309) = *((_DWORD *)this + 309);
  *((_DWORD *)a2 + 310) = *((_DWORD *)this + 310);
  *((_BYTE *)a2 + 1248) = *((_BYTE *)this + 1248);
  std::string::operator=(*((_DWORD *)a2 + 311) + 100, *((_DWORD *)this + 311) + 100);
}
