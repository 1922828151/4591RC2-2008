/*
 * func-name: sub_101901B0
 * func-address: 0x101901b0
 * callers: 0x1001012c
 * callees: 0x10001dfc, 0x10002162, 0x100034b8, 0x1000a3a8, 0x1000aa3d, 0x1000aff6, 0x1000b5c3, 0x1000bc80, 0x1000c1fd, 0x1000cd51, 0x1000e7d7, 0x1000ed13, 0x1001344e, 0x100137cd, 0x100141e6, 0x10016a4f, 0x10016fb3, 0x102c9d50
 */

void __stdcall sub_101901B0(float a1)
{
  Event *v1; // esi
  struct BinStream *Stream; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // ecx
  GameClient::Booty *v6; // edi
  struct BinStream *v7; // eax
  struct BinStream *v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // ecx
  GameClient::Booty *v12; // eax
  struct BinStream *v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // ecx
  GameClient::Booty *v17; // eax
  struct BinStream *v18; // eax
  int v19; // ecx
  int v20; // edx
  int v21; // ecx
  GameClient::Booty *v22; // edi
  char Owner; // al
  int v24; // eax
  GameClient::RobotManager *v25; // eax
  GameClient::Robot *Robot; // eax
  struct BinStream *v27; // eax
  int v28; // ecx
  int v29; // edx
  int v30; // ecx
  GameClient::RobotManager *v31; // eax
  struct GameClient::Robot *v32; // edi
  unsigned int v33; // ebp
  unsigned int v34; // ebx
  struct BinStream *v35; // eax
  int v36; // ecx
  struct BinStream *v37; // eax
  int v38; // ecx
  GameClient::EquipManager *v39; // eax
  unsigned int v40; // edi
  GameClient::FlyweightManager *v41; // eax
  struct GameClient::WorldObject *v42; // eax
  struct BinStream *v43; // eax
  int v44; // ecx
  unsigned int v45; // esi
  double v46; // st7
  int v47; // ecx
  int v48; // edx
  int v49; // ecx
  GameClient::Booty *v50; // eax
  int v51; // [esp+0h] [ebp-3Ch]
  int v52; // [esp+0h] [ebp-3Ch]
  struct BinStream *v53; // [esp+0h] [ebp-3Ch]
  float v54; // [esp+18h] [ebp-24h] BYREF
  struct GameClient::Robot *v55; // [esp+1Ch] [ebp-20h]
  int v56; // [esp+20h] [ebp-1Ch] BYREF
  void *v57; // [esp+24h] [ebp-18h]
  int v58; // [esp+28h] [ebp-14h]
  int v59; // [esp+2Ch] [ebp-10h]
  int v60; // [esp+38h] [ebp-4h]

  v1 = (Event *)LODWORD(a1);
  switch ( Event::GetSubID((Event *)LODWORD(a1)) )
  {
    case 0x1432u:
      Stream = Event::GetStream(v1);
      v3 = *((_DWORD *)Stream + 3);
      v4 = v3 + 4;
      if ( (unsigned int)(v3 + 4) > *((_DWORD *)Stream + 2) )
      {
        v5 = LODWORD(a1);
      }
      else
      {
        v5 = *(_DWORD *)(v3 + *((_DWORD *)Stream + 1));
        *((_DWORD *)Stream + 3) = v4;
      }
      v6 = (GameClient::Booty *)sub_10001DFC(v5);
      if ( v6 )
      {
        v7 = Event::GetStream(v1);
        GameClient::Booty::WriteData(v6, v7);
        GameClient::Booty::DoOpen(v6, 1);
      }
      break;
    case 0x1433u:
      v8 = Event::GetStream(v1);
      v9 = *((_DWORD *)v8 + 3);
      v10 = v9 + 4;
      if ( (unsigned int)(v9 + 4) > *((_DWORD *)v8 + 2) )
      {
        v11 = LODWORD(a1);
      }
      else
      {
        v11 = *(_DWORD *)(v9 + *((_DWORD *)v8 + 1));
        *((_DWORD *)v8 + 3) = v10;
      }
      v12 = (GameClient::Booty *)sub_10001DFC(v11);
      if ( v12 )
        GameClient::Booty::DoOpen(v12, 0);
      break;
    case 0x1434u:
      v13 = Event::GetStream(v1);
      v14 = *((_DWORD *)v13 + 3);
      v15 = v14 + 4;
      if ( (unsigned int)(v14 + 4) > *((_DWORD *)v13 + 2) )
      {
        v16 = LODWORD(a1);
      }
      else
      {
        v16 = *(_DWORD *)(v14 + *((_DWORD *)v13 + 1));
        *((_DWORD *)v13 + 3) = v15;
      }
      v17 = (GameClient::Booty *)sub_10001DFC(v16);
      if ( v17 )
        GameClient::Booty::ImbileEnergy(v17, 1);
      break;
    case 0x1435u:
      v18 = Event::GetStream(v1);
      v19 = *((_DWORD *)v18 + 3);
      v20 = v19 + 4;
      if ( (unsigned int)(v19 + 4) > *((_DWORD *)v18 + 2) )
      {
        v21 = LODWORD(a1);
      }
      else
      {
        v21 = *(_DWORD *)(v19 + *((_DWORD *)v18 + 1));
        *((_DWORD *)v18 + 3) = v20;
      }
      v22 = (GameClient::Booty *)sub_10001DFC(v21);
      if ( v22 )
      {
        Event::GetStream(v1);
        sub_1000B5C3((int)&a1);
        sub_1000B5C3((int)&v54);
        GameClient::Booty::ImbileEnergy(v22, 0);
        GameClient::Booty::SetCurEnergy(v22, a1);
        Owner = Event::GetOwner(v1);
        v24 = sub_10016A4F(Owner);
        if ( v24 )
        {
          v51 = *(_DWORD *)(v24 + 292);
          v25 = GameClient::RobotManager::Instance();
          Robot = GameClient::RobotManager::GetRobot(v25, v51);
          if ( Robot )
            GameClient::Robot::SetEnergy(Robot, v54);
        }
      }
      break;
    case 0x1436u:
      v27 = Event::GetStream(v1);
      v28 = *((_DWORD *)v27 + 3);
      v29 = v28 + 4;
      if ( (unsigned int)(v28 + 4) > *((_DWORD *)v27 + 2) )
      {
        v30 = LODWORD(a1);
      }
      else
      {
        v30 = *(_DWORD *)(v28 + *((_DWORD *)v27 + 1));
        *((_DWORD *)v27 + 3) = v29;
      }
      v52 = v30;
      v31 = GameClient::RobotManager::Instance();
      v32 = GameClient::RobotManager::GetRobot(v31, v52);
      v55 = v32;
      if ( v32 )
      {
        v57 = 0;
        v58 = 0;
        v59 = 0;
        v60 = 0;
        v33 = -1;
        v34 = -1;
        Event::GetStream(v1);
        sub_10002162((int)&a1);
        if ( SLODWORD(a1) > 0 )
        {
          v54 = a1;
          do
          {
            v35 = Event::GetStream(v1);
            v36 = *((_DWORD *)v35 + 3);
            if ( (unsigned int)(v36 + 4) <= *((_DWORD *)v35 + 2) )
            {
              v33 = *(_DWORD *)(v36 + *((_DWORD *)v35 + 1));
              *((_DWORD *)v35 + 3) = v36 + 4;
            }
            if ( v33 == -1 )
            {
              a1 = 0.0;
              sub_1000CD51(&v56, (int)&a1);
            }
            else
            {
              v37 = Event::GetStream(v1);
              v38 = *((_DWORD *)v37 + 3);
              if ( (unsigned int)(v38 + 4) <= *((_DWORD *)v37 + 2) )
              {
                v34 = *(_DWORD *)(v38 + *((_DWORD *)v37 + 1));
                *((_DWORD *)v37 + 3) = v38 + 4;
              }
              v39 = GameClient::EquipManager::Instance();
              a1 = COERCE_FLOAT(GameClient::EquipManager::GetSystemPart(v39, v34));
              if ( a1 == 0.0 )
              {
                v40 = *((_DWORD *)v32 + 4);
                v53 = Event::GetStream(v1);
                v41 = GameClient::FlyweightManager::Instance();
                v42 = GameClient::FlyweightManager::NewWorldObject(v41, v33, v34, v40, v53);
                v32 = v55;
                a1 = *(float *)&v42;
              }
              sub_1000CD51(&v56, (int)&a1);
            }
            --LODWORD(v54);
          }
          while ( LODWORD(v54) );
        }
        v43 = Event::GetStream(v1);
        v44 = *((_DWORD *)v43 + 3);
        v45 = *((_DWORD *)v43 + 2);
        if ( v44 + 4 <= v45 )
        {
          v46 = *(float *)(v44 + *((_DWORD *)v43 + 1));
          *((_DWORD *)v43 + 3) = v44 + 4;
          a1 = v46;
        }
        v47 = *((_DWORD *)v43 + 3);
        v48 = v47 + 4;
        if ( v47 + 4 > v45 )
        {
          v49 = LODWORD(a1);
        }
        else
        {
          v49 = *(_DWORD *)(v47 + *((_DWORD *)v43 + 1));
          *((_DWORD *)v43 + 3) = v48;
        }
        v50 = (GameClient::Booty *)sub_10001DFC(v49);
        GameClient::Robot::ChangeEquip(v32, (int)&v56, v50);
        *((float *)v32 + 82) = a1;
        if ( v57 )
          operator delete(v57);
      }
      break;
    default:
      return;
  }
}
