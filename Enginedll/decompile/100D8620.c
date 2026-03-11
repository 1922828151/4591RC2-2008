/*
 * func-name: sub_100D8620
 * func-address: 0x100d8620
 * callers: none
 * callees: 0x1014fff0, 0x101a2534
 */

CProgressBar *sub_100D8620()
{
  CProgressBar *v0; // eax

  v0 = (CProgressBar *)operator new(0x300u);
  if ( v0 )
    return CProgressBar::CProgressBar(v0, 0);
  else
    return 0;
}
