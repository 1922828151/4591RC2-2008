/*
 * func-name: ?doMove@Robot@GameClient@@IAEXM@Z_0
 * func-address: 0x101751c0
 * callers: 0x10019b4b
 * callees: 0x100029cd, 0x10005c59, 0x10006a19, 0x10009886, 0x10009e03, 0x1000a984, 0x1000aae7, 0x1000beba, 0x1000d67a, 0x1001144b, 0x1001226a, 0x10013a11, 0x10013c50, 0x1001537a, 0x10018e71, 0x102c09f0, 0x102c0ed0, 0x102c0f00, 0x102c9dbc, 0x102c9fe0
 */

void __userpurge GameClient::Robot::doMove(
        GameClient::Robot *this@<ecx>,
        int a2@<ebx>,
        int a3@<ebp>,
        int a4@<edi>,
        float a5)
{
  float v6; // edx
  float v7; // ecx
  float v8; // eax
  int v9; // edx
  double v10; // st7
  float *v11; // edi
  bool v12; // zf
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  double v17; // st7
  int v18; // eax
  float *v19; // eax
  double v20; // st7
  int v21; // ecx
  float *v22; // eax
  float *v23; // eax
  float v24; // ecx
  float v25; // eax
  float v26; // edx
  double v27; // st7
  double v28; // st6
  int v29; // eax
  NxPhysics *v30; // eax
  int v31; // ecx
  int v32; // eax
  _DWORD *v33; // eax
  float *v34; // edi
  int v35; // eax
  double v36; // st7
  float *v37; // eax
  float *v38; // eax
  int *v39; // ecx
  int v40; // ebp
  int v41; // eax
  int *v42; // eax
  int v43; // ebp
  int v44; // eax
  int v45; // eax
  _DWORD *v46; // ecx
  int v47; // edx
  _DWORD *v48; // eax
  float v49; // ecx
  float v50; // eax
  int v51; // ecx
  double v52; // st7
  int v53; // ecx
  int v54; // eax
  int v55; // eax
  int v56; // ecx
  int v57; // edx
  int v58; // eax
  int v59; // edx
  int v60; // eax
  int v61; // eax
  int v62; // eax
  unsigned int v63; // edi
  int v64; // eax
  unsigned int v65; // ebx
  unsigned int v66; // eax
  int v67; // eax
  int v68; // ebp
  int v69; // eax
  unsigned int v70; // ebx
  unsigned int v71; // eax
  int v72; // eax
  int v73; // eax
  float v74; // [esp+20h] [ebp-ACh]
  float v75; // [esp+24h] [ebp-A8h]
  float v76; // [esp+28h] [ebp-A4h]
  float v77; // [esp+2Ch] [ebp-A0h]
  float v78; // [esp+2Ch] [ebp-A0h]
  struct NxActor *v80; // [esp+34h] [ebp-98h]
  struct Vector *v81; // [esp+38h] [ebp-94h]
  float v82; // [esp+44h] [ebp-88h] BYREF
  float v83; // [esp+48h] [ebp-84h]
  float v84; // [esp+4Ch] [ebp-80h]
  float SquatCoefficient; // [esp+50h] [ebp-7Ch]
  float v86; // [esp+54h] [ebp-78h]
  float v87; // [esp+58h] [ebp-74h]
  float v88; // [esp+5Ch] [ebp-70h]
  float v89; // [esp+60h] [ebp-6Ch]
  float v90; // [esp+64h] [ebp-68h] BYREF
  float v91; // [esp+68h] [ebp-64h]
  float v92; // [esp+6Ch] [ebp-60h]
  float v93; // [esp+70h] [ebp-5Ch]
  int v94; // [esp+74h] [ebp-58h] BYREF
  float v95; // [esp+78h] [ebp-54h]
  float v96; // [esp+7Ch] [ebp-50h]
  float v97; // [esp+80h] [ebp-4Ch] BYREF
  float v98; // [esp+84h] [ebp-48h]
  float v99; // [esp+88h] [ebp-44h]
  _BYTE v100[64]; // [esp+8Ch] [ebp-40h] BYREF

  if ( !*((_DWORD *)this + 50) )
    return;
  if ( (*((_DWORD *)this + 92) & 0x20) == 0 )
  {
    v6 = *((float *)this + 189);
    v7 = *((float *)this + 188);
    v86 = 0.0;
    v8 = *((float *)this + 190);
    v91 = v6;
    *((float *)this + 225) = 1.0;
    v9 = *(_DWORD *)this;
    v90 = v7;
    v92 = v8;
    v10 = 0.0;
    if ( (*(unsigned __int8 (__thiscall **)(GameClient::Robot *, int))(v9 + 52))(this, 4) || *((_DWORD *)this + 90) )
      goto LABEL_29;
    v11 = (float *)((char *)this + 708);
    v82 = 0.0;
    v83 = 0.0;
    v84 = 0.0;
    v93 = 0.0;
    *((float *)this + 179) = 0.0;
    *((float *)this + 178) = 0.0;
    *((float *)this + 177) = 0.0;
    v12 = (*((_BYTE *)this + 744) & 4) == 0;
    *((_DWORD *)this + 89) = 0;
    if ( !v12 )
    {
      v93 = GameClient::RobotBody::GetStrafeCoefficient((GameClient::RobotBody *)*((_DWORD *)this + 50))
          * *((float *)this + 82);
      *v11 = *v11 - 1.0;
      v10 = 0.0;
      *((float *)this + 178) = *((float *)this + 178) + 0.0;
      *((float *)this + 179) = *((float *)this + 179) + 0.0;
      v13 = *((_DWORD *)this + 49);
      if ( v13 )
        v86 = *(float *)(v13 + 276);
    }
    if ( (*((_BYTE *)this + 744) & 8) != 0 )
    {
      v93 = GameClient::RobotBody::GetStrafeCoefficient((GameClient::RobotBody *)*((_DWORD *)this + 50))
          * *((float *)this + 82);
      *v11 = *v11 + 1.0;
      v10 = 0.0;
      *((float *)this + 178) = *((float *)this + 178) + 0.0;
      *((float *)this + 179) = *((float *)this + 179) + 0.0;
      v14 = *((_DWORD *)this + 49);
      if ( v14 )
        v86 = *(float *)(v14 + 276);
    }
    v15 = *((_DWORD *)this + 186);
    if ( (v15 & 1) != 0 )
    {
      v93 = *((float *)this + 82);
      *v11 = *v11 + v10;
      *((float *)this + 178) = v10 + *((float *)this + 178);
      *((float *)this + 179) = *((float *)this + 179) + 1.0;
      v16 = *((_DWORD *)this + 49);
      if ( !v16 )
      {
LABEL_18:
        v19 = (float *)sub_10005C59((int)&v97);
        v12 = *((_DWORD *)this + 186) == 0;
        v87 = *v19 * v93;
        v88 = v19[1] * v93;
        v20 = v93 * v19[2];
        v82 = v87;
        v83 = v88;
        v89 = v20;
        v84 = v89;
        if ( !v12 )
        {
          if ( *((_DWORD *)this + 88) == 1 )
          {
            SquatCoefficient = GameClient::RobotBody::GetSquatCoefficient((GameClient::RobotBody *)*((_DWORD *)this + 50));
            v21 = *((_DWORD *)this + 49);
            v82 = SquatCoefficient * v82;
            v83 = v83 * SquatCoefficient;
            v84 = SquatCoefficient * v84;
            if ( v21 )
            {
              if ( *((float *)this + 82) > 0.0 )
                v86 = *(float *)(v21 + 280) * v93 / *((float *)this + 82);
            }
          }
          sub_102C0ED0(&v94);
          v95 = 0.0;
          sub_100029CD();
          sub_10018E71(v100, (int)&v94);
          v22 = (float *)sub_10009E03((int)&v97, (int)&v82);
          v82 = *v22;
          v83 = v22[1];
          v84 = v22[2];
          v23 = (float *)sub_10009E03((int)&v97, (int)this + 708);
          *v11 = *v23;
          *((float *)this + 178) = v23[1];
          *((float *)this + 179) = v23[2];
          *((float *)this + 178) = 0.0;
          sub_100029CD();
          if ( v86 > 0.0 )
          {
            sub_1000A984();
            *((float *)this + 225) = 0.0 / v86;
          }
        }
        if ( (*((_DWORD *)this + 92) & 0x80) != 0
          || (*(unsigned __int8 (__thiscall **)(GameClient::Robot *, int))(*(_DWORD *)this + 52))(this, 32) )
        {
          *((float *)this + 188) = v82;
          *((float *)this + 190) = v84;
          v24 = *((float *)this + 188);
          v25 = *((float *)this + 190);
          v26 = *((float *)this + 189);
          SquatCoefficient = *((float *)this + 198);
          v91 = v26;
          v90 = SquatCoefficient * v24;
          v92 = SquatCoefficient * v25;
          v91 = *((float *)this + 189);
        }
        else
        {
          v90 = v82 * 0.2000000029802322 + v90;
          v92 = 0.2000000029802322 * v84 + v92;
        }
LABEL_29:
        v27 = 0.0;
        if ( !GameClient::WorldObject::IsLocal(this) && *((float *)this + 194) > 0.0 )
        {
          if ( *((_DWORD *)this + 88) != 3 )
          {
            v90 = *((float *)this + 191) + v90;
            v91 = *((float *)this + 192) + v91;
            v92 = *((float *)this + 193) + v92;
          }
          SquatCoefficient = *((float *)this + 194) - GDeltaTime;
          v28 = SquatCoefficient;
          *((float *)this + 194) = SquatCoefficient;
          if ( v28 <= 0.0 )
          {
            *((float *)this + 193) = 0.0;
            *((float *)this + 192) = 0.0;
            *((float *)this + 191) = 0.0;
          }
        }
        v29 = *((_DWORD *)this + 44);
        if ( v29 )
        {
          v30 = (NxPhysics *)NxPhysics::Instance(v29, &v90, a4, a3, a2);
          NxPhysics::MoveController(v30, v80, v81);
          *((float *)this + 189) = v91;
          v27 = 0.0;
        }
        v31 = *((_DWORD *)this + 44);
        if ( !v31 )
          goto LABEL_50;
        v32 = (*(int (__thiscall **)(int, float *))(*(_DWORD *)v31 + 40))(v31, &v97);
        v33 = (_DWORD *)NxHelper::ToVector(&v94, v32);
        v34 = (float *)((char *)this + 24);
        *((_DWORD *)this + 6) = *v33;
        *((_DWORD *)this + 7) = v33[1];
        v12 = *((_DWORD *)this + 45) == 0;
        *((_DWORD *)this + 8) = v33[2];
        if ( v12 )
        {
LABEL_47:
          v42 = (int *)*((_DWORD *)this + 46);
          if ( v42 )
          {
            v43 = *v42;
            v44 = NxHelper::ToNxVec3(&v97, (char *)this + 24);
            (*(void (__thiscall **)(_DWORD, int))(v43 + 56))(*((_DWORD *)this + 46), v44);
            LogPrintf("Move Trigger Pos: %.2f %.2f %.2f", *v34, *((float *)this + 7), *((float *)this + 8));
          }
          v27 = 0.0;
LABEL_50:
          if ( !*((_DWORD *)this + 90) )
          {
            if ( *((_DWORD *)this + 186) )
            {
              v45 = *((_DWORD *)this + 49);
              if ( v45 )
              {
                if ( !*(_DWORD *)(v45 + 180) )
                {
                  v46 = (_DWORD *)*((_DWORD *)this + 43);
                  v47 = v46[360];
                  v48 = v46 + 360;
                  v46 += 363;
                  *v46 = v47;
                  v46[1] = v48[1];
                  v46[2] = v48[2];
                }
              }
            }
            v49 = *((float *)this + 188);
            v50 = *((float *)this + 190);
            v83 = v27;
            v82 = v49;
            v84 = v50;
            SquatCoefficient = v49 * v49 + 0.0 * 0.0 + v50 * v50;
            SquatCoefficient = sqrt(SquatCoefficient);
            if ( SquatCoefficient > 0.0099999998 )
            {
              v51 = *((_DWORD *)this + 43);
              v52 = *(float *)(v51 + 1452);
              v53 = v51 + 1452;
              SquatCoefficient = v52 * v82 + *(float *)(v53 + 4) * 0.0 + *(float *)(v53 + 8) * v84;
              if ( SquatCoefficient <= 0.5 )
              {
                if ( SquatCoefficient >= -0.69999999 )
                {
                  v97 = 0.0;
                  v98 = 1.0;
                  v99 = 0.0;
                  v54 = sub_102C09F0(&v94, v53, &v97);
                  sub_1000BEBA(v54);
                  SquatCoefficient = 0.0;
                  if ( (float)0.0 <= 0.0 )
                  {
                    if ( (float)0.0 < -0.0 )
                      *((_DWORD *)this + 89) = 3;
                  }
                  else
                  {
                    *((_DWORD *)this + 89) = 4;
                  }
                }
                else
                {
                  *((_DWORD *)this + 89) = 2;
                }
              }
              else
              {
                *((_DWORD *)this + 89) = 1;
              }
            }
            if ( (*((_DWORD *)this + 92) & 0x80) != 0 )
            {
              v55 = *((_DWORD *)this + 88);
              if ( v55 == 4 || v55 == 3 )
                *((_DWORD *)this + 88) = *((_DWORD *)this + 90) != 1 ? 0 : 2;
            }
            else if ( *((float *)this + 189) >= -2.0 )
            {
              if ( *((float *)this + 189) > 0.0 && *((_DWORD *)this + 88) == 4 )
              {
                v12 = *((_BYTE *)this + 920) == 0;
                v59 = *((_DWORD *)this + 7);
                v60 = *((_DWORD *)this + 8);
                *((_DWORD *)this + 183) = *((_DWORD *)this + 6);
                *((_DWORD *)this + 184) = v59;
                *((_DWORD *)this + 88) = 3;
                *((_DWORD *)this + 185) = v60;
                if ( v12 )
                {
                  GameClient::CombinRobot::PlayAnimationDown(
                    *((GameClient::CombinRobot **)this + 43),
                    *(_DWORD *)(*((_DWORD *)this + 43) + 1684),
                    0.2,
                    1.0,
                    1.0,
                    0.0,
                    1);
                  Model::SetAnimPosition(
                    *(Model **)(*((_DWORD *)this + 43) + 716),
                    *(_DWORD *)(*((_DWORD *)this + 43) + 1496),
                    *(float *)(*((_DWORD *)this + 43) + 1504));
                  if ( *((_DWORD *)this + 57) )
                  {
                    v78 = *(float *)(*((_DWORD *)this + 43) + 1504);
                    v61 = sub_10009886(*((_DWORD *)this + 58) - 1);
                    GameClient::CombinRobot::PlayAnimationUp(
                      *((GameClient::CombinRobot **)this + 43),
                      *(_DWORD *)(v61 + 48),
                      0.2,
                      1.0,
                      1.0,
                      v78,
                      1);
                  }
                  else
                  {
                    GameClient::CombinRobot::PlayAnimationUp(
                      *((GameClient::CombinRobot **)this + 43),
                      *(_DWORD *)(*((_DWORD *)this + 43) + 1652),
                      0.2,
                      1.0,
                      1.0,
                      *(float *)(*((_DWORD *)this + 43) + 1504),
                      1);
                  }
                }
              }
            }
            else if ( *((_DWORD *)this + 88) != 4 )
            {
              v12 = *((_BYTE *)this + 920) == 0;
              v56 = *((_DWORD *)this + 7);
              v57 = *((_DWORD *)this + 8);
              *((_DWORD *)this + 183) = *((_DWORD *)this + 6);
              *((_DWORD *)this + 184) = v56;
              *((_DWORD *)this + 88) = 4;
              *((_DWORD *)this + 185) = v57;
              if ( v12 )
              {
                GameClient::CombinRobot::PlayAnimationDown(
                  *((GameClient::CombinRobot **)this + 43),
                  *(_DWORD *)(*((_DWORD *)this + 43) + 1688),
                  0.2,
                  1.0,
                  1.0,
                  0.0,
                  0);
                v77 = 0.0;
                v76 = 1.0;
                v75 = 1.0;
                v74 = 0.2;
                if ( *((_DWORD *)this + 57) )
                {
                  v58 = sub_10009886(*((_DWORD *)this + 58) - 1);
                  GameClient::CombinRobot::PlayAnimationUp(
                    *((GameClient::CombinRobot **)this + 43),
                    *(_DWORD *)(v58 + 48),
                    v74,
                    v75,
                    v76,
                    v77,
                    0);
                }
                else
                {
                  GameClient::CombinRobot::PlayAnimationUp(
                    *((GameClient::CombinRobot **)this + 43),
                    *(_DWORD *)(*((_DWORD *)this + 43) + 1656),
                    v74,
                    v75,
                    v76,
                    v77,
                    0);
                }
              }
            }
          }
          goto LABEL_80;
        }
        sub_102C0ED0(&v82);
        v35 = *((_DWORD *)this + 89);
        switch ( v35 )
        {
          case 2:
            v87 = -v82;
            v88 = -v83;
            v36 = v84;
LABEL_45:
            v89 = -v36;
            v84 = v89;
            v83 = v88;
            v82 = v87;
            break;
          case 4:
            v37 = (float *)sub_102C0F00(&v94);
            v82 = *v37;
            v83 = v37[1];
            v84 = v37[2];
            break;
          case 3:
            v38 = (float *)sub_102C0F00(&v94);
            v87 = -*v38;
            v88 = -v38[1];
            v36 = v38[2];
            goto LABEL_45;
        }
        v83 = 0.0;
        sub_100029CD();
        v39 = (int *)*((_DWORD *)this + 45);
        SquatCoefficient = *((float *)this + 111) - *((float *)this + 108);
        v87 = SquatCoefficient * v82;
        v88 = SquatCoefficient * v83;
        v89 = SquatCoefficient * v84;
        *(float *)&v94 = v87 * 0.5;
        v95 = v88 * 0.5;
        v96 = 0.5 * v89;
        v97 = *v34 + *(float *)&v94;
        v98 = *((float *)this + 7) + v95;
        v99 = *((float *)this + 8) + v96;
        v40 = *v39;
        v41 = NxHelper::ToNxVec3(&v94, &v97);
        (*(void (__thiscall **)(_DWORD, int))(v40 + 24))(*((_DWORD *)this + 45), v41);
        goto LABEL_47;
      }
      v17 = *(float *)(v16 + 268);
    }
    else
    {
      if ( (v15 & 2) == 0 )
        goto LABEL_18;
      v93 = GameClient::RobotBody::GetBackCoefficient((GameClient::RobotBody *)*((_DWORD *)this + 50))
          * *((float *)this + 82);
      *v11 = *v11 + 0.0;
      *((float *)this + 178) = *((float *)this + 178) + 0.0;
      *((float *)this + 179) = *((float *)this + 179) - 1.0;
      v18 = *((_DWORD *)this + 49);
      if ( !v18 )
        goto LABEL_18;
      v17 = *(float *)(v18 + 272);
    }
    v86 = v17;
    goto LABEL_18;
  }
LABEL_80:
  if ( GameClient::WorldObject::IsLocal(this) )
  {
    if ( !*((_DWORD *)this + 89)
      || (v62 = *((_DWORD *)this + 92), (v62 & 0x80) == 0)
      || *((_DWORD *)this + 88)
      || (v62 & 0x20) != 0 )
    {
      v70 = *((_DWORD *)this + 366);
      if ( v70 != -1 )
      {
        v71 = *((_DWORD *)this + 369);
        if ( v71 )
          v71 = (int)(*((_DWORD *)this + 370) - v71) / 80;
        if ( v71 > v70 )
        {
          if ( *(_DWORD *)(sub_10013A11(*((_DWORD *)this + 366)) + 56) )
          {
            v72 = sub_10013A11(*((_DWORD *)this + 366));
            if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(v72 + 56) + 40))(*(_DWORD *)(v72 + 56)) )
            {
              v73 = sub_10013A11(*((_DWORD *)this + 366));
              (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v73 + 56) + 44))(*(_DWORD *)(v73 + 56));
            }
          }
        }
      }
    }
    else
    {
      v63 = *((_DWORD *)this + 366);
      if ( v63 != -1 && sub_1001144B() <= v63 )
        *((_DWORD *)this + 366) = -1;
      if ( *((_DWORD *)this + 366) != -1 )
      {
        if ( *(_DWORD *)(sub_10013A11(*((_DWORD *)this + 366)) + 56) )
        {
          v64 = sub_10013A11(*((_DWORD *)this + 366));
          if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(v64 + 56) + 40))(*(_DWORD *)(v64 + 56)) )
            *((_DWORD *)this + 366) = -1;
        }
      }
      if ( *((_DWORD *)this + 366) == -1 )
      {
        if ( sub_1001144B() )
        {
          v65 = sub_1001144B();
          v66 = rand();
          *((_DWORD *)this + 366) = v66 % v65;
          if ( *(_DWORD *)(sub_10013A11(v66 % v65) + 56) )
          {
            v67 = sub_10013A11(*((_DWORD *)this + 366));
            (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(v67 + 56) + 36))(
              *(_DWORD *)(v67 + 56),
              0,
              0.75);
          }
        }
      }
      if ( *((_DWORD *)this + 366) != -1 )
      {
        v68 = (int)(*((float *)this + 225) * 22050.0 * *((float *)this + 367));
        if ( *(_DWORD *)(sub_10013A11(*((_DWORD *)this + 366)) + 56) )
        {
          v69 = sub_10013A11(*((_DWORD *)this + 366));
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v69 + 56) + 24))(*(_DWORD *)(v69 + 56), v68);
        }
      }
    }
  }
}
