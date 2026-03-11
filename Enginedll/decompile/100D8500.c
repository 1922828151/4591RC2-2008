/*
 * func-name: sub_100D8500
 * func-address: 0x100d8500
 * callers: none
 * callees: 0x100cb5e0, 0x101a2534
 */

CREButton *sub_100D8500()
{
  CREButton *v0; // eax

  v0 = (CREButton *)operator new(0x330u);
  if ( v0 )
    return CREButton::CREButton(v0, 0);
  else
    return 0;
}
