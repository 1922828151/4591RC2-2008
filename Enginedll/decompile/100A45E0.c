/*
 * func-name: ?UpdateRects@CREIMEEditBox@@UAEXXZ
 * func-address: 0x100a45e0
 * callers: none
 * callees: 0x100a4220
 */

void __thiscall CREIMEEditBox::UpdateRects(CREIMEEditBox *this)
{
  int v2; // edi

  v2 = *((_DWORD *)this + 26);
  CREEditBox::UpdateRects(this);
  *((_DWORD *)this + 26) = v2;
  SetRect((LPRECT)((char *)this + 860), 0, 0, 0, 0);
}
