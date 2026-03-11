/*
 * func-name: ?ConfirmUnBoard@ControlledEstab@GameClient@@UAE_NHPAVRobot@2@@Z_0
 * func-address: 0x1019cee0
 * callers: 0x10017418
 * callees: 0x10004b79, 0x10006a19, 0x10015d52
 */

bool __thiscall GameClient::ControlledEstab::ConfirmUnBoard(
        GameClient::ControlledEstab *this,
        int a2,
        struct GameClient::Robot *a3)
{
  bool result; // al
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // [esp+0h] [ebp-Ch]
  int v9; // [esp+4h] [ebp-8h]
  int v10; // [esp+8h] [ebp-4h]

  result = GameClient::Establishment::ConfirmUnBoard(this, a2, a3);
  if ( result )
  {
    if ( a2 == *(_DWORD *)(*((_DWORD *)this + 115) + 516) )
    {
      if ( GameClient::WorldObject::IsLocal(a3) )
      {
        v5 = *((_DWORD *)this + 114);
        v6 = *((_DWORD *)this + 124);
        *((_DWORD *)this + 125) = v6;
        if ( v5 )
        {
          v7 = NxPhysics::Instance(*(_DWORD *)(v5 + 4), v6, v8, v9, v10);
          NxPhysics::SetActorCollisionGroup(v7);
        }
      }
      if ( *((_DWORD *)this + 114) )
        sub_10004B79(0);
    }
    return 1;
  }
  return result;
}
