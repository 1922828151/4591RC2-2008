/*
 * func-name: sub_100D85C0
 * func-address: 0x100d85c0
 * callers: none
 * callees: 0x100c87e0, 0x101a2534
 */

CPictureLabel *sub_100D85C0()
{
  CPictureLabel *v0; // eax

  v0 = (CPictureLabel *)operator new(0x40Cu);
  if ( v0 )
    return CPictureLabel::CPictureLabel(v0, 0, D3DBLEND_SRCALPHA, D3DBLEND_INVSRCALPHA);
  else
    return 0;
}
