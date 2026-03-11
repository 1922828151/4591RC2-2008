/*
 * func-name: ?ChangeLevel@CRadarMapUI@@QAEXJ@Z_0
 * func-address: 0x1027bc20
 * callers: 0x1001929a
 * callees: none
 */

void __thiscall CRadarMapUI::ChangeLevel(CRadarMapUI *this, int a2)
{
  int v2; // ecx

  v2 = *((_DWORD *)this + 968);
  if ( v2 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 20))(v2, a2);
}
