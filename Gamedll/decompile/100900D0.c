/*
 * func-name: ?Clone@Effect_ParticleSystem@@UAEXPAVActor@@_N@Z_0
 * func-address: 0x100900d0
 * callers: 0x1000eb24
 * callees: 0x1001a988
 */

void __thiscall Effect_ParticleSystem::Clone(Effect_ParticleSystem *this, struct Actor *a2, bool a3)
{
  Effect_Base::Clone(this, a2, a3);
  *((_BYTE *)a2 + 1241) = *((_BYTE *)this + 1241);
  *((_BYTE *)a2 + 1240) = *((_BYTE *)this + 1240);
  *((float *)a2 + 285) = *((float *)this + 285);
  *((_DWORD *)a2 + 284) = *((_DWORD *)this + 284);
  *((float *)a2 + 298) = *((float *)this + 298);
  *((float *)a2 + 299) = *((float *)this + 299);
  *((float *)a2 + 300) = *((float *)this + 300);
  *((float *)a2 + 290) = *((float *)this + 290);
  *((float *)a2 + 291) = *((float *)this + 291);
  *((float *)a2 + 287) = *((float *)this + 287);
  *((float *)a2 + 288) = *((float *)this + 288);
  *((float *)a2 + 289) = *((float *)this + 289);
  *((float *)a2 + 292) = *((float *)this + 292);
  *((float *)a2 + 293) = *((float *)this + 293);
  *((float *)a2 + 294) = *((float *)this + 294);
  *((float *)a2 + 295) = *((float *)this + 295);
  *((float *)a2 + 296) = *((float *)this + 296);
  *((float *)a2 + 297) = *((float *)this + 297);
  std::string::operator=(*((_DWORD *)a2 + 319) + 100, *((_DWORD *)this + 319) + 100);
  *((_BYTE *)a2 + 1216) = *((_BYTE *)this + 1216);
  *((float *)a2 + 305) = *((float *)this + 305);
  *((float *)a2 + 301) = *((float *)this + 301);
  *((float *)a2 + 302) = *((float *)this + 302);
  *((float *)a2 + 303) = *((float *)this + 303);
  *((_DWORD *)a2 + 309) = *((_DWORD *)this + 309);
  *((_BYTE *)a2 + 1242) = *((_BYTE *)this + 1242);
  *((_BYTE *)a2 + 1243) = *((_BYTE *)this + 1243);
  *((_BYTE *)a2 + 1232) = *((_BYTE *)this + 1232);
  *((float *)a2 + 311) = *((float *)this + 311);
  *((_DWORD *)a2 + 313) = *((_DWORD *)this + 313);
  *((_DWORD *)a2 + 314) = *((_DWORD *)this + 314);
  *((_DWORD *)a2 + 315) = *((_DWORD *)this + 315);
}
