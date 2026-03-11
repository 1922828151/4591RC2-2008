/*
 * func-name: ?Show@CBattleFieldDetailUI@@QAEXJJ@Z_0
 * func-address: 0x10254150
 * callers: 0x10016a72
 * callees: 0x10009fcf
 */

void __thiscall CBattleFieldDetailUI::Show(CBattleFieldDetailUI *this, int a2, int a3)
{
  int i; // edi
  int v5; // ecx
  int j; // edi
  struct CREControl *Control; // eax
  int v8; // edx

  for ( i = 0; i < *((_DWORD *)this + 192); ++i )
  {
    v5 = *(_DWORD *)(*((_DWORD *)this + 191) + 4 * i);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 136))(v5, 0);
  }
  for ( j = 4096; j <= 4099; ++j )
  {
    Control = CREDialog::GetControl(this, j);
    (*(void (__thiscall **)(struct CREControl *, int))(*(_DWORD *)Control + 136))(Control, 1);
  }
  *((_BYTE *)this + 3892) = 1;
  *((_DWORD *)this + 175) = 366;
  *((_DWORD *)this + 176) = 342;
  CTYDialog::CenterDialog(this, 1, 1);
  v8 = *((_DWORD *)this + 174);
  *((_DWORD *)this + 977) = *((_DWORD *)this + 173);
  *((_DWORD *)this + 976) = a3;
  *((_DWORD *)this + 174) = a3;
  *((_DWORD *)this + 978) = v8;
  *((_DWORD *)this + 975) = a2;
  *((_DWORD *)this + 173) = a2;
  CTYDialog::MoveNestedDialog(this);
  *((_DWORD *)this + 175) = 4;
  *((_DWORD *)this + 176) = 4;
  *((float *)this + 974) = *(float *)&GSeconds;
  CBattleFieldDetailUI::MoveEdgeLine(this);
}
