/*
 * func-name: ?SetCorrectRotation@ControlledEstab@GameClient@@QAEXABVMatrix@@@Z_0
 * func-address: 0x1019cb00
 * callers: 0x10003909
 * callees: 0x1000194c, 0x1000a3a8, 0x1000ed13, 0x10014132, 0x1001419b
 */

void __thiscall GameClient::ControlledEstab::SetCorrectRotation(
        GameClient::ControlledEstab *this,
        const struct Matrix *a2)
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
      (*(void (__thiscall **)(GameClient::ControlledEstab *, const struct Matrix *))(*(_DWORD *)this + 40))(this, a2);
    }
    else
    {
      sub_1001419B((int)a2);
    }
  }
}
