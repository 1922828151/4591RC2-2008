/*
 * func-name: ?Update@Seat@GameClient@@QAEXM@Z_0
 * func-address: 0x101b10c0
 * callers: 0x10010ebf
 * callees: 0x10001b04, 0x10006a19, 0x100077ed, 0x1000a3a8, 0x1000a5b0, 0x1000cda6, 0x1000ed13, 0x10011efa, 0x10011f3b, 0x10013647, 0x100146eb, 0x10015bef, 0x10015eab, 0x10016a4f, 0x102c9dbc
 */

void __thiscall GameClient::Seat::Update(GameClient::Seat *this, float a2)
{
  bool v3; // zf
  GameClient::RobotManager *v4; // eax
  struct GameClient::Robot *Robot; // edi
  unsigned int i; // edi
  int v7; // ecx
  double *FunctionByType; // ebx
  unsigned int j; // edi
  int v10; // ecx
  int v11; // ecx
  GameClient::RobotManager *v12; // eax
  GameClient::WorldObject *v13; // eax
  GameClient::WorldObject *v14; // ebx
  int v15; // ecx
  double v16; // st7
  double v17; // st6
  double v18; // st7
  int v19; // eax
  int v20; // ecx
  int v21; // edx
  float v22; // edx
  float v23; // edx
  float v24; // ecx
  float *v25; // eax
  double v26; // st7
  double v27; // st7
  double v28; // st7
  float v29; // edx
  float v30; // eax
  float v31; // ecx
  float v32; // edx
  float v33; // eax
  float v34; // ecx
  double v35; // st7
  double v36; // st6
  double v37; // st7
  float v38; // edx
  float v39; // eax
  double v40; // st7
  double v41; // st7
  double v42; // st7
  double v43; // st7
  int v44; // esi
  int v45; // [esp+10h] [ebp-54h]
  float v46; // [esp+10h] [ebp-54h]
  int v47; // [esp+10h] [ebp-54h]
  float v48; // [esp+28h] [ebp-3Ch] BYREF
  float v49; // [esp+2Ch] [ebp-38h]
  float v50; // [esp+30h] [ebp-34h] BYREF
  float v51; // [esp+34h] [ebp-30h] BYREF
  float v52; // [esp+38h] [ebp-2Ch]
  float v53; // [esp+3Ch] [ebp-28h]
  float v54; // [esp+40h] [ebp-24h]
  float v55; // [esp+44h] [ebp-20h]
  float v56; // [esp+48h] [ebp-1Ch]
  float v57; // [esp+4Ch] [ebp-18h] BYREF
  float v58; // [esp+50h] [ebp-14h]
  float v59; // [esp+54h] [ebp-10h]
  float v60; // [esp+60h] [ebp-4h]

  if ( *((_DWORD *)this + 19) != -1 )
  {
    v3 = *((_BYTE *)this + 346) == 0;
    if ( *((_BYTE *)this + 346) )
      goto LABEL_6;
    v45 = *((_DWORD *)this + 19);
    v4 = GameClient::RobotManager::Instance();
    Robot = GameClient::RobotManager::GetRobot(v4, v45);
    if ( Robot )
    {
      (*(void (__thiscall **)(struct GameClient::Robot *, char *))(*(_DWORD *)Robot + 36))(Robot, (char *)this + 100);
      (*(void (__thiscall **)(struct GameClient::Robot *, char *))(*(_DWORD *)Robot + 40))(Robot, (char *)this + 112);
    }
  }
  v3 = *((_BYTE *)this + 346) == 0;
LABEL_6:
  if ( v3 )
  {
    for ( i = 0; ; ++i )
    {
      v7 = *((_DWORD *)this + 8);
      if ( !v7 || i >= (*((_DWORD *)this + 9) - v7) >> 2 )
        break;
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(*((_DWORD *)this + 8) + 4 * i) + 32))(LODWORD(a2));
    }
  }
  if ( *((_DWORD *)this + 22) )
  {
    if ( !*((_BYTE *)this + 346) )
    {
      FunctionByType = (double *)GameClient::Establishment::GetFunctionByType(5);
      if ( FunctionByType )
      {
        for ( j = 0; ; ++j )
        {
          v10 = *((_DWORD *)this + 8);
          if ( !v10 || j >= (*((_DWORD *)this + 9) - v10) >> 2 )
            break;
          v11 = *(_DWORD *)(*((_DWORD *)this + 8) + 4 * j);
          v48 = FunctionByType[6];
          v46 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v11 + 116))(
                  v11,
                  LODWORD(a2),
                  LODWORD(v48));
          GameClient::Func_Power::UseEnergy((GameClient::Func_Power *)FunctionByType, v46);
        }
      }
    }
  }
  v47 = *((_DWORD *)this + 19);
  v12 = GameClient::RobotManager::Instance();
  v13 = GameClient::RobotManager::GetRobot(v12, v47);
  v14 = v13;
  if ( v13 )
  {
    if ( GameClient::WorldObject::IsLocal(v13) )
    {
      v48 = *((float *)this + 79) + GDeltaTime;
      v18 = v48;
      *((float *)this + 79) = v48;
      if ( v18 > 1.0
        || (v49 = *((float *)this + 76) - *((float *)this + 44),
            v48 = *((float *)this + 77) - *((float *)this + 45),
            v50 = *((float *)this + 78) - *((float *)this + 46),
            v50 = v48 * v48 + v49 * v49 + v50 * v50,
            v50 = sqrt(v50),
            v50 > 0.30000001) )
      {
        v19 = *((_DWORD *)this + 44);
        v20 = *((_DWORD *)this + 45);
        *((float *)this + 79) = 0.0;
        v21 = *((_DWORD *)this + 46);
        *((_DWORD *)this + 76) = v19;
        *((_DWORD *)this + 77) = v20;
        *((_DWORD *)this + 78) = v21;
        if ( sub_10016A4F(*((_DWORD *)v14 + 4)) )
        {
          sub_100077ED((int)&v48, 9, 28, COERCE_INT(0.0), 1, 512);
          v22 = *(float *)(*((_DWORD *)this + 22) + 12);
          v60 = 0.0;
          v50 = v22;
          sub_10001B04((int)&v50);
          sub_10015EAB((int)this + 12);
          sub_10015BEF((int)this + 176);
          sub_10015BEF((int)this + 180);
          sub_10015BEF((int)this + 184);
          j_nullsub_44((int)&v48);
          v60 = NAN;
          if ( v48 != 0.0 )
            Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)LODWORD(v48));
        }
      }
    }
    else
    {
      v15 = *((_DWORD *)this + 6);
      v51 = *((float *)this + 80) - *((float *)this + 44);
      v52 = *((float *)this + 81) - *((float *)this + 45);
      v53 = *((float *)this + 82) - *((float *)this + 46);
      v54 = v51 * 100.0;
      v55 = v52 * 100.0;
      v56 = 100.0 * v53;
      v48 = *(float *)(v15 + 264);
      v16 = v48;
      v51 = v48 * v54;
      v17 = v55;
      *((float *)this + 70) = v51;
      v52 = v17 * v16;
      *((float *)this + 71) = v52;
      v53 = v16 * v56;
      *((float *)this + 72) = v53;
    }
    v23 = *((float *)this + 70);
    v24 = *((float *)this + 72);
    v55 = *((float *)this + 71);
    v25 = (float *)*((_DWORD *)this + 6);
    v54 = v23;
    v26 = v23 * v25[62];
    v25 += 62;
    v56 = v24;
    v51 = v26;
    v27 = v25[1] * v55;
    v55 = *((float *)this + 74);
    v52 = v27;
    v28 = v25[2];
    v54 = *((float *)this + 73);
    v53 = v28 * v24;
    v29 = *((float *)this + 75);
    v50 = GDeltaTime;
    v56 = v29;
    v57 = v51 * GDeltaTime;
    v58 = v52 * GDeltaTime;
    v59 = GDeltaTime * v53;
    v51 = v54 + v57;
    v52 = v55 + v58;
    v53 = v29 + v59;
    GameClient::Seat::SetRotationSpeed(this, (struct Vector *)&v51);
  }
  else
  {
    v57 = 0.0;
    v58 = 0.0;
    v59 = 0.0;
    GameClient::Seat::SetRotationSpeed(this, (struct Vector *)&v57);
  }
  if ( !*((_BYTE *)this + 344) )
  {
    v30 = *((float *)this + 74);
    v31 = *((float *)this + 75);
    v57 = *((float *)this + 73);
    v32 = *((float *)this + 46);
    v50 = GDeltaTime;
    v58 = v30;
    v33 = *((float *)this + 44);
    v59 = v31;
    v34 = *((float *)this + 45);
    v35 = v57 * GDeltaTime;
    v57 = v33;
    v54 = v35;
    v36 = v58;
    v58 = v34;
    v55 = v36 * GDeltaTime;
    v37 = GDeltaTime * v59;
    v59 = v32;
    v56 = v37;
    v51 = v33 + v54;
    v52 = v34 + v55;
    v53 = v32 + v56;
    GameClient::Seat::SetLocalRotation(this, (struct Vector *)&v51);
  }
  v38 = *((float *)this + 74);
  v39 = *((float *)this + 75);
  v51 = *((float *)this + 73);
  v40 = *(float *)(*((_DWORD *)this + 6) + 260);
  v52 = v38;
  v53 = v39;
  v48 = v40 * GDeltaTime;
  v41 = v51;
  sub_1000A5B0(v51, v48);
  v51 = v41;
  v42 = v52;
  sub_1000A5B0(v52, v48);
  v52 = v42;
  v43 = v53;
  sub_1000A5B0(v53, v48);
  v53 = v43;
  GameClient::Seat::SetRotationSpeed(this, (struct Vector *)&v51);
  v44 = *((_DWORD *)this + 87);
  if ( v44 )
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v44 + 36))(v44, LODWORD(a2));
}
