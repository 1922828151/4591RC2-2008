/*
 * func-name: sub_1025C6D0
 * func-address: 0x1025c6d0
 * callers: 0x10018aa2
 * callees: 0x1000194c, 0x10003a08, 0x10003f58, 0x10007225, 0x1000a097, 0x1000a3a8, 0x1000ed13, 0x10016081, 0x10017c29
 */

int __thiscall sub_1025C6D0(float *this, int a2)
{
  float *v2; // ebp
  unsigned int v3; // ebx
  CameraHandler *v4; // eax
  float *Camera; // esi
  int result; // eax
  struct GameClient::LocalCharacter *v7; // edi
  GameClient::RobotManager *v8; // eax
  double v9; // st6
  int v10; // eax
  int v11; // edi
  int v12; // ebp
  int v13; // eax
  int v14; // esi
  float *v15; // esi
  GameClient::GroupManager *v16; // eax
  CDlgMgr *v17; // eax
  int v18; // [esp+10h] [ebp-68h]
  int v19; // [esp+14h] [ebp-64h]
  int v20; // [esp+18h] [ebp-60h]
  int v21; // [esp+18h] [ebp-60h]
  float v22; // [esp+2Ch] [ebp-4Ch]
  float v23; // [esp+2Ch] [ebp-4Ch]
  float v24; // [esp+2Ch] [ebp-4Ch]
  float v25; // [esp+30h] [ebp-48h]
  float v26; // [esp+30h] [ebp-48h]
  float v27; // [esp+34h] [ebp-44h]
  float v28; // [esp+34h] [ebp-44h]
  struct GameClient::Robot *Robot; // [esp+38h] [ebp-40h]
  struct GameClient::LocalCharacter *v30; // [esp+3Ch] [ebp-3Ch]
  float v32; // [esp+44h] [ebp-34h] BYREF
  float v33; // [esp+48h] [ebp-30h]
  float v34; // [esp+4Ch] [ebp-2Ch]
  float v35[3]; // [esp+50h] [ebp-28h] BYREF
  char v36[4]; // [esp+5Ch] [ebp-1Ch] BYREF
  int v37; // [esp+60h] [ebp-18h]
  int v38; // [esp+64h] [ebp-14h]
  int v39; // [esp+68h] [ebp-10h]
  int v40; // [esp+74h] [ebp-4h]

  v2 = this;
  v3 = 0;
  v4 = CameraHandler::Instance();
  Camera = (float *)CameraHandler::GetCamera(v4, 0);
  result = sub_1000194C(0);
  v7 = (struct GameClient::LocalCharacter *)result;
  v30 = (struct GameClient::LocalCharacter *)result;
  if ( result )
  {
    v19 = *(_DWORD *)(result + 292);
    v8 = GameClient::RobotManager::Instance();
    Robot = GameClient::RobotManager::GetRobot(v8, v19);
    if ( Robot )
    {
      v37 = 0;
      v38 = 0;
      v39 = 0;
      v22 = Camera[94] * 1000.0;
      v9 = Camera[95] * 1000.0;
      v40 = 0;
      v25 = v9;
      v27 = 1000.0 * Camera[96];
      v23 = Camera[88] + v22;
      v26 = Camera[89] + v25;
      v28 = Camera[90] + v27;
      v35[0] = v23;
      v35[1] = v26;
      v35[2] = v28;
      v10 = NxPhysics::Instance(Camera + 88, v35, 3, v36, -1);
      NxPhysics::RayCastAll(v10);
      v24 = 3.4028235e38;
      v32 = 0.0;
      v33 = 0.0;
      v34 = 0.0;
      if ( sub_10007225() )
      {
        v11 = v37;
        v12 = 0;
        do
        {
          if ( !v11 || v3 >= (v38 - v11) / 104 )
          {
            _invalid_parameter_noinfo();
            v11 = v37;
          }
          if ( *(_DWORD *)(v11 + v12 + 76) != *((_DWORD *)Robot + 3) && v24 > *(double *)(v11 + v12 + 8) )
          {
            v13 = *(_DWORD *)(v11 + v12 + 36);
            v24 = *(double *)(v11 + v12 + 8);
            v14 = v11 + v12 + 32;
            if ( !v13 || !((*(_DWORD *)(v11 + v12 + 40) - v13) / 12) )
            {
              _invalid_parameter_noinfo();
              v11 = v37;
            }
            v15 = *(float **)(v14 + 4);
            v32 = *v15;
            v33 = v15[1];
            v34 = v15[2];
          }
          ++v3;
          v12 += 104;
        }
        while ( v3 < sub_10007225() );
        v7 = v30;
        v2 = this;
      }
      if ( v24 < 3.402823466385289e38 )
      {
        v18 = *((_DWORD *)v2 + 982);
        v16 = GameClient::GroupManager::Instance();
        GameClient::GroupManager::SendGroupCmd(v16, v7, a2, v18, (const struct Vector *)&v32);
      }
      v40 = -1;
      sub_10003A08();
    }
    v17 = (CDlgMgr *)CDlgMgr::Instance();
    CDlgMgr::ShowDialog(v17);
    *(float *)(Input::Instance(v20) + 1716) = v2[978];
    result = Input::Instance(v21);
    *(float *)(result + 1712) = v2[977];
    *((_BYTE *)v2 + 3920) = 0;
  }
  return result;
}
