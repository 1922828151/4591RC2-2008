/*
 * func-name: sub_101B8E40
 * func-address: 0x101b8e40
 * callers: 0x101b8250
 * callees: 0x1006ab90, 0x101a253a
 */

void __cdecl sub_101B8E40()
{
  operator delete[]((void *)CMLIMEEditBox::s_CompString);
  if ( dword_1123E220 )
    CREEditBox::CUniBuffer::_ScriptStringFree(&dword_1123E220);
}
