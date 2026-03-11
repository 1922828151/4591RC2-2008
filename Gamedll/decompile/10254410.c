/*
 * func-name: ?Tick@CBattleFieldDetailUI@@UAEXM@Z_0
 * func-address: 0x10254410
 * callers: 0x1001a2b7
 * callees: none
 */

void __thiscall CBattleFieldDetailUI::Tick(CBattleFieldDetailUI *this, float a2)
{
  int v2; // esi
  int v3; // ecx
  int v4; // esi
  int v5; // eax
  int v6; // eax
  Input *v7; // eax
  int v8; // eax

  v2 = dword_103B67B4 + 8;
  v3 = *(_DWORD *)(dword_103B67B4 + 8);
  if ( !v3 || (unsigned int)((*(_DWORD *)(dword_103B67B4 + 12) - v3) >> 2) <= 1 )
    _invalid_parameter_noinfo();
  v4 = *(_DWORD *)(*(_DWORD *)v2 + 4);
  v5 = Input::Instance(v4);
  Input::GetMask(v5);
  v6 = Input::Instance(v4);
  Input::SetMask(v6);
  v7 = (Input *)Input::Instance(v4);
  if ( Input::ControlJustReleased(v7) )
    (*(void (__thiscall **)(CBattleFieldDetailUI *))(*(_DWORD *)this + 28))(this);
  v8 = Input::Instance(v4);
  Input::SetMask(v8);
  CTYDialog::Tick(this, a2);
}
