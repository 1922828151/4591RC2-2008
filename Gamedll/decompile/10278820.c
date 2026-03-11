/*
 * func-name: ??0COccupyEstabUI@@QAE@XZ_0
 * func-address: 0x10278820
 * callers: 0x10017b4d
 * callees: 0x100083af
 */

COccupyEstabUI *__thiscall COccupyEstabUI::COccupyEstabUI(COccupyEstabUI *this)
{
  CTYDialog::CTYDialog(this);
  *(_DWORD *)this = &COccupyEstabUI::`vftable';
  *((_DWORD *)this + 22) = 5;
  *((_DWORD *)this + 959) = 9;
  CTYDialog::ShowDialog(this, 0, 0.0);
  *((_DWORD *)this + 42) = 3;
  COccupyEstabUI::Initialize(this);
  return this;
}
