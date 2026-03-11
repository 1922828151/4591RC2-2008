/*
 * func-name: ?OnBegin@UpdateVehicleMove@GameClient@@UAEXAAVEvent@@@Z_0
 * func-address: 0x101a3ee0
 * callers: 0x1000d80f
 * callees: 0x10007455, 0x10008e6d, 0x1000a3a8, 0x1000adc6, 0x1000dafd, 0x1000ed13, 0x10014669, 0x102c9ea8
 */

void __thiscall GameClient::UpdateVehicleMove::OnBegin(GameClient::UpdateVehicleMove *this, struct Event *a2)
{
  struct BinStream *Stream; // eax
  int v3; // ecx
  int v4; // edx
  GameClient::WheelVehicle *v5; // ecx
  GameClient::EstabManager *v6; // eax
  struct GameClient::Establishment *Establishment; // eax
  GameClient::ControlledEstab *v8; // eax
  GameClient::RobotManager *v9; // eax
  struct GameClient::Robot *Robot; // eax
  int v11; // eax
  struct BinStream *v12; // eax
  int v13; // edx
  unsigned int v14; // ecx
  int v15; // esi
  unsigned int v16; // edx
  int v17; // esi
  unsigned int v18; // ebp
  int v19; // esi
  int v20; // esi
  float *v21; // ecx
  int v22; // ecx
  int v23; // esi
  float *v24; // ecx
  int v25; // esi
  float *v26; // ecx
  int v27; // esi
  float *v28; // ecx
  unsigned int v29; // [esp-4h] [ebp-84h]
  int v30; // [esp-4h] [ebp-84h]
  char v31; // [esp+8h] [ebp-78h]
  GameClient::WheelVehicle *v32; // [esp+Ch] [ebp-74h]
  GameClient::WheelVehicle *v33; // [esp+Ch] [ebp-74h]
  float v34; // [esp+10h] [ebp-70h] BYREF
  float v35; // [esp+14h] [ebp-6Ch]
  float v36; // [esp+18h] [ebp-68h]
  float v37; // [esp+1Ch] [ebp-64h] BYREF
  float v38; // [esp+20h] [ebp-60h]
  float v39; // [esp+24h] [ebp-5Ch]
  float v40; // [esp+28h] [ebp-58h] BYREF
  float v41; // [esp+2Ch] [ebp-54h]
  float v42; // [esp+30h] [ebp-50h]
  float v43; // [esp+34h] [ebp-4Ch] BYREF
  float v44; // [esp+38h] [ebp-48h]
  float v45; // [esp+3Ch] [ebp-44h]
  _BYTE v46[64]; // [esp+40h] [ebp-40h] BYREF

  Stream = Event::GetStream(a2);
  v3 = *((_DWORD *)Stream + 3);
  v4 = v3 + 4;
  if ( (unsigned int)(v3 + 4) > *((_DWORD *)Stream + 2) )
  {
    v5 = v32;
  }
  else
  {
    v5 = *(GameClient::WheelVehicle **)(v3 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v4;
  }
  v29 = (unsigned int)v5;
  v6 = GameClient::EstabManager::Instance();
  Establishment = GameClient::EstabManager::GetEstablishment(v6, v29);
  if ( Establishment )
  {
    v8 = (GameClient::ControlledEstab *)_RTDynamicCast(
                                          Establishment,
                                          0,
                                          &GameClient::Establishment `RTTI Type Descriptor',
                                          &GameClient::WheelVehicle `RTTI Type Descriptor',
                                          0);
    v33 = v8;
    if ( v8 )
    {
      v30 = *((_DWORD *)GameClient::ControlledEstab::GetDriverSeat(v8) + 19);
      v9 = GameClient::RobotManager::Instance();
      Robot = GameClient::RobotManager::GetRobot(v9, v30);
      if ( !Robot || (v11 = *((_DWORD *)Robot + 5)) == 0 || !*(_BYTE *)(v11 + 212) )
      {
        v43 = 0.0;
        v44 = 0.0;
        v45 = 0.0;
        v40 = 0.0;
        v41 = 0.0;
        v42 = 0.0;
        v37 = 0.0;
        v38 = 0.0;
        v39 = 0.0;
        v34 = 0.0;
        v35 = 0.0;
        v36 = 0.0;
        sub_10014669(v46);
        v12 = Event::GetStream(a2);
        v13 = *((_DWORD *)v12 + 3);
        v14 = *((_DWORD *)v12 + 2);
        v15 = v13 + 4;
        if ( v13 + 4 > v14 )
        {
          v16 = (unsigned int)v33;
        }
        else
        {
          v16 = *(_DWORD *)(v13 + *((_DWORD *)v12 + 1));
          *((_DWORD *)v12 + 3) = v15;
        }
        v17 = *((_DWORD *)v12 + 3);
        if ( v17 + 4 > v14 )
        {
          v18 = (unsigned int)v33;
        }
        else
        {
          v18 = *(_DWORD *)(v17 + *((_DWORD *)v12 + 1));
          *((_DWORD *)v12 + 3) = v17 + 4;
        }
        v19 = *((_DWORD *)v12 + 3);
        if ( v19 + 1 <= v14 )
        {
          v31 = *(_BYTE *)(v19 + *((_DWORD *)v12 + 1));
          *((_DWORD *)v12 + 3) = v19 + 1;
        }
        v20 = *((_DWORD *)v12 + 3);
        if ( v20 + 12 <= v14 )
        {
          v21 = (float *)(v20 + *((_DWORD *)v12 + 1));
          v43 = *v21;
          v44 = v21[1];
          v45 = v21[2];
          *((_DWORD *)v12 + 3) += 12;
        }
        v22 = *((_DWORD *)v12 + 3);
        if ( (unsigned int)(v22 + 64) <= *((_DWORD *)v12 + 2) )
        {
          qmemcpy(v46, (const void *)(v22 + *((_DWORD *)v12 + 1)), sizeof(v46));
          *((_DWORD *)v12 + 3) += 64;
        }
        v23 = *((_DWORD *)v12 + 3);
        if ( (unsigned int)(v23 + 12) <= *((_DWORD *)v12 + 2) )
        {
          v24 = (float *)(v23 + *((_DWORD *)v12 + 1));
          v40 = *v24;
          v41 = v24[1];
          v42 = v24[2];
          *((_DWORD *)v12 + 3) += 12;
        }
        v25 = *((_DWORD *)v12 + 3);
        if ( (unsigned int)(v25 + 12) <= *((_DWORD *)v12 + 2) )
        {
          v26 = (float *)(v25 + *((_DWORD *)v12 + 1));
          v37 = *v26;
          v38 = v26[1];
          v39 = v26[2];
          *((_DWORD *)v12 + 3) += 12;
        }
        v27 = *((_DWORD *)v12 + 3);
        if ( (unsigned int)(v27 + 12) <= *((_DWORD *)v12 + 2) )
        {
          v28 = (float *)(v27 + *((_DWORD *)v12 + 1));
          v34 = *v28;
          v35 = v28[1];
          v36 = v28[2];
          *((_DWORD *)v12 + 3) += 12;
        }
        GameClient::WheelVehicle::OnUpdateMoveStatus(
          v33,
          v16,
          v18,
          v31,
          (const struct Vector *)&v43,
          (const struct Matrix *)v46,
          (const struct Vector *)&v40,
          (const struct Vector *)&v37,
          (const struct Vector *)&v34);
      }
    }
  }
}
