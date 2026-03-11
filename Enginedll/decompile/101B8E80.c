/*
 * func-name: sub_101B8E80
 * func-address: 0x101b8e80
 * callers: 0x101b81c0
 * callees: 0x1006ab90, 0x101a253a
 */

void __cdecl sub_101B8E80()
{
  operator delete[]((void *)CREIMEEditBox::s_CompString);
  if ( dword_1123E23C )
    CREEditBox::CUniBuffer::_ScriptStringFree(&dword_1123E23C);
}
