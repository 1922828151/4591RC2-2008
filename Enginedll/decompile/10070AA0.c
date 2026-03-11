/*
 * func-name: ??1GUISystem@@QAE@XZ
 * func-address: 0x10070aa0
 * callers: 0x101b8fa0
 * callees: 0x1006fa60, 0x101a2500
 */

void __thiscall GUISystem::~GUISystem(void **this)
{
  sub_1006FA60((int)(this + 14));
  if ( this[5] )
    operator delete(this[5]);
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
}
