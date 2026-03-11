/*
 * func-name: ?SetCurrentMap@CBattleFieldDetailUI@@QAEXJ@Z_0
 * func-address: 0x10255bf0
 * callers: 0x10016c02
 * callees: 0x1000aa42, 0x1000f44d, 0x100177c4
 */

void __thiscall CBattleFieldDetailUI::SetCurrentMap(CBattleFieldDetailUI *this, int a2)
{
  *((_DWORD *)this + 968) = a2;
  CBattleFieldDetailUI::OnMapInfoUpdated(this, a2);
  GameClient::BattleFieldManager::RequestMapStatus(GameClient::BattleFieldManager::s_pInstance, a2);
  CBattleFieldDetailUI::OnMapStatusUpdated(this, a2);
}
