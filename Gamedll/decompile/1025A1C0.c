/*
 * func-name: ??0CChatMessageUI@@QAE@XZ_0
 * func-address: 0x1025a1c0
 * callers: 0x1000931d
 * callees: 0x10003bf7, 0x10018a84
 */

CChatMessageUI *__thiscall CChatMessageUI::CChatMessageUI(CChatMessageUI *this)
{
  CTYDialog::CTYDialog(this);
  *(_DWORD *)this = &CChatMessageUI::`vftable';
  *((_DWORD *)this + 22) = 11;
  *((_DWORD *)this + 959) = 9;
  CTYDialog::ShowDialog(this, 0, 0.0);
  *((_DWORD *)this + 42) = 2;
  CChatMessageUI::InitComponent(this);
  CChatMessageUI::Initialize(this);
  return this;
}
