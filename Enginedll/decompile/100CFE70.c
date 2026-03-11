/*
 * func-name: ??1ActorGroup@@QAE@XZ
 * func-address: 0x100cfe70
 * callers: 0x10109e10, 0x1010b430, 0x1010bc60, 0x1010d330
 * callees: 0x10109be0, 0x101a2500
 */

void __thiscall ActorGroup::~ActorGroup(void **this)
{
  ActorGroup::Destroy((ActorGroup *)this);
  std::string::~string(this + 4);
  if ( this[1] )
    operator delete(this[1]);
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
}
