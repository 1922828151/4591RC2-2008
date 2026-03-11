/*
 * func-name: ??0ActorGroup@@QAE@ABV0@@Z
 * func-address: 0x100d1ba0
 * callers: none
 * callees: 0x1000d4b0
 */

ActorGroup *__thiscall ActorGroup::ActorGroup(ActorGroup *this, const struct ActorGroup *a2)
{
  ActorGroup *result; // eax

  std::vector<Actor *>::vector<Actor *>(this, (int)a2);
  std::string::string((char *)this + 16, (char *)a2 + 16);
  *((float *)this + 11) = 0.0;
  *((float *)this + 12) = 0.0;
  *((float *)this + 13) = 0.0;
  *((float *)this + 15) = 0.0;
  result = this;
  *((float *)this + 16) = 0.0;
  *((float *)this + 17) = 0.0;
  *((float *)this + 19) = 0.0;
  *((float *)this + 20) = 0.0;
  *((float *)this + 21) = 0.0;
  *((float *)this + 23) = 0.0;
  *((float *)this + 24) = 0.0;
  *((float *)this + 25) = 0.0;
  qmemcpy((char *)this + 44, (char *)a2 + 44, 0x40u);
  return result;
}
