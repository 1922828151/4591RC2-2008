/*
 * func-name: ?OnLeave@EnterEstabEffectArea@GameClient@@UAEXJ@Z_0
 * func-address: 0x101a2e60
 * callers: 0x10011914
 * callees: 0x10006a19, 0x1000a3a8, 0x1000adc6, 0x1000dafd, 0x1000ed13, 0x10016a4f
 */

void __thiscall GameClient::EnterEstabEffectArea::OnLeave(GameClient::EnterEstabEffectArea *this, int a2)
{
  GameClient::RobotManager *v3; // eax
  GameClient::WorldObject *Robot; // eax
  GameClient::WorldObject *v5; // esi
  int v6; // eax
  int v7; // esi
  GameClient::EstabManager *v8; // eax
  struct GameClient::Establishment *Establishment; // eax
  CDlgMgr *v10; // eax
  unsigned int v11; // [esp+4h] [ebp-Ch]

  v3 = GameClient::RobotManager::Instance();
  Robot = GameClient::RobotManager::GetRobot(v3, a2);
  v5 = Robot;
  if ( Robot && GameClient::WorldObject::IsLocal(Robot) )
  {
    v6 = *((_DWORD *)v5 + 228);
    *((_DWORD *)v5 + 72) = -1;
    if ( v6 != -1 && v6 == *((_DWORD *)this + 1) )
    {
      v7 = sub_10016A4F(*((_DWORD *)v5 + 4));
      if ( v7 )
      {
        v11 = *((_DWORD *)this + 1);
        v8 = GameClient::EstabManager::Instance();
        Establishment = GameClient::EstabManager::GetEstablishment(v8, v11);
        if ( Establishment )
          (*(void (__thiscall **)(struct GameClient::Establishment *, int))(*(_DWORD *)Establishment + 104))(
            Establishment,
            v7);
      }
    }
    v10 = (CDlgMgr *)CDlgMgr::Instance();
    CDlgMgr::ShowDialog(v10);
  }
}
