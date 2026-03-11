/*
 * func-name: sub_100D8800
 * func-address: 0x100d8800
 * callers: none
 * callees: 0x10157070, 0x101a2534
 */

CPaster *sub_100D8800()
{
  CPaster *v0; // eax

  v0 = (CPaster *)operator new(0x2A8u);
  if ( v0 )
    return CPaster::CPaster(v0, 0);
  else
    return 0;
}
