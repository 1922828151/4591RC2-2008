/*
 * func-name: ?GetSoundCount@AudioDevice@@QBEKXZ
 * func-address: 0x10018800
 * callers: none
 * callees: none
 */

unsigned int __thiscall AudioDevice::GetSoundCount(AudioDevice *this)
{
  return *((_DWORD *)this + 4);
}
