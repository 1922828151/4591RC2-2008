/*
 * func-name: ?Update@Robot@GameClient@@UAEXM@Z_0
 * func-address: 0x10180400
 * callers: 0x1000f74f
 * callees: 0x1000194c, 0x10001f6e, 0x1000236f, 0x10002e37, 0x1000302b, 0x100032fb, 0x10003f58, 0x10004589, 0x1000516e, 0x10005aec, 0x10005fa6, 0x10006947, 0x10006a19, 0x10008d4b, 0x10009e03, 0x1000a097, 0x1000a506, 0x1000abf5, 0x1000b780, 0x1000c3ec, 0x1000f1dc, 0x1000fab0, 0x10012107, 0x10012deb, 0x10013ad4, 0x10014029, 0x10014669, 0x100146eb, 0x10016324, 0x10017c29, 0x10018165, 0x100189a3, 0x100191e6, 0x10019777, 0x10019b4b, 0x1001a3de, 0x102c0750, 0x102c9d50, 0x102c9ea8
 */

void __thiscall GameClient::Robot::Update(GameClient::Robot *this, float a2)
{
  int v3; // eax
  CameraHandler *v4; // eax
  struct Camera *Camera; // eax
  float v6; // ecx
  CameraHandler *v7; // eax
  struct Camera *v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // edx
  float v11; // eax
  GameClient::RobotBody *v12; // ecx
  double v13; // st7
  int v14; // eax
  double v15; // st7
  int v16; // ecx
  double v17; // st7
  float v18; // ecx
  GameClient::Func_Power *v19; // ecx
  int v20; // ecx
  double (__thiscall *v21)(int, _DWORD, _DWORD); // edx
  double v22; // st7
  float v23; // ecx
  GameClient::Func_Power *v24; // ecx
  int v25; // ecx
  int v26; // ecx
  struct Game *v27; // eax
  struct Game *v28; // eax
  unsigned int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // ecx
  unsigned __int8 (__thiscall *v33)(int, int *, float *, _DWORD); // edx
  bool v34; // bl
  int v35; // ecx
  unsigned __int8 (__thiscall *v36)(int, int *, float *, _DWORD); // eax
  bool v37; // bl
  int v38; // eax
  _DWORD *v39; // ebx
  _DWORD *v40; // esi
  int v41; // edi
  int v42; // edi
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  unsigned int i; // esi
  int v49; // eax
  int v50; // edx
  int v51; // eax
  int (__thiscall *v52)(char *, float *); // edx
  float *v53; // eax
  float v54; // edx
  double v55; // st7
  float *v56; // eax
  float v57; // ecx
  int v58; // eax
  float v59; // eax
  GameClient::FuncManager *v60; // eax
  struct GameClient::Function *Function; // eax
  int v62; // eax
  int v63; // eax
  int v64; // esi
  unsigned int v65; // eax
  GameClient::FuncManager *v66; // eax
  struct GameClient::Function *v67; // eax
  int v68; // eax
  int v69[2]; // [esp+10h] [ebp-154h] BYREF
  unsigned int v70; // [esp+18h] [ebp-14Ch]
  int v71; // [esp+1Ch] [ebp-148h]
  void ***v72; // [esp+20h] [ebp-144h]
  void ***v73; // [esp+24h] [ebp-140h]
  unsigned int v74[6]; // [esp+28h] [ebp-13Ch]
  int v75; // [esp+40h] [ebp-124h] BYREF
  double v76; // [esp+44h] [ebp-120h]
  float v77; // [esp+4Ch] [ebp-118h]
  int v78; // [esp+50h] [ebp-114h]
  float v79; // [esp+54h] [ebp-110h] BYREF
  float v80; // [esp+58h] [ebp-10Ch]
  float v81; // [esp+5Ch] [ebp-108h]
  float v82; // [esp+60h] [ebp-104h]
  float v83; // [esp+64h] [ebp-100h] BYREF
  float v84; // [esp+68h] [ebp-FCh]
  float v85; // [esp+6Ch] [ebp-F8h]
  int v86; // [esp+70h] [ebp-F4h] BYREF
  float v87; // [esp+74h] [ebp-F0h]
  float v88; // [esp+78h] [ebp-ECh]
  int v89; // [esp+7Ch] [ebp-E8h] BYREF
  void *v90; // [esp+80h] [ebp-E4h]
  int v91; // [esp+84h] [ebp-E0h]
  int v92; // [esp+88h] [ebp-DCh]
  float v93[12]; // [esp+98h] [ebp-CCh] BYREF
  char v94[16]; // [esp+C8h] [ebp-9Ch] BYREF
  _BYTE v95[8]; // [esp+D8h] [ebp-8Ch] BYREF
  double v96; // [esp+E0h] [ebp-84h] BYREF
  _BYTE v97[8]; // [esp+F0h] [ebp-74h] BYREF
  double v98; // [esp+F8h] [ebp-6Ch]
  int v99; // [esp+13Ch] [ebp-28h]
  int v100; // [esp+160h] [ebp-4h]

  v78 = 0;
  if ( GameClient::WorldObject::IsLocal(this) )
  {
    v3 = *((_DWORD *)this + 43);
    if ( v3 )
    {
      if ( !*(_DWORD *)(v3 + 464) )
        std::string::operator=(v3 + 444, "local");
    }
  }
  GameClient::Robot::doMove(this, a2);
  if ( !*((_DWORD *)this + 90) )
  {
    if ( !*((_BYTE *)this + 664) )
      qmemcpy((char *)this + 588, (char *)this + 36, 0x40u);
    if ( GameClient::WorldObject::IsLocal(this) )
    {
      if ( (*((_DWORD *)this + 92) & 0x20) != 0 )
      {
        *((_DWORD *)this + 74) = -1;
        *((float *)this + 75) = -1.0;
      }
      else
      {
        v4 = CameraHandler::Instance();
        Camera = CameraHandler::GetCamera(v4, 0);
        v6 = *((float *)Camera + 88);
        Camera = (struct Camera *)((char *)Camera + 352);
        v79 = v6;
        v80 = *((float *)Camera + 1);
        v81 = *((float *)Camera + 2);
        v7 = CameraHandler::Instance();
        v8 = CameraHandler::GetCamera(v7, 0);
        v9 = *((_DWORD *)v8 + 94);
        v10 = *((_DWORD *)v8 + 95);
        v11 = *((float *)v8 + 96);
        v76 = COERCE_DOUBLE(__PAIR64__(v10, v9));
        v77 = v11;
        v90 = 0;
        v91 = 0;
        v92 = 0;
        v75 = *((int *)this + 3);
        v100 = 0;
        sub_10002E37(&v89, (int)&v75);
        if ( *((_DWORD *)this + 70) != -1 )
        {
          v75 = *((int *)this + 70);
          sub_10002E37(&v89, (int)&v75);
        }
        CollisionInfo::CollisionInfo((CollisionInfo *)v97);
        v12 = (GameClient::RobotBody *)*((_DWORD *)this + 50);
        LOBYTE(v100) = 1;
        v74[0] = 62254;
        *(float *)&v75 = (float)GameClient::RobotBody::GetMaxViewDistance(v12);
        v13 = *(float *)&v75;
        *(float *)&v75 = *(float *)&v76 * *(float *)&v75;
        v82 = *((float *)&v76 + 1) * v13;
        *(float *)&v76 = v13 * v77;
        *(float *)&v75 = v79 + *(float *)&v75;
        v82 = v80 + v82;
        *(float *)&v76 = v81 + *(float *)&v76;
        v86 = v75;
        v87 = v82;
        v88 = *(float *)&v76;
        v14 = NxPhysics::Instance(&v89, &v79, &v86, 3, v97);
        if ( !(unsigned __int8)NxPhysics::RayCast(v14) || v99 == -1 )
        {
          v15 = -1.0;
          *((_DWORD *)this + 74) = -1;
        }
        else
        {
          v15 = v98;
          *((_DWORD *)this + 74) = v99;
        }
        *((float *)this + 75) = v15;
        GameClient::Robot::updateHeartbeatSynch(this);
        LOBYTE(v100) = 0;
        CollisionInfo::~CollisionInfo((CollisionInfo *)v97);
        v100 = -1;
        if ( v90 )
          operator delete(v90);
      }
    }
    v16 = *((_DWORD *)this + 48);
    if ( v16 )
    {
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v16 + 20))(LODWORD(a2));
      *(float *)&v76 = *(double *)(*((_DWORD *)this + 48) + 48);
      v17 = GameClient::DamageUnit::AutoRepair((GameClient::Robot *)((char *)this + 148), a2, *(float *)&v76);
      *(float *)v74 = v18;
      v19 = (GameClient::Func_Power *)*((_DWORD *)this + 48);
      *(float *)v74 = v17;
      GameClient::Func_Power::UseEnergy(v19, *(float *)v74);
      v20 = *((_DWORD *)this + 57);
      if ( v20 )
      {
        v21 = *(double (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v20 + 116);
        *(float *)&v76 = *(double *)(*((_DWORD *)this + 48) + 48);
        v22 = v21(v20, LODWORD(a2), LODWORD(v76));
        *(float *)v74 = v23;
        v24 = (GameClient::Func_Power *)*((_DWORD *)this + 48);
        *(float *)v74 = v22;
        GameClient::Func_Power::UseEnergy(v24, *(float *)v74);
      }
    }
    v25 = *((_DWORD *)this + 55);
    if ( v25 )
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v25 + 36))(LODWORD(a2));
    v26 = *((_DWORD *)this + 56);
    if ( v26 )
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v26 + 36))(LODWORD(a2));
    if ( *(_BYTE *)(*((_DWORD *)this + 43) + 308) )
    {
      if ( (*((_BYTE *)this + 368) & 1) == 0 )
        *((_DWORD *)this + 92) |= 1u;
    }
    else if ( (*((_BYTE *)this + 368) & 1) != 0 )
    {
      *((_DWORD *)this + 92) &= ~1u;
    }
    if ( *((float *)this + 7) <= 500.0 && *((float *)this + 7) >= -1000.0 || (*((_DWORD *)this + 92) & 0x10) != 0 )
    {
      if ( *((float *)this + 7) <= 500.0 && *((float *)this + 7) >= -1000.0 && (*((_DWORD *)this + 92) & 0x10) != 0 )
        *((_DWORD *)this + 92) &= ~0x10u;
    }
    else
    {
      *((_DWORD *)this + 92) |= 0x10u;
    }
    v83 = 0.0;
    v84 = 0.0;
    v85 = 0.0;
    v27 = Game::Instance();
    World::GetLogicCoordOffset(*((World **)v27 + 25), (struct Vector *)&v83);
    *(float *)&v76 = v84;
    sub_1000F1DC();
    v100 = 2;
    v28 = Game::Instance();
    World::GetWorldBBox(*((World **)v28 + 25), (struct BBox *)v93);
    if ( *(float *)&v76 + 500.0 < *((float *)this + 7)
      || *(float *)&v76 - 1000.0 > *((float *)this + 7)
      || v93[7] < (double)*((float *)this + 6)
      || v93[4] > (double)*((float *)this + 6)
      || v93[9] < (double)*((float *)this + 8)
      || v93[6] > (double)*((float *)this + 8) )
    {
      if ( (*((_DWORD *)this + 92) & 0x10) == 0 )
      {
        v29 = *((_DWORD *)this + 92) | 0x10;
        goto LABEL_50;
      }
    }
    else if ( (*((_DWORD *)this + 92) & 0x10) != 0 )
    {
      v29 = *((_DWORD *)this + 92) & 0xFFFFFFEF;
LABEL_50:
      *((_DWORD *)this + 92) = v29;
    }
    v100 = -1;
    sub_102C0750(v93);
  }
  GameClient::Robot::updateAnimation(this);
  GameClient::Robot::updateSystemPart(this, a2);
  GameClient::Robot::updateTimeCount(this);
  if ( !GameClient::WorldObject::IsLocal(this) )
  {
    if ( !*((_DWORD *)this + 43) )
      goto LABEL_101;
    v38 = sub_1000194C(0);
    v39 = (_DWORD *)v38;
    if ( !v38
      || *(_DWORD *)(v38 + 48) != *((_DWORD *)this + 27)
      || (*((_DWORD *)this + 92) & 0x20) != 0
      || *((_DWORD *)this + 90) > 1u )
    {
      *(_BYTE *)(*((_DWORD *)this + 43) + 1261) = 0;
LABEL_100:
      v52 = *(int (__thiscall **)(char *, float *))(*((_DWORD *)this + 37) + 8);
      v87 = *(float *)(*((_DWORD *)this + 43) + 800) * 0.5;
      v53 = (float *)v52((char *)this + 148, &v83);
      v79 = *v53 + 0.0;
      v80 = v53[1] + v87;
      v54 = v80;
      v55 = v53[2] + 0.0;
      v56 = *(float **)(*((_DWORD *)this + 43) + 1268);
      *v56 = v79;
      v81 = v55;
      v57 = v81;
      v56[1] = v54;
      v56[2] = v57;
      goto LABEL_101;
    }
    v40 = (_DWORD *)*((_DWORD *)this + 5);
    if ( !v40 )
    {
LABEL_94:
      v47 = sub_1000ABF5();
      sub_1000236F(v47);
      for ( i = 0; ; ++i )
      {
        v49 = *((_DWORD *)this + 39);
        if ( !v49 || i >= (*((_DWORD *)this + 40) - v49) / 20 )
          break;
        v50 = *(_DWORD *)sub_100032FB(i);
        LODWORD(v76) = v69;
        GameClient::DamageManager::GetArmorProg(v69, v50);
        sub_10008D4B(i, v69[0], v69[1], v70, v71, (int)v72, (int)v73, v74[0]);
        v76 = *(float *)(sub_100032FB(i) + 8);
        v51 = sub_100032FB(i);
        *(float *)&v76 = v76 / (double)*(int *)(v51 + 4);
        sub_1000FAB0(i, *(float *)&v76);
      }
      *(_BYTE *)(*((_DWORD *)this + 43) + 1261) = 1;
      goto LABEL_100;
    }
    sub_10018165((int)(v40 + 2));
    v41 = *(_DWORD *)(*((_DWORD *)this + 43) + 1268);
    *(_DWORD *)(v41 + 100) = sub_10001F6E(v40[15]);
    if ( v40[15] == 9 )
    {
      v42 = *(_DWORD *)(*((_DWORD *)this + 43) + 1268);
      v43 = sub_10014029();
    }
    else
    {
      if ( *((_DWORD *)GameClient::GroupManager::Instance() + 45) != v40[1] )
        goto LABEL_86;
      v42 = *(_DWORD *)(*((_DWORD *)this + 43) + 1268);
      v43 = sub_1000302B();
    }
    *(_DWORD *)(v42 + 96) = v43;
LABEL_86:
    v44 = v40[54];
    if ( v44 == v39[54] && v44 )
    {
      v45 = -16711936;
    }
    else
    {
      v46 = v40[14];
      if ( v46 == v39[14] && v46 )
        v45 = -59136;
      else
        v45 = v39[13] != v40[13] ? -1 : -16744961;
    }
    *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 43) + 1268) + 84) = v45;
    goto LABEL_94;
  }
  GameClient::Robot::updateCamera(this);
  GameClient::Robot::checkRebornFunc(this);
  GameClient::CombinRobot::UpdateTransformFPV(
    *((GameClient::CombinRobot **)this + 43),
    (GameClient::Robot *)((char *)this + 588),
    (GameClient::Robot *)((char *)this + 576));
  v30 = *((_DWORD *)this + 57);
  if ( !v30 || !*((_BYTE *)this + 700) )
    goto LABEL_74;
  v31 = *(_DWORD *)(v30 + 8);
  if ( *(_DWORD *)(v31 + 308) != 3 )
  {
    if ( *(_DWORD *)(v31 + 308) )
    {
      sub_10014669(v93);
      v37 = 0;
      if ( *((_DWORD *)this + 43) )
      {
        std::string::string(&v89, "WeaponPointRFPV");
        v35 = *((_DWORD *)this + 43);
        v36 = *(unsigned __int8 (__thiscall **)(int, int *, float *, _DWORD))(*(_DWORD *)v35 + 120);
        v100 = 4;
        v78 = 2;
        if ( v36(v35, &v89, v93, 0) )
          v37 = 1;
      }
      v100 = -1;
      if ( (v78 & 2) != 0 )
        std::string::~string(&v89);
      if ( !v37 )
        goto LABEL_73;
    }
    else
    {
      sub_10014669(v93);
      v34 = 0;
      if ( *((_DWORD *)this + 43) )
      {
        std::string::string(&v89, "WeaponPointLFPV");
        v32 = *((_DWORD *)this + 43);
        v33 = *(unsigned __int8 (__thiscall **)(int, int *, float *, _DWORD))(*(_DWORD *)v32 + 120);
        v100 = 3;
        v78 = 1;
        if ( v33(v32, &v89, v93, 0) )
          v34 = 1;
      }
      v100 = -1;
      if ( (v78 & 1) != 0 )
        std::string::~string(&v89);
      if ( !v34 )
        goto LABEL_73;
    }
    (*(void (__thiscall **)(_DWORD, float *))(**((_DWORD **)this + 57) + 40))(*((_DWORD *)this + 57), v93);
    (*(void (__thiscall **)(_DWORD, char *))(**((_DWORD **)this + 57) + 36))(*((_DWORD *)this + 57), v94);
  }
