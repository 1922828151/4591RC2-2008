/*
 * func-name: ?Clone@Effect_LightDizzy@@UAEXPAVActor@@_N@Z_0
 * func-address: 0x10089aa0
 * callers: 0x10003d46
 * callees: 0x10004200
 */

void __thiscall Effect_LightDizzy::Clone(Effect_LightDizzy *this, struct Actor *a2, bool a3)
{
  Actor::Clone(this, a2, a3);
  *((float *)a2 + 282) = *((float *)this + 282);
  *((float *)a2 + 280) = *((float *)this + 280);
  *((float *)a2 + 279) = *((float *)this + 279);
  *((float *)a2 + 278) = *((float *)this + 278);
  std::string::operator=((char *)a2 + 1052, (char *)this + 1052);
  *((_DWORD *)a2 + 288) = *((_DWORD *)this + 288);
  *((_DWORD *)a2 + 287) = *((_DWORD *)this + 287);
  *((_DWORD *)a2 + 283) = *((_DWORD *)this + 283);
  *((_DWORD *)a2 + 284) = *((_DWORD *)this + 284);
  *((_DWORD *)a2 + 285) = *((_DWORD *)this + 285);
  *((_DWORD *)a2 + 286) = *((_DWORD *)this + 286);
  Effect_LightDizzy::Refresh(this);
}
