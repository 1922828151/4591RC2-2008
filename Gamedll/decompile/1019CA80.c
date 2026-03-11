/*
 * func-name: ?SetCorrectPos@ControlledEstab@GameClient@@QAEXABVVector@@@Z_0
 * func-address: 0x1019ca80
 * callers: 0x10008e04
 * callees: 0x1000194c, 0x1000a3a8, 0x1000ed13, 0x10014132, 0x10019b41
 */

void __thiscall GameClient::ControlledEstab::SetCorrectPos(GameClient::ControlledEstab *this, const struct Vector *a2)
{
  GameClient::AdapterActor *v3; // ecx
  int v4; // eax
  GameClient::RobotManager *v5; // eax
  struct GameClient::Robot *Robot; // eax
  int v7; // [esp-4h] [ebp-8h]

  if ( *((_DWORD *)this + 114) )
  {
    v3 = (GameClient::AdapterActor *)*((_DWORD *)this + 75);
    if ( v3
      && !GameClient::AdapterActor::InCamFrustum(v3)
      && (v4 = sub_1000194C(0)) != 0
      && (v7 = *(_DWORD *)(v4 + 292),
          v5 = GameClient::RobotManager::Instance(),
          (Robot = GameClient::RobotManager::GetRobot(v5, v7)) != 0)
      && *((_DWORD *)Robot + 70) != *((_DWORD *)this + 3) )
    {
      (*(void (__thiscall **)(GameClient::ControlledEstab *, const struct Vector *))(*(_DWORD *)this + 36))(this, a2);
    }
    else
    {
      sub_10019B41((int)a2);
    }
  }
}
