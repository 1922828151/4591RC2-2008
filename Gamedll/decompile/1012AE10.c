/*
 * func-name: ??0HookEstablishment@@QAE@ABV0@@Z_0
 * func-address: 0x1012ae10
 * callers: 0x10011ec3
 * callees: none
 */

HookEstablishment *__thiscall HookEstablishment::HookEstablishment(
        HookEstablishment *this,
        const struct HookEstablishment *a2)
{
  Actor::Actor(this, a2);
  *(_DWORD *)this = &HookEstablishment::`vftable';
  std::string::string((char *)this + 1052, (char *)a2 + 1052);
  std::string::string((char *)this + 1080, (char *)a2 + 1080);
  std::string::string((char *)this + 1108, (char *)a2 + 1108);
  std::string::string((char *)this + 1136, (char *)a2 + 1136);
  *((_DWORD *)this + 291) = *((_DWORD *)a2 + 291);
  AnimationSet::AnimationSet(
    (HookEstablishment *)((char *)this + 1168),
    (const struct HookEstablishment *)((char *)a2 + 1168));
  std::string::string((char *)this + 1212, (char *)a2 + 1212);
  std::string::string((char *)this + 1240, (char *)a2 + 1240);
  *((_DWORD *)this + 317) = *((_DWORD *)a2 + 317);
  *((_DWORD *)this + 318) = *((_DWORD *)a2 + 318);
  *((_DWORD *)this + 319) = *((_DWORD *)a2 + 319);
  std::vector<Actor *>::vector<Actor *>((char *)this + 1280, (char *)a2 + 1280);
  *((_DWORD *)this + 324) = *((_DWORD *)a2 + 324);
  std::string::string((char *)this + 1300, (char *)a2 + 1300);
  std::string::string((char *)this + 1328, (char *)a2 + 1328);
  *((_DWORD *)this + 339) = *((_DWORD *)a2 + 339);
  std::string::string((char *)this + 1360, (char *)a2 + 1360);
  std::string::string((char *)this + 1388, (char *)a2 + 1388);
  *((_DWORD *)this + 354) = *((_DWORD *)a2 + 354);
  *((float *)this + 355) = *((float *)a2 + 355);
  *((float *)this + 356) = *((float *)a2 + 356);
  *((_DWORD *)this + 357) = *((_DWORD *)a2 + 357);
  *((_DWORD *)this + 358) = *((_DWORD *)a2 + 358);
  *((_DWORD *)this + 359) = *((_DWORD *)a2 + 359);
  return this;
}
