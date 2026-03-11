/*
 * func-name: ??0ActorSelectedList@@QAE@ABV0@@Z
 * func-address: 0x1000e030
 * callers: 0x10048c00
 * callees: 0x1000d4b0
 */

ActorSelectedList *__thiscall ActorSelectedList::ActorSelectedList(
        ActorSelectedList *this,
        const struct ActorSelectedList *a2)
{
  std::string::string(this, a2);
  std::vector<Actor *>::vector<Actor *>((_DWORD *)this + 7, (int)a2 + 28);
  return this;
}
