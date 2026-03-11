/*
 * func-name: ??0CChatInputUI@@QAE@XZ_0
 * func-address: 0x10258b50
 * callers: 0x1001868d
 * callees: 0x10007928, 0x10008de1
 */

CChatInputUI *__thiscall CChatInputUI::CChatInputUI(CChatInputUI *this)
{
  CTYDialog::CTYDialog(this);
  *(_DWORD *)this = &CChatInputUI::`vftable';
  *((_DWORD *)this + 972) = 0;
  *((_DWORD *)this + 973) = 0;
  *((_DWORD *)this + 974) = 0;
  *((_DWORD *)this + 22) = 12;
  *((_DWORD *)this + 959) = 9;
  CTYDialog::ShowDialog(this, 0, 0.0);
  *((_DWORD *)this + 42) = 2;
  CChatInputUI::InitComponent(this);
  CChatInputUI::Initialize(this);
  return this;
}
