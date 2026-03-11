/*
 * func-name: ?ShowMapInfo@CRadarMapUI@@QAEX_N@Z_0
 * func-address: 0x1027ad20
 * callers: 0x10017373
 * callees: none
 */

void __thiscall CRadarMapUI::ShowMapInfo(CRadarMapUI *this, int a2)
{
  struct CREControl *Control; // eax
  struct CREControl *v4; // eax

  Control = CREDialog::GetControl(this, 3);
  (*(void (__thiscall **)(struct CREControl *, int))(*(_DWORD *)Control + 136))(Control, a2);
  v4 = CREDialog::GetControl(this, 4);
  (*(void (__thiscall **)(struct CREControl *, int))(*(_DWORD *)v4 + 136))(v4, a2);
}
