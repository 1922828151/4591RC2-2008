/*
 * func-name: ??4SenceBackgroundMusicPlayer@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x100e8d60
 * callers: 0x1000e200
 * callees: none
 */

float *__thiscall SenceBackgroundMusicPlayer::operator=(float *this, int a2)
{
  Actor::operator=(a2);
  std::string::operator=(this + 263, a2 + 1052);
  this[270] = *(float *)(a2 + 1080);
  std::string::operator=(this + 271, a2 + 1084);
  return this;
}
