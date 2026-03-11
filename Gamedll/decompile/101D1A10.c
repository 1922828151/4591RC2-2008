/*
 * func-name: ?CanBeEnable@Skill@GameClient@@UAE_NXZ_0
 * func-address: 0x101d1a10
 * callers: 0x10001edd
 * callees: 0x10003864, 0x1000653c, 0x10007766, 0x10008260, 0x10017a49, 0x102c9ea8
 */

bool __thiscall GameClient::Skill::CanBeEnable(GameClient::Skill *this)
{
  bool result; // al
  int v3; // esi
  int v4; // eax
  GameClient::Robot *v5; // eax
  GameClient::Robot *v6; // ebp
  int v7; // eax
  double v8; // st7
  double v9; // st6
  int v10; // ecx
  GameClient::Establishment *v11; // eax
  GameClient::Establishment *v12; // ebp

  if ( *((float *)this + 16) > 0.0 )
    return 0;
  v3 = *((_DWORD *)this + 2);
  v4 = *(_DWORD *)(v3 + 112);
  switch ( v4 )
  {
    case 2:
      v11 = (GameClient::Establishment *)_RTDynamicCast(
                                           *((_DWORD *)this + 5),
                                           0,
                                           &GameClient::WorldObject `RTTI Type Descriptor',
                                           &GameClient::Establishment `RTTI Type Descriptor',
                                           0);
      v12 = v11;
      if ( !v11 )
        return 0;
      if ( *((_DWORD *)this + 4) )
      {
        if ( (double)*(int *)(v3 + 160) > GameClient::Establishment::GetEstabEnergy(v11)
          || (double)*(int *)(v3 + 164) > GameClient::Establishment::GetHyperEnergy(v12) )
        {
          return 0;
        }
      }
      else
      {
        if ( (double)*(int *)(v3 + 160) * 0.1000000014901161 > GameClient::Establishment::GetEstabEnergy(v11) )
        {
LABEL_9:
          *((_DWORD *)this + 4) = 3;
          return 0;
        }
        if ( (double)*(int *)(v3 + 164) * 0.1000000014901161 > GameClient::Establishment::GetHyperEnergy(v12) )
        {
          *((_DWORD *)this + 4) = 3;
          return 0;
        }
      }
      return 1;
    case 1:
      v5 = (GameClient::Robot *)_RTDynamicCast(
                                  *((_DWORD *)this + 5),
                                  0,
                                  &GameClient::WorldObject `RTTI Type Descriptor',
                                  &GameClient::Robot `RTTI Type Descriptor',
                                  0);
      v6 = v5;
      if ( !v5 )
        return 0;
      if ( *((_DWORD *)this + 4) )
      {
        if ( (double)*(int *)(v3 + 160) > GameClient::Robot::GetEnergy(v5) )
          return 0;
        if ( (double)*(int *)(v3 + 164) > GameClient::Robot::GetExEnergy(v6) )
          return 0;
      }
      else if ( (double)*(int *)(v3 + 160) * 0.1000000014901161 > GameClient::Robot::GetEnergy(v5)
             || (double)*(int *)(v3 + 164) * 0.1000000014901161 > GameClient::Robot::GetExEnergy(v6) )
      {
        goto LABEL_9;
      }
      break;
    case 3:
      v7 = _RTDynamicCast(
             *((_DWORD *)this + 5),
             0,
             &GameClient::WorldObject `RTTI Type Descriptor',
             &GameClient::Equip `RTTI Type Descriptor',
             0);
      if ( !v7 )
        return 0;
      v8 = *(float *)(v7 + 188);
      v9 = (double)*(int *)(v3 + 164);
      if ( *((_DWORD *)this + 4) )
      {
        if ( v9 > v8 )
          return 0;
      }
      else if ( v9 * 0.1000000014901161 > v8 )
      {
        *((_DWORD *)this + 4) = 3;
        return 0;
      }
      v6 = *(GameClient::Robot **)(v7 + 148);
      break;
    default:
      return 0;
  }
  if ( !v6 )
    return 0;
  v10 = *((_DWORD *)v6 + 92);
  if ( (v10 & 0x80) != 0 && !*(_BYTE *)(v3 + 116) )
    return 0;
  if ( (*((_DWORD *)v6 + 92) & 0x80) == 0 && !*(_BYTE *)(v3 + 117)
    || (v10 & 1) != 0 && !*(_BYTE *)(v3 + 118)
    || (v10 & 0x200) != 0 && !*(_BYTE *)(v3 + 119)
    || *((_DWORD *)v6 + 88) == 1 && !*(_BYTE *)(v3 + 120) )
  {
    return 0;
  }
  if ( !*(_BYTE *)(v3 + 121) )
    return 1;
  if ( (*((_DWORD *)v6 + 92) & 0x80) == 0 )
    return 0;
  result = GameClient::Robot::IsContract(v6, 8u);
  if ( result )
    return 1;
  return result;
}