LABEL_73:
  (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 57) + 112))(*((_DWORD *)this + 57));
LABEL_74:
  GameClient::Robot::UpdateHUD(this);
LABEL_101:
  if ( !*((_DWORD *)this + 50) && GameClient::WorldObject::IsLocal(this) )
  {
    v58 = *((_DWORD *)this + 5);
    if ( v58 )
    {
      v59 = *(float *)(v58 + 308);
      if ( v59 != NAN && *((_DWORD *)this + 226) != LODWORD(v59) )
      {
        *(float *)v74 = v59;
        v60 = GameClient::FuncManager::Instance();
        Function = GameClient::FuncManager::GetFunction(v60, v74[0]);
        if ( Function )
        {
          v62 = _RTDynamicCast(
                  Function,
                  0,
                  &GameClient::Function `RTTI Type Descriptor',
                  &GameClient::Func_Receive `RTTI Type Descriptor',
                  0);
          if ( v62 )
          {
            if ( *(_DWORD *)(v62 + 28) )
            {
              v63 = sub_10009E03((int)&v96 + 4, v62 + 124);
              sub_10012107((int)v95, v63);
              (*(void (__thiscall **)(GameClient::Robot *, _BYTE *))(*(_DWORD *)this + 36))(this, v95);
            }
          }
        }
      }
    }
  }
  if ( GameClient::WorldObject::IsLocal(this) && *((_DWORD *)this + 90) == 3 )
  {
    v64 = *((_DWORD *)this + 5);
    if ( v64 )
    {
      v65 = *((_DWORD *)this + 226);
      if ( *(_DWORD *)(v64 + 308) == v65 )
      {
        v74[0] = 0;
        v73 = &GameClient::Func_Receive `RTTI Type Descriptor';
        v72 = &GameClient::Function `RTTI Type Descriptor';
        v71 = 0;
        v70 = v65;
        v66 = GameClient::FuncManager::Instance();
        v67 = GameClient::FuncManager::GetFunction(v66, v70);
        v68 = _RTDynamicCast(v67, v71, v72, v73, v74[0]);
        if ( v68 )
        {
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v68 + 40))(v68, v64);
          *(_DWORD *)(v64 + 308) = -1;
        }
      }
    }
  }
  GameClient::WorldObject::Update(this, a2);
}
