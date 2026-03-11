/*
 * func-name: ??0ActorInstancer@@QAE@ABV0@@Z
 * func-address: 0x10054aa0
 * callers: none
 * callees: 0x10029dd0
 */

ActorInstancer *__thiscall ActorInstancer::ActorInstancer(ActorInstancer *this, const struct ActorInstancer *a2)
{
  Actor::Actor(this, a2);
  *(_DWORD *)this = &ActorInstancer::`vftable';
  *((_BYTE *)this + 1052) = *((_BYTE *)a2 + 1052);
  *((_BYTE *)this + 1053) = *((_BYTE *)a2 + 1053);
  std::string::string((char *)this + 1056, (char *)a2 + 1056);
  std::string::string((char *)this + 1084, (char *)a2 + 1084);
  return this;
}
