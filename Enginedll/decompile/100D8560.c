/*
 * func-name: sub_100D8560
 * func-address: 0x100d8560
 * callers: none
 * callees: 0x10156da0, 0x101a2534
 */

CSeperateLine *sub_100D8560()
{
  CSeperateLine *v0; // eax

  v0 = (CSeperateLine *)operator new(0x220u);
  if ( v0 )
    return CSeperateLine::CSeperateLine(v0, 0);
  else
    return 0;
}
