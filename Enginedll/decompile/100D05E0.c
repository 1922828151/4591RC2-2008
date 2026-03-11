/*
 * func-name: ??4ActorGroup@@QAEAAV0@ABV0@@Z
 * func-address: 0x100d05e0
 * callers: none
 * callees: 0x1000d550
 */

int __thiscall ActorGroup::operator=(int this, int a2)
{
  std::vector<Actor *>::operator=(this, a2);
  std::string::operator=(this + 16, a2 + 16);
  qmemcpy((void *)(this + 44), (const void *)(a2 + 44), 0x40u);
  return this;
}
