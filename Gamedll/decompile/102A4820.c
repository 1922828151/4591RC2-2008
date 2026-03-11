/*
 * func-name: ??0CVehicleRoofUI@@QAE@XZ_0
 * func-address: 0x102a4820
 * callers: 0x10004110
 * callees: 0x100071e9, 0x100136b5
 */

CVehicleRoofUI *__thiscall CVehicleRoofUI::CVehicleRoofUI(CVehicleRoofUI *this)
{
  CTYDialog::CTYDialog(this);
  *(_DWORD *)this = &CVehicleRoofUI::`vftable';
  *((_DWORD *)this + 22) = 8;
  *((_DWORD *)this + 959) = 9;
  CTYDialog::ShowDialog(this, 0, 0.0);
  *((_DWORD *)this + 42) = 3;
  CVehicleRoofUI::InitComponent(this);
  CVehicleRoofUI::Initialize(this);
  return this;
}
