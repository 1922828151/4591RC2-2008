/*
 * func-name: ?Clone@Effect_MultiTexParticles@@UAEXPAVActor@@_N@Z_0
 * func-address: 0x1008c670
 * callers: 0x10018a39
 * callees: 0x1000b52d
 */

void __thiscall Effect_MultiTexParticles::Clone(Effect_MultiTexParticles *this, struct Actor *a2, bool a3)
{
  Actor::Clone(this, a2, a3);
  *((_BYTE *)a2 + 1225) = *((_BYTE *)this + 1225);
  *((_BYTE *)a2 + 1224) = *((_BYTE *)this + 1224);
  *((_DWORD *)a2 + 263) = *((_DWORD *)this + 263);
  *((float *)a2 + 266) = *((float *)this + 266);
  *((_DWORD *)a2 + 265) = *((_DWORD *)this + 265);
  *((_DWORD *)a2 + 282) = *((_DWORD *)this + 282);
  *((_DWORD *)a2 + 283) = *((_DWORD *)this + 283);
  *((_DWORD *)a2 + 284) = *((_DWORD *)this + 284);
  *((_DWORD *)a2 + 285) = *((_DWORD *)this + 285);
  *((float *)a2 + 276) = *((float *)this + 276);
  *((float *)a2 + 277) = *((float *)this + 277);
  *((float *)a2 + 278) = *((float *)this + 278);
  *((float *)a2 + 269) = *((float *)this + 269);
  *((float *)a2 + 270) = *((float *)this + 270);
  *((float *)a2 + 268) = *((float *)this + 268);
  *((float *)a2 + 271) = *((float *)this + 271);
  *((float *)a2 + 272) = *((float *)this + 272);
  *((float *)a2 + 273) = *((float *)this + 273);
  *((float *)a2 + 274) = *((float *)this + 274);
  *((float *)a2 + 275) = *((float *)this + 275);
  *((_DWORD *)a2 + 286) = *((_DWORD *)this + 286);
  std::string::operator=((char *)a2 + 1148, (char *)this + 1148);
  *((_BYTE *)a2 + 1204) = *((_BYTE *)this + 1204);
  *((float *)a2 + 302) = *((float *)this + 302);
  *((float *)a2 + 279) = *((float *)this + 279);
  *((float *)a2 + 280) = *((float *)this + 280);
  *((float *)a2 + 281) = *((float *)this + 281);
  *((_DWORD *)a2 + 305) = *((_DWORD *)this + 305);
  *((_BYTE *)a2 + 1226) = *((_BYTE *)this + 1226);
  *((_BYTE *)a2 + 1227) = *((_BYTE *)this + 1227);
  *((_BYTE *)a2 + 1228) = *((_BYTE *)this + 1228);
  *((float *)a2 + 308) = *((float *)this + 308);
  if ( !*((_DWORD *)this + 178) )
    sub_1000B52D((int)this + 1236);
}
