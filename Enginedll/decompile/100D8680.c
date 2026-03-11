/*
 * func-name: sub_100D8680
 * func-address: 0x100d8680
 * callers: none
 * callees: 0x100cbba0, 0x101a2534
 */

CRECheckBox *sub_100D8680()
{
  CRECheckBox *v0; // eax

  v0 = (CRECheckBox *)operator new(0x354u);
  if ( v0 )
    return CRECheckBox::CRECheckBox(v0, 0);
  else
    return 0;
}
