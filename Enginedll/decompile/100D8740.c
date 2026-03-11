/*
 * func-name: sub_100D8740
 * func-address: 0x100d8740
 * callers: none
 * callees: 0x100c86a0, 0x101a2534
 */

CREIMEEditBox *sub_100D8740()
{
  CREIMEEditBox *v0; // eax

  v0 = (CREIMEEditBox *)operator new(0x370u);
  if ( v0 )
    return CREIMEEditBox::CREIMEEditBox(v0, 0);
  else
    return 0;
}
