/*
 * func-name: ??0CLoginUI@@QAE@XZ_0
 * func-address: 0x10276ee0
 * callers: 0x1000b8a2
 * callees: 0x10012f85
 */

CLoginUI *__thiscall CLoginUI::CLoginUI(CLoginUI *this)
{
  CTYDialog::CTYDialog(this);
  *(_DWORD *)this = &CLoginUI::`vftable';
  *((_DWORD *)this + 22) = 9;
  *((_DWORD *)this + 959) = 9;
  CTYDialog::ShowDialog(this, 0, 0.0);
  *((_DWORD *)this + 42) = 2;
  CLoginUI::Initialize(this);
  return this;
}
