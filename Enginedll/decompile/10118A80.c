/*
 * func-name: ??1RenderDevice@@UAE@XZ
 * func-address: 0x10118a80
 * callers: 0x10118bb0
 * callees: 0x101a2500
 */

void __thiscall RenderDevice::~RenderDevice(void **this)
{
  *this = &RenderDevice::`vftable';
  std::string::~string(this + 420);
  std::string::~string(this + 413);
  if ( this[408] )
    operator delete(this[408]);
  this[408] = 0;
  this[409] = 0;
  this[410] = 0;
}
