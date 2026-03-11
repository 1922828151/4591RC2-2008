/*
 * func-name: ??0CEstablishmentUI@@QAE@XZ_0
 * func-address: 0x1026fc40
 * callers: 0x10016ea5
 * callees: 0x100091d8
 */

CEstablishmentUI *__thiscall CEstablishmentUI::CEstablishmentUI(CEstablishmentUI *this)
{
  CTYDialog::CTYDialog(this);
  *(_DWORD *)this = &CEstablishmentUI::`vftable';
  *((_DWORD *)this + 22) = 6;
  *((_DWORD *)this + 959) = 9;
  CTYDialog::ShowDialog(this, 0, 0.0);
  *((_DWORD *)this + 42) = 3;
  CEstablishmentUI::Initialize(this);
  *((_DWORD *)this + 968) = 0;
  return this;
}
