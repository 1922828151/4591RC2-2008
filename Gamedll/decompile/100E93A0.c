/*
 * func-name: sub_100E93A0
 * func-address: 0x100e93a0
 * callers: 0x10013d0e
 * callees: 0x1000eb88, 0x102c9d98
 */

SenceBackgroundMusicPlayer *__stdcall sub_100E93A0(struct World *a1)
{
  SenceBackgroundMusicPlayer *v1; // eax

  v1 = (SenceBackgroundMusicPlayer *)operator new(0x458u);
  if ( v1 )
    return SenceBackgroundMusicPlayer::SenceBackgroundMusicPlayer(v1, a1);
  else
    return 0;
}
