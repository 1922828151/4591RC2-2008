/*
 * func-name: sub_100D8860
 * func-address: 0x100d8860
 * callers: none
 * callees: 0x100c7850, 0x101a2534
 */

CRESlider *sub_100D8860()
{
  CRESlider *v0; // eax

  v0 = (CRESlider *)operator new(0x27Cu);
  if ( v0 )
    return CRESlider::CRESlider(v0, 0);
  else
    return 0;
}
