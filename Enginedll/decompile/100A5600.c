/*
 * func-name: ?Clear@CUniBuffer@CREEditBox@@QAEXXZ
 * func-address: 0x100a5600
 * callers: none
 * callees: none
 */

void __thiscall CREEditBox::CUniBuffer::Clear(CREEditBox::CUniBuffer *this)
{
  **(_WORD **)this = 0;
  *((_DWORD *)this + 2) = 0;
  *((_BYTE *)this + 16) = 1;
}
