/*
 * func-name: ?Clone@Effect_DynamicLasers@@UAEXPAVActor@@_N@Z_0
 * func-address: 0x1007f2b0
 * callers: 0x1000bdca
 * callees: 0x1001a988
 */

void __thiscall Effect_DynamicLasers::Clone(Effect_DynamicLasers *this, struct Actor *a2, bool a3)
{
  int v4; // ecx

  Effect_Base::Clone(this, a2, a3);
  *((_DWORD *)a2 + 286) = *((_DWORD *)this + 286);
  v4 = *((_DWORD *)a2 + 284);
  *((float *)a2 + 287) = *((float *)this + 287);
  *((float *)a2 + 288) = *((float *)this + 288);
  *((float *)a2 + 289) = *((float *)this + 289);
  *((float *)a2 + 285) = *((float *)this + 285);
  std::string::operator=(v4 + 100, *((_DWORD *)this + 284) + 100);
}
