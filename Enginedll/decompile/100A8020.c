/*
 * func-name: ?ResetCompositionString@CMLIMEEditBox@@KAXXZ
 * func-address: 0x100a8020
 * callers: 0x100b4480, 0x100ca110
 * callees: 0x101a251c
 */

void __cdecl CMLIMEEditBox::ResetCompositionString()
{
  CMLIMEEditBox::s_nCompCaret = 0;
  byte_1123E21C = 1;
  *CMLIMEEditBox::s_CompString = 0;
  memset(&CMLIMEEditBox::s_abCompStringAttr, 0, 0x100u);
}
