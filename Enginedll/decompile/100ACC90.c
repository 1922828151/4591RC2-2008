/*
 * func-name: ?ResetCompositionString@CREIMEEditBox@@KAXXZ
 * func-address: 0x100acc90
 * callers: 0x100acec0, 0x100b3960
 * callees: 0x101a251c
 */

void __cdecl CREIMEEditBox::ResetCompositionString()
{
  CREIMEEditBox::s_nCompCaret = 0;
  byte_1123E238 = 1;
  *CREIMEEditBox::s_CompString = 0;
  memset(&CREIMEEditBox::s_abCompStringAttr, 0, 0x100u);
}
