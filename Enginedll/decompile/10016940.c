/*
 * func-name: ?GetVolume@AudioDevice@@QAEMXZ
 * func-address: 0x10016940
 * callers: none
 * callees: none
 */

double __thiscall AudioDevice::GetVolume(AudioDevice *this)
{
  return *((float *)this + 3);
}
