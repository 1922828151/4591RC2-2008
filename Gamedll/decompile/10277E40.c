/*
 * func-name: ??0CMiniWorldMapUI@@QAE@XZ_0
 * func-address: 0x10277e40
 * callers: 0x1000b992
 * callees: 0x10003008, 0x1001893f
 */

CMiniWorldMapUI *__thiscall CMiniWorldMapUI::CMiniWorldMapUI(CMiniWorldMapUI *this)
{
  CTYDialog::CTYDialog(this);
  *(_DWORD *)this = &CMiniWorldMapUI::`vftable';
  *((_DWORD *)this + 971) = 1;
  *((_DWORD *)this + 22) = 20;
  *((_DWORD *)this + 959) = 9;
  CTYDialog::ShowDialog(this, 0, 0.0);
  *((_DWORD *)this + 42) = 2;
  CMiniWorldMapUI::InitComponent(this);
  CMiniWorldMapUI::Initialize(this);
  return this;
}
