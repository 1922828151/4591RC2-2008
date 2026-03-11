/*
 * func-name: sub_100D86E0
 * func-address: 0x100d86e0
 * callers: none
 * callees: 0x100c84a0, 0x101a2534
 */

CREEditBox *sub_100D86E0()
{
  CREEditBox *v0; // eax

  v0 = (CREEditBox *)operator new(0x318u);
  if ( v0 )
    return CREEditBox::CREEditBox(v0, 0);
  else
    return 0;
}
