/*
 * func-name: ?ConfirmBoard@ControlledEstab@GameClient@@UAE_NHPAVRobot@2@@Z_0
 * func-address: 0x1019c660
 * callers: 0x10019aab
 * callees: 0x10006a19, 0x1000c031, 0x10019b41
 */

bool __thiscall GameClient::ControlledEstab::ConfirmBoard(
        GameClient::ControlledEstab *this,
        int a2,
        struct GameClient::Robot *a3)
{
  bool result; // al
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // [esp+0h] [ebp-24h]
  int v11; // [esp+4h] [ebp-20h]
  int v12; // [esp+8h] [ebp-1Ch]
  _BYTE v13[12]; // [esp+Ch] [ebp-18h] BYREF
  _BYTE v14[12]; // [esp+18h] [ebp-Ch] BYREF

  result = GameClient::Establishment::ConfirmBoard(this, a2, a3);
  if ( result )
  {
    if ( GameClient::WorldObject::IsLocal(a3) && a2 == *(_DWORD *)(*((_DWORD *)this + 115) + 516) )
    {
      v5 = *((_DWORD *)this + 114);
      v6 = *((_DWORD *)this + 123);
      *((_DWORD *)this + 125) = v6;
      if ( v5 )
      {
        v7 = NxPhysics::Instance(*(_DWORD *)(v5 + 4), v6, v10, v11, v12);
        NxPhysics::SetActorCollisionGroup(v7);
        v8 = (*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(*((_DWORD *)this + 114) + 4) + 40))(
               *(_DWORD *)(*((_DWORD *)this + 114) + 4),
               v13);
        v9 = NxHelper::ToVector(v14, v8);
        sub_10019B41(v9);
      }
    }
    return 1;
  }
  return result;
}
