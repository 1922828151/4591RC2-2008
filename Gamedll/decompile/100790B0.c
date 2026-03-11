/*
 * func-name: ??0CChatInputUI@@QAE@ABV0@@Z_0
 * func-address: 0x100790b0
 * callers: 0x100089a4
 * callees: 0x10009237
 */

CChatInputUI *__thiscall CChatInputUI::CChatInputUI(CChatInputUI *this, const struct CChatInputUI *a2)
{
  CTYDialog::CTYDialog(this, a2);
  *(_DWORD *)this = &CChatInputUI::`vftable';
  *((_DWORD *)this + 968) = *((_DWORD *)a2 + 968);
  *((_DWORD *)this + 969) = *((_DWORD *)a2 + 969);
  *((_DWORD *)this + 970) = *((_DWORD *)a2 + 970);
  sub_10009237((int)a2 + 3884);
  return this;
}
