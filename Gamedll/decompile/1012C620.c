/*
 * func-name: ??0HookAlarmArea@@QAE@ABV0@@Z_0
 * func-address: 0x1012c620
 * callers: 0x1000b627
 * callees: none
 */

HookAlarmArea *__thiscall HookAlarmArea::HookAlarmArea(HookAlarmArea *this, const struct HookAlarmArea *a2)
{
  Actor::Actor(this, a2);
  *(_DWORD *)this = &HookAlarmArea::`vftable';
  std::string::string((char *)this + 1052, (char *)a2 + 1052);
  std::string::string((char *)this + 1080, (char *)a2 + 1080);
  *((_DWORD *)this + 277) = *((_DWORD *)a2 + 277);
  *((_DWORD *)this + 278) = *((_DWORD *)a2 + 278);
  std::string::string((char *)this + 1116, (char *)a2 + 1116);
  std::string::string((char *)this + 1144, (char *)a2 + 1144);
  *((_DWORD *)this + 293) = *((_DWORD *)a2 + 293);
  *((_DWORD *)this + 294) = *((_DWORD *)a2 + 294);
  *((float *)this + 295) = *((float *)a2 + 295);
  *((float *)this + 296) = *((float *)a2 + 296);
  *((_DWORD *)this + 297) = *((_DWORD *)a2 + 297);
  *((_DWORD *)this + 298) = *((_DWORD *)a2 + 298);
  *((_DWORD *)this + 299) = *((_DWORD *)a2 + 299);
  return this;
}
