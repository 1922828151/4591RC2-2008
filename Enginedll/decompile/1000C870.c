/*
 * func-name: ??1ActorSelectedList@@QAE@XZ
 * func-address: 0x1000c870
 * callers: 0x10043960, 0x10048c00
 * callees: 0x101a2500
 */

void __thiscall ActorSelectedList::~ActorSelectedList(void **this)
{
  if ( this[8] )
    operator delete(this[8]);
  this[8] = 0;
  this[9] = 0;
  this[10] = 0;
  std::string::~string(this);
}
