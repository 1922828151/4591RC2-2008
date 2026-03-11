/*
 * func-name: ?UpdateInput@IEstabController@GameClient@@UAEXPAVSeat@2@@Z_0
 * func-address: 0x101be060
 * callers: 0x100125c1
 * callees: 0x10001fbe, 0x1000290a, 0x1000a3a8, 0x1000e692, 0x1000ed13, 0x10012954, 0x10012a58, 0x10013eda, 0x100164d2
 */

// local variable allocation has failed, the output may be wrong!
void __userpurge GameClient::IEstabController::UpdateInput(struct GameClient::Seat *a1, int a2, GameClient::Seat *a3)
{
  int v4; // ecx
  int v5; // esi
  int (__stdcall *v6)(_DWORD); // ebp
  Input *v7; // eax
  int v9; // edi
  int v10; // eax
  double v11; // st7
  int (__thiscall *v12)(int); // eax
  int v13; // edi
  int v14; // eax
  int v15; // ecx
  int (__thiscall *v16)(int); // eax
  int v17; // eax
  int v18; // eax
  int v19; // edi
  Input *v20; // eax
  GameClient::RobotManager *v21; // eax
  struct GameClient::Robot *Robot; // edi
  int v23; // ecx
  int v24; // edi
  Input *v25; // eax
  float v26; // edi
  GameClient::RobotManager *v27; // eax
  int v28; // ecx
  int SeatIndex; // ebx
  struct GameClient::Seat *Seat; // eax
  int v31; // ebp
  int v32; // edi
  int v33; // ecx
  int v34; // edi
  Input *v35; // eax
  float v36; // edi
  GameClient::RobotManager *v37; // eax
  int v38; // ecx
  int v39; // ebx
  int v40; // ebp
  int v41; // edi
  int v42; // ecx
  int v43; // edi
  Input *v44; // eax
  int v45; // [esp+24h] [ebp-1Ch]
  int v46; // [esp+28h] [ebp-18h]
  int v47; // [esp+28h] [ebp-18h]
  int v48; // [esp+2Ch] [ebp-14h]
  int v49; // [esp+2Ch] [ebp-14h]
  int v50; // [esp+2Ch] [ebp-14h]
  int v51; // [esp+2Ch] [ebp-14h]
  float v52; // [esp+38h] [ebp-8h]
  struct GameClient::Robot *v53; // [esp+38h] [ebp-8h]
  float v54; // [esp+3Ch] [ebp-4h] OVERLAPPED BYREF
  float retaddr; // [esp+40h] [ebp+0h]
  float v56; // [esp+4Ch] [ebp+Ch]
  float v57; // [esp+4Ch] [ebp+Ch]
  int v58; // [esp+4Ch] [ebp+Ch]
  struct GameClient::Robot *v59; // [esp+50h] [ebp+10h]

  v4 = *(_DWORD *)(dword_103B67B4 + 8);
  v5 = dword_103B67B4 + 8;
  if ( !v4 || (unsigned int)((*(_DWORD *)(dword_103B67B4 + 12) - v4) >> 2) <= 0x2F )
    _invalid_parameter_noinfo();
  v6 = Input::Instance;
  v7 = (Input *)Input::Instance(*(_DWORD *)(*(_DWORD *)v5 + 188));
  if ( Input::ControlDown(v7) )
  {
    *((_BYTE *)a3 + 344) = 1;
    v9 = Input::Instance(v48);
    v10 = Input::Instance(v49);
    v11 = (double)(*(int (__thiscall **)(int))(*(_DWORD *)v10 + 104))(v10);
    v12 = *(int (__thiscall **)(int))(*(_DWORD *)v9 + 100);
    v54 = v11 / 10.0;
    retaddr = (float)(v12(v9) / 10);
    *((float *)a3 + 67) = *((float *)a3 + 67) + v54;
    *((float *)a3 + 68) = retaddr + *((float *)a3 + 68);
    *((float *)a3 + 69) = *((float *)a3 + 69) + 0.0;
  }
  else
  {
    *((_BYTE *)a3 + 344) = 0;
    v13 = Input::Instance(v48);
    v14 = Input::Instance(v51);
    v52 = (float)(*(int (__thiscall **)(int))(*(_DWORD *)v14 + 104))(v14);
    v56 = (float)(*(int (__thiscall **)(int))(*(_DWORD *)v13 + 100))(v13);
    v54 = v52;
    retaddr = v56;
    GameClient::Seat::SetRotationAccel(a3, (struct Vector *)&v54);
  }
  v15 = Input::Instance(v50);
  v16 = *(int (__thiscall **)(int))(*(_DWORD *)v15 + 80);
  *(double *)&v54 = *((float *)a3 + 47);
  v17 = v16(v15);
  v57 = *(double *)&v54 - (double)v17 / 10.0;
  GameClient::Seat::SetCameraCurDistance(a3, v57);
  GameClient::Seat::UpdateWeaponInput(a3);
  v18 = *(_DWORD *)(dword_103B67B4 + 8);
  v19 = dword_103B67B4 + 8;
  if ( !v18 || (unsigned int)((*(_DWORD *)(dword_103B67B4 + 12) - v18) >> 2) <= 0x4B )
    _invalid_parameter_noinfo();
  v20 = (Input *)Input::Instance(*(_DWORD *)(*(_DWORD *)v19 + 300));
  if ( Input::ControlJustPressed(v20) )
  {
    if ( *((_DWORD *)a3 + 22) )
    {
      v46 = *((_DWORD *)a3 + 19);
      v21 = GameClient::RobotManager::Instance();
      Robot = GameClient::RobotManager::GetRobot(v21, v46);
      if ( Robot )
      {
        if ( *((_DWORD *)GameClient::Establishment::GetSeat(*((GameClient::Establishment **)a3 + 22), 0) + 19) == -1 )
          (*(void (__thiscall **)(_DWORD, struct GameClient::Robot *, _DWORD))(**((_DWORD **)a3 + 22) + 120))(
            *((_DWORD *)a3 + 22),
            Robot,
            0);
      }
    }
  }
  v23 = *(_DWORD *)(dword_103B67B4 + 8);
  v24 = dword_103B67B4 + 8;
  if ( !v23 || (unsigned int)((*(_DWORD *)(dword_103B67B4 + 12) - v23) >> 2) <= 0x4C )
    _invalid_parameter_noinfo();
  v25 = (Input *)Input::Instance(*(_DWORD *)(*(_DWORD *)v24 + 304));
  if ( Input::ControlJustPressed(v25) )
  {
    v26 = *((float *)a3 + 22);
    retaddr = v26;
    if ( v26 != 0.0 )
    {
      v47 = *((_DWORD *)a3 + 19);
      v27 = GameClient::RobotManager::Instance();
      v59 = GameClient::RobotManager::GetRobot(v27, v47);
      if ( v59 )
      {
        v28 = *(_DWORD *)(LODWORD(v26) + 196);
        if ( v28 )
          LODWORD(v54) = (*(_DWORD *)(LODWORD(v26) + 200) - v28) >> 2;
        else
          v54 = 0.0;
        SeatIndex = GameClient::Seat::GetSeatIndex(a3);
        while ( 1 )
        {
          if ( --SeatIndex < 0 )
            SeatIndex = LODWORD(v54) - 1;
          if ( SeatIndex == GameClient::Seat::GetSeatIndex(a3) )
            break;
          Seat = GameClient::Establishment::GetSeat((GameClient::Establishment *)LODWORD(v26), SeatIndex);
          if ( Seat && *((_DWORD *)Seat + 19) == -1 )
          {
            v31 = *((_DWORD *)Seat + 2);
            v32 = *(_DWORD *)(v31 + 108) & GameClient::Robot::GetRobotType();
            if ( v32 == GameClient::Robot::GetRobotType() )
            {
              (*(void (__thiscall **)(_DWORD, struct GameClient::Robot *, int))(**((_DWORD **)a3 + 22) + 120))(
                *((_DWORD *)a3 + 22),
                v59,
                SeatIndex);
              v6 = Input::Instance;
              break;
            }
            v26 = retaddr;
            v6 = Input::Instance;
          }
        }
      }
    }
  }
  v33 = *(_DWORD *)(dword_103B67B4 + 8);
  v34 = dword_103B67B4 + 8;
  if ( !v33 || (unsigned int)((*(_DWORD *)(dword_103B67B4 + 12) - v33) >> 2) <= 0x4D )
    _invalid_parameter_noinfo();
  v35 = (Input *)v6(*(_DWORD *)(*(_DWORD *)v34 + 308));
  if ( Input::ControlJustPressed(v35) )
  {
    v54 = *((float *)a3 + 22);
    v36 = v54;
    if ( v54 != 0.0 )
    {
      v45 = *((_DWORD *)a3 + 19);
      v37 = GameClient::RobotManager::Instance();
      v53 = GameClient::RobotManager::GetRobot(v37, v45);
      if ( v53 )
      {
        v38 = *(_DWORD *)(LODWORD(v36) + 196);
        if ( v38 )
          v58 = (*(_DWORD *)(LODWORD(v36) + 200) - v38) >> 2;
        else
          v58 = 0;
        v39 = GameClient::Seat::GetSeatIndex(a3);
        while ( 1 )
        {
          if ( ++v39 >= v58 )
            v39 = 0;
          if ( v39 == GameClient::Seat::GetSeatIndex(a3) )
            break;
          v40 = *((_DWORD *)GameClient::Establishment::GetSeat((GameClient::Establishment *)LODWORD(v36), v39) + 2);
          v41 = *(_DWORD *)(v40 + 108) & GameClient::Robot::GetRobotType();
          if ( v41 == GameClient::Robot::GetRobotType() )
          {
            (*(void (__thiscall **)(_DWORD, struct GameClient::Robot *, int))(**((_DWORD **)a3 + 22) + 120))(
              *((_DWORD *)a3 + 22),
              v53,
              v39);
            v6 = Input::Instance;
            break;
          }
          v36 = v54;
          v6 = Input::Instance;
        }
      }
    }
  }
  v42 = *(_DWORD *)(dword_103B67B4 + 8);
  v43 = dword_103B67B4 + 8;
  if ( !v42 || (unsigned int)((*(_DWORD *)(dword_103B67B4 + 12) - v42) >> 2) <= 0x4E )
    _invalid_parameter_noinfo();
  v44 = (Input *)v6(*(_DWORD *)(*(_DWORD *)v43 + 312));
  if ( Input::ControlDown(v44) )
    GameClient::Seat::UseSkill(a3, 1);
  else
    GameClient::Seat::UseSkill(a3, 0);
}
