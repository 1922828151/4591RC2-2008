/*
 * func-name: ?Clone@Effect_Laser@@UAEXPAVActor@@_N@Z_0
 * func-address: 0x100801f0
 * callers: 0x1000f6a0
 * callees: 0x1001a988
 */

void __thiscall Effect_Laser::Clone(Effect_Laser *this, struct Actor *a2, bool a3)
{
  Effect_Base::Clone(this, a2, a3);
  *((float *)a2 + 288) = *((float *)this + 288);
  *((float *)a2 + 286) = *((float *)this + 286);
  *((float *)a2 + 287) = *((float *)this + 287);
  *((float *)a2 + 284) = *((float *)this + 284);
  std::string::operator=(*((_DWORD *)a2 + 285) + 100, *((_DWORD *)this + 285) + 100);
  *((_BYTE *)a2 + 1156) = *((_BYTE *)this + 1156);
  *((_DWORD *)a2 + 267) = *((_DWORD *)this + 267);
  *((_DWORD *)a2 + 268) = *((_DWORD *)this + 268);
  *((_DWORD *)a2 + 269) = *((_DWORD *)this + 269);
  *((_DWORD *)a2 + 270) = *((_DWORD *)this + 270);
  *((_DWORD *)a2 + 271) = *((_DWORD *)this + 271);
  *((_DWORD *)a2 + 272) = *((_DWORD *)this + 272);
}
