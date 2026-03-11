/*
 * func-name: sub_100D87A0
 * func-address: 0x100d87a0
 * callers: none
 * callees: 0x100c8c60, 0x101a2534
 */

CPasswordEB *sub_100D87A0()
{
  CPasswordEB *v0; // eax

  v0 = (CPasswordEB *)operator new(0x338u);
  if ( v0 )
    return CPasswordEB::CPasswordEB(v0, 0);
  else
    return 0;
}
