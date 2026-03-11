/*
 * func-name: ?MoveEdgeLine@CBattleFieldDetailUI@@IAEXXZ_0
 * func-address: 0x10253ef0
 * callers: 0x10009fcf
 * callees: none
 */

void __thiscall CBattleFieldDetailUI::MoveEdgeLine(CBattleFieldDetailUI *this)
{
  struct CREControl *Control; // edi
  struct CREControl *v3; // edi
  struct CREControl *v4; // edi
  struct CREControl *v5; // edi

  Control = CREDialog::GetControl(this, 4096);
  (*(void (__thiscall **)(struct CREControl *, _DWORD, _DWORD))(*(_DWORD *)Control + 156))(Control, 0, 0);
  (*(void (__thiscall **)(struct CREControl *, int, _DWORD))(*(_DWORD *)Control + 160))(
    Control,
    1,
    *((_DWORD *)this + 176));
  v3 = CREDialog::GetControl(this, 4097);
  (*(void (__thiscall **)(struct CREControl *, _DWORD, _DWORD))(*(_DWORD *)v3 + 156))(v3, 0, 0);
  (*(void (__thiscall **)(struct CREControl *, _DWORD, int))(*(_DWORD *)v3 + 160))(v3, *((_DWORD *)this + 175), 1);
  v4 = CREDialog::GetControl(this, 4098);
  (*(void (__thiscall **)(struct CREControl *, int, _DWORD))(*(_DWORD *)v4 + 156))(v4, *((_DWORD *)this + 175) - 1, 0);
  (*(void (__thiscall **)(struct CREControl *, int, _DWORD))(*(_DWORD *)v4 + 160))(v4, 1, *((_DWORD *)this + 176));
  v5 = CREDialog::GetControl(this, 4099);
  (*(void (__thiscall **)(struct CREControl *, _DWORD, int))(*(_DWORD *)v5 + 156))(v5, 0, *((_DWORD *)this + 176) - 1);
  (*(void (__thiscall **)(struct CREControl *, _DWORD, int))(*(_DWORD *)v5 + 160))(v5, *((_DWORD *)this + 175), 1);
}
