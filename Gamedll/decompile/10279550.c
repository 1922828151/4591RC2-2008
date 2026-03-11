/*
 * func-name: ??0CPowerTransportUI@@QAE@XZ_0
 * func-address: 0x10279550
 * callers: 0x1000b74e
 * callees: 0x10002446
 */

CPowerTransportUI *__thiscall CPowerTransportUI::CPowerTransportUI(CPowerTransportUI *this)
{
  CTYDialog::CTYDialog(this);
  *(_DWORD *)this = &CPowerTransportUI::`vftable';
  *((_DWORD *)this + 22) = 7;
  *((_DWORD *)this + 959) = 9;
  CTYDialog::ShowDialog(this, 0, 0.0);
  *((_DWORD *)this + 42) = 3;
  CPowerTransportUI::Initialize(this);
  return this;
}
