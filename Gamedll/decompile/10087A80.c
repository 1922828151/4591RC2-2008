/*
 * func-name: ?Clone@Effect_LightBeam@@UAEXPAVActor@@_N@Z_0
 * func-address: 0x10087a80
 * callers: 0x10007a3b
 * callees: 0x1001a988
 */

void __thiscall Effect_LightBeam::Clone(Effect_LightBeam *this, struct Actor *a2, bool a3)
{
  int v4; // ecx

  Effect_Base::Clone(this, a2, a3);
  *((_DWORD *)a2 + 284) = *((_DWORD *)this + 284);
  v4 = *((_DWORD *)a2 + 295);
  *((float *)a2 + 285) = *((float *)this + 285);
  *((float *)a2 + 287) = *((float *)this + 287);
  *((float *)a2 + 288) = *((float *)this + 288);
  *((float *)a2 + 289) = *((float *)this + 289);
  std::string::operator=(v4 + 100, *((_DWORD *)this + 295) + 100);
  *((float *)a2 + 286) = *((float *)this + 286);
  *((float *)a2 + 291) = *((float *)this + 291);
  *((float *)a2 + 290) = *((float *)this + 290);
  *((float *)a2 + 292) = *((float *)this + 292);
  *((float *)a2 + 293) = *((float *)this + 293);
  *((float *)a2 + 294) = *((float *)this + 294);
}
