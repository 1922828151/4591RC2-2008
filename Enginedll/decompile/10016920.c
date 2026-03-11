/*
 * func-name: ?GetSoundActiveCount@AudioDevice@@QBEKXZ
 * func-address: 0x10016920
 * callers: none
 * callees: none
 */

unsigned int __thiscall AudioDevice::GetSoundActiveCount(AudioDevice *this)
{
  return *((_DWORD *)this + 5);
}
