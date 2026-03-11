/*
 * func-name: ??0SenceBackgroundMusicPlayer@@QAE@ABV0@@Z_0
 * func-address: 0x100e8ca0
 * callers: 0x10015f3c
 * callees: none
 */

SenceBackgroundMusicPlayer *__thiscall SenceBackgroundMusicPlayer::SenceBackgroundMusicPlayer(
        SenceBackgroundMusicPlayer *this,
        const struct SenceBackgroundMusicPlayer *a2)
{
  Actor::Actor(this, a2);
  *(_DWORD *)this = &SenceBackgroundMusicPlayer::`vftable';
  std::string::string((char *)this + 1052, (char *)a2 + 1052);
  *((float *)this + 270) = *((float *)a2 + 270);
  std::string::string((char *)this + 1084, (char *)a2 + 1084);
  return this;
}
