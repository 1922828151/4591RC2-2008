/*
 * func-name: sub_1011FCF0
 * func-address: 0x1011fcf0
 * callers: 0x10002491
 * callees: 0x10009d68, 0x1000adc6, 0x1000cabd, 0x1000dafd, 0x100149ca, 0x102c9ea8
 */

void __thiscall sub_1011FCF0(int this, int a2, int a3)
{
  GameClient::EstabManager *v4; // eax
  struct GameClient::Establishment *Establishment; // eax
  GameClient::ControlledEstab *v6; // eax
  GameClient::ControlledEstab *v7; // esi
  int v8; // eax
  int v9; // ecx
  unsigned int v10; // [esp-4h] [ebp-1Ch]

  if ( *(_DWORD *)(this + 1480) != -1 )
  {
    v10 = *(_DWORD *)(this + 1480);
    v4 = GameClient::EstabManager::Instance();
    Establishment = GameClient::EstabManager::GetEstablishment(v4, v10);
    v6 = (GameClient::ControlledEstab *)_RTDynamicCast(
                                          Establishment,
                                          0,
                                          &GameClient::Establishment `RTTI Type Descriptor',
                                          &GameClient::ControlledEstab `RTTI Type Descriptor',
                                          0);
    v7 = v6;
    if ( v6 )
    {
      GameClient::ControlledEstab::SetControlEnable(v6, 1);
      GameClient::ControlledEstab::SetCameraEnable(v7, 1);
    }
  }
  v8 = sub_10009D68(a2);
  if ( v8 && *(_BYTE *)(v8 + 212) )
    *(_DWORD *)(this + 1496) = a2;
  v9 = *(_DWORD *)(this + 1296);
  *(_DWORD *)(this + 1480) = a3;
  *(_DWORD *)(this + 1476) = 3;
  Model::TransitionToAnimation(*(Model **)(this + 716), v9, 0.0, -1.0, 0.0, 1.0);
}
