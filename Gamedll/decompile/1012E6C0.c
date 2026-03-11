/*
 * func-name: ?Clone@HookAlarmArea@@UAEXPAVActor@@_N@Z_0
 * func-address: 0x1012e6c0
 * callers: 0x1000c590
 * callees: none
 */

void __thiscall HookAlarmArea::Clone(HookAlarmArea *this, struct Actor *a2, bool a3)
{
  Actor::Clone(this, a2, a3);
  std::string::operator=((char *)a2 + 1052, (char *)this + 1052);
  std::string::operator=((char *)a2 + 1116, (char *)this + 1116);
  *((float *)a2 + 295) = *((float *)this + 295);
  *((float *)a2 + 296) = *((float *)this + 296);
  *((_DWORD *)a2 + 294) = *((_DWORD *)this + 294);
  *((float *)a2 + 295) = *((float *)this + 295);
  *((float *)a2 + 296) = *((float *)this + 296);
  *((_DWORD *)a2 + 297) = *((_DWORD *)this + 297);
  *((_DWORD *)a2 + 298) = *((_DWORD *)this + 298);
  *((_DWORD *)a2 + 299) = *((_DWORD *)this + 299);
}
