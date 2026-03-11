/*
 * func-name: sub_100D8440
 * func-address: 0x100d8440
 * callers: none
 * callees: 0x100ccaf0, 0x101a2534
 */

CTYDialog *sub_100D8440()
{
  CTYDialog *v0; // eax

  v0 = (CTYDialog *)operator new(0xF20u);
  if ( v0 )
    return CTYDialog::CTYDialog(v0);
  else
    return 0;
}
