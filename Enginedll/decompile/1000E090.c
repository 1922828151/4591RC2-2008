/*
 * func-name: ??4ActorSelectedList@@QAEAAV0@ABV0@@Z
 * func-address: 0x1000e090
 * callers: none
 * callees: 0x1000d550
 */

void *__thiscall ActorSelectedList::operator=(void *this, int a2)
{
  std::string::operator=(this, a2);
  std::vector<Actor *>::operator=((int)this + 28, a2 + 28);
  return this;
}
