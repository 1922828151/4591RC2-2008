/*
 * func-name: sub_100E8C00
 * func-address: 0x100e8c00
 * callers: 0x10011298
 * callees: 0x100192ef, 0x102c9d98
 */

SamplePlayer *__stdcall sub_100E8C00(struct World *a1)
{
  SamplePlayer *v1; // eax

  v1 = (SamplePlayer *)operator new(0x494u);
  if ( v1 )
    return SamplePlayer::SamplePlayer(v1, a1);
  else
    return 0;
}
