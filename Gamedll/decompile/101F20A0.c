/*
 * func-name: ??0CChatMessageUI@@QAE@ABV0@@Z_0
 * func-address: 0x101f20a0
 * callers: 0x10003544
 * callees: none
 */

CChatMessageUI *__thiscall CChatMessageUI::CChatMessageUI(CChatMessageUI *this, const struct CChatMessageUI *a2)
{
  CTYDialog::CTYDialog(this, a2);
  *(_DWORD *)this = &CChatMessageUI::`vftable';
  *((_DWORD *)this + 968) = *((_DWORD *)a2 + 968);
  *((_DWORD *)this + 969) = *((_DWORD *)a2 + 969);
  return this;
}
