/*
 * func-name: ??0CPasswordInputUI@@QAE@XZ_0
 * func-address: 0x10279030
 * callers: 0x1000d611
 * callees: 0x100148fd
 */

CPasswordInputUI *__thiscall CPasswordInputUI::CPasswordInputUI(CPasswordInputUI *this)
{
  CTYDialog::CTYDialog(this);
  *(_DWORD *)this = &CPasswordInputUI::`vftable';
  *((_DWORD *)this + 22) = 4;
  *((_DWORD *)this + 959) = 5;
  CTYDialog::ShowDialog(this, 0, 0.0);
  *((_DWORD *)this + 42) = 3;
  CPasswordInputUI::Initialize(this);
  return this;
}
