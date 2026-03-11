/*
 * func-name: ?SetText@CREEditBox@@QAEXPB_W_N@Z
 * func-address: 0x100ac3a0
 * callers: 0x1014a750
 * callees: 0x100a56d0, 0x100ac120
 */

void __thiscall CREEditBox::SetText(CREEditBox *this, wchar_t *a2, bool a3)
{
  CREEditBox::CUniBuffer::SetText((CREEditBox *)((char *)this + 532), a2);
  CREEditBox::PlaceCaret(this, *((_DWORD *)this + 135));
  if ( a3 )
    *((_DWORD *)this + 189) = 0;
  else
    *((_DWORD *)this + 189) = *((_DWORD *)this + 187);
}
