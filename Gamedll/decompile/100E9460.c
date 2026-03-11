/*
 * func-name: sub_100E9460
 * func-address: 0x100e9460
 * callers: 0x1000f7cc
 * callees: 0x100035a8, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_100E9460(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x458u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))SenceBackgroundMusicPlayer::~SenceBackgroundMusicPlayer);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    SenceBackgroundMusicPlayer::~SenceBackgroundMusicPlayer((SenceBackgroundMusicPlayer *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
