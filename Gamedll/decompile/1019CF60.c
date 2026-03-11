/*
 * func-name: ?ConfirmChangeSeat@ControlledEstab@GameClient@@UAE_NPAVRobot@2@H@Z_0
 * func-address: 0x1019cf60
 * callers: 0x10007982
 * callees: 0x10004b79, 0x10006a19, 0x100071c1
 */

bool __thiscall GameClient::ControlledEstab::ConfirmChangeSeat(
        GameClient::ControlledEstab *this,
        struct GameClient::Robot *a2,
        int a3)
{
  int v3; // ebx
  bool result; // al
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // [esp+0h] [ebp-Ch]
  int v10; // [esp+4h] [ebp-8h]
  int v11; // [esp+8h] [ebp-4h]

  v3 = *((_DWORD *)a2 + 71);
  result = GameClient::Establishment::ConfirmChangeSeat(this, a2, a3);
  if ( result )
  {
    if ( v3 == *(_DWORD *)(*((_DWORD *)this + 115) + 516) )
    {
      if ( GameClient::WorldObject::IsLocal(a2) )
      {
        v6 = *((_DWORD *)this + 114);
        v7 = *((_DWORD *)this + 124);
        *((_DWORD *)this + 125) = v7;
        if ( v6 )
        {
          v8 = NxPhysics::Instance(*(_DWORD *)(v6 + 4), v7, v9, v10, v11);
          NxPhysics::SetActorCollisionGroup(v8);
        }
      }
      if ( *((_DWORD *)this + 114) )
        sub_10004B79(0);
    }
    return 1;
  }
  return result;
}
