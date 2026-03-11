/*
 * func-name: ?UpdateCamera@Seat@GameClient@@UAEXABVVector@@_N@Z_0
 * func-address: 0x101b1f60
 * callers: 0x100190f1
 * callees: 0x100029cd, 0x10002e37, 0x10003af3, 0x1000a06f, 0x1000a097, 0x1000a3a8, 0x1000a984, 0x1000aa9c, 0x1000ed13, 0x10014669, 0x10014fce, 0x10016a4f, 0x10018aca, 0x10018e71, 0x102c0c90, 0x102c0ed0, 0x102c26d0, 0x102c9d50, 0x102c9db6, 0x102c9dbc
 */

void __thiscall GameClient::Seat::UpdateCamera(GameClient::Seat *this, const struct Vector *a2, bool a3)
{
  GameClient::RobotManager *v4; // eax
  struct GameClient::Robot *v5; // eax
  struct GameClient::Robot *v6; // esi
  unsigned __int8 v7; // al
  bool v8; // zf
  int v9; // edx
  GameClient::Establishment *v10; // ecx
  int v11; // eax
  char *v12; // esi
  double v13; // st7
  float *v14; // eax
  float v15; // eax
  float *v16; // eax
  float v17; // ecx
  float v18; // edx
  float v19; // ecx
  float v20; // edx
  float *v21; // eax
  float v22; // eax
  float *v23; // eax
  float v24; // edx
  double v25; // st7
  const void *v26; // esi
  float *v27; // eax
  CameraHandler *v28; // eax
  int v29; // [esp-8h] [ebp-148h]
  int v30; // [esp-4h] [ebp-144h]
  float v31; // [esp+0h] [ebp-140h]
  float v32; // [esp+4h] [ebp-13Ch]
  float v33; // [esp+4h] [ebp-13Ch]
  float v34; // [esp+4h] [ebp-13Ch]
  float v35; // [esp+4h] [ebp-13Ch]
  int v36; // [esp+8h] [ebp-138h]
  bool v37; // [esp+8h] [ebp-138h]
  float v38; // [esp+8h] [ebp-138h]
  int v39; // [esp+8h] [ebp-138h]
  float v40; // [esp+20h] [ebp-120h]
  float v41; // [esp+20h] [ebp-120h]
  float v42; // [esp+20h] [ebp-120h]
  float v43; // [esp+20h] [ebp-120h]
  float v44; // [esp+20h] [ebp-120h]
  float v45; // [esp+20h] [ebp-120h]
  float v46; // [esp+20h] [ebp-120h]
  float v47; // [esp+20h] [ebp-120h]
  float v48; // [esp+20h] [ebp-120h]
  float v49; // [esp+20h] [ebp-120h]
  float v50; // [esp+20h] [ebp-120h]
  float v51; // [esp+20h] [ebp-120h]
  float v52; // [esp+20h] [ebp-120h]
  float v53; // [esp+20h] [ebp-120h]
  int v54; // [esp+20h] [ebp-120h]
  float v55; // [esp+24h] [ebp-11Ch]
  float v56; // [esp+24h] [ebp-11Ch]
  float v57; // [esp+24h] [ebp-11Ch]
  float v58; // [esp+24h] [ebp-11Ch]
  float v59; // [esp+24h] [ebp-11Ch]
  float v60; // [esp+24h] [ebp-11Ch]
  float v61; // [esp+28h] [ebp-118h]
  float v62; // [esp+28h] [ebp-118h]
  float v63; // [esp+28h] [ebp-118h]
  float v64; // [esp+28h] [ebp-118h]
  float v65; // [esp+28h] [ebp-118h]
  float v66; // [esp+28h] [ebp-118h]
  float v67; // [esp+28h] [ebp-118h]
  int v68; // [esp+2Ch] [ebp-114h] BYREF
  float v69; // [esp+30h] [ebp-110h]
  float v70; // [esp+34h] [ebp-10Ch]
  int v71; // [esp+38h] [ebp-108h] BYREF
  float v72; // [esp+3Ch] [ebp-104h]
  float v73; // [esp+40h] [ebp-100h]
  float v74; // [esp+44h] [ebp-FCh] BYREF
  float v75; // [esp+48h] [ebp-F8h]
  float v76; // [esp+4Ch] [ebp-F4h]
  bool v77[4]; // [esp+50h] [ebp-F0h]
  int v78; // [esp+54h] [ebp-ECh] BYREF
  int v79; // [esp+58h] [ebp-E8h] BYREF
  float v80; // [esp+5Ch] [ebp-E4h]
  float v81; // [esp+60h] [ebp-E0h]
  int v82; // [esp+64h] [ebp-DCh] BYREF
  void *v83; // [esp+68h] [ebp-D8h]
  int v84; // [esp+6Ch] [ebp-D4h]
  int v85; // [esp+70h] [ebp-D0h]
  _BYTE v86[64]; // [esp+74h] [ebp-CCh] BYREF
  char v87[64]; // [esp+B4h] [ebp-8Ch] BYREF
  float v88[19]; // [esp+F4h] [ebp-4Ch] BYREF

  v36 = *((_DWORD *)this + 19);
  v77[0] = 0;
  v4 = GameClient::RobotManager::Instance();
  *(float *)&v5 = COERCE_FLOAT(GameClient::RobotManager::GetRobot(v4, v36));
  v6 = v5;
  v78 = (int)v5;
  if ( *(float *)&v5 == 0.0 )
    goto LABEL_32;
  v7 = *((_BYTE *)v5 + 700);
  v8 = *((_BYTE *)this + 345) == v7;
  v77[0] = *((_BYTE *)v6 + 700);
  if ( !v8 )
  {
    v9 = *((_DWORD *)this + 3);
    v37 = v77[0];
    v10 = (GameClient::Establishment *)*((_DWORD *)this + 22);
    *((_BYTE *)this + 345) = v7;
    GameClient::Establishment::CheckSeatHideModelFrame(v10, v9, v37);
  }
  v11 = sub_10016A4F(*((_DWORD *)v6 + 4));
  if ( !v11 || !*(_BYTE *)(v11 + 304) )
  {
LABEL_32:
    if ( !*((_BYTE *)this + 346) )
    {
      sub_10014669(v87);
      sub_102C26D0(*((float *)this + 44), *((float *)this + 45), *((float *)this + 46));
      sub_10014669(v86);
      if ( a3 )
        v12 = (char *)this + 204;
      else
        v12 = (char *)(*((_DWORD *)this + 22) + 36);
      v13 = 0.0;
      qmemcpy(v86, v12, sizeof(v86));
      if ( v77[0] )
      {
        *(float *)&v68 = 0.0;
        v69 = 0.0;
        v70 = 0.0;
        v14 = (float *)sub_102C0ED0(&v79);
        v68 = *(int *)v14;
        v69 = v14[1];
        v15 = v14[2];
        v69 = 0.0;
        v70 = v15;
        sub_100029CD();
        *((float *)this + 84) = sub_102C0C90(&v68);
        v16 = (float *)sub_102C0ED0(&v79);
        v68 = *(int *)v16;
        v17 = v16[1];
        v71 = v68;
        v69 = v17;
        v18 = v16[2];
        v72 = 0.0;
        v70 = v18;
        v73 = v18;
        sub_100029CD();
        v13 = 0.0;
        v55 = 0.0;
        v61 = fabs(v69);
        if ( v61 > 0.001 )
        {
          v62 = v70 * v70 + *(float *)&v68 * *(float *)&v68 + v69 * v69;
          v63 = sqrt(v62);
          v40 = v63;
          v64 = v72 * v72 + *(float *)&v71 * *(float *)&v71 + v73 * v73;
          v65 = sqrt(v64);
          v56 = v65;
          v66 = v72 * v69 + *(float *)&v71 * *(float *)&v68 + v73 * v70;
          v41 = v66 / (v56 * v40);
          v42 = acos(v41);
          v57 = v42;
          v13 = 0.0;
          if ( v69 > 0.0 )
            v57 = 6.283185482025146 - v42;
          v55 = v57 * 57.29577791868205;
        }
        *((float *)this + 83) = v55;
      }
      v19 = *((float *)a2 + 1);
      v20 = *((float *)a2 + 2);
      v74 = *(float *)a2;
      v75 = v19;
      v76 = v20;
      if ( !v77[0] )
      {
        if ( *((_BYTE *)this + 344) )
        {
          v38 = v13;
          v51 = *((float *)this + 68) * 0.01745329300562541;
          v33 = v51;
          v52 = 0.01745329300562541 * *((float *)this + 67);
          sub_102C26D0(v52, v33, v38);
          v26 = (const void *)sub_10018ACA(v88, *((_DWORD *)this + 22) + 36);
          v27 = (float *)(*((_DWORD *)this + 22) + 24);
          qmemcpy(v86, v26, sizeof(v86));
          v74 = *v27;
          v75 = v27[1];
          v76 = v27[2];
        }
        else
        {
          *(float *)&v68 = v13;
          v69 = v13;
          v70 = v13;
          v21 = (float *)sub_102C0ED0(&v79);
          v68 = *(int *)v21;
          v69 = v21[1];
          v22 = v21[2];
          v69 = 0.0;
          v70 = v22;
          sub_100029CD();
          CameraHandler::Instance();
          v43 = sub_102C0C90(&v68);
          *((float *)this + 84) = CameraHandler::CircleLerp(*((float *)this + 84), v43, 1.0);
          v23 = (float *)sub_102C0ED0(&v79);
          v68 = *(int *)v23;
          v69 = v23[1];
          v24 = v23[2];
          v79 = v68;
          v70 = v24;
          v80 = 0.0;
          v81 = v24;
          sub_100029CD();
          v58 = 0.0;
          v44 = fabs(v69);
          if ( v44 > 0.001 )
          {
            v45 = v69 * v80 + *(float *)&v79 * *(float *)&v68 + v81 * v70;
            sub_1000A984();
            sub_1000A984();
            v46 = v45 / (v45 * v45);
            v47 = acos(v46);
            v59 = v47;
            if ( v69 > 0.0 )
              v59 = 6.283185482025146 - v47;
            v58 = v59 * 57.29577791868205;
          }
          CameraHandler::Instance();
          v48 = CameraHandler::CircleLerp(*((float *)this + 83), v58, 1.0);
          v25 = v48;
          *((float *)this + 83) = v48;
          v49 = *((float *)this + 84) * 0.01745329300562541;
          v32 = v49;
          v50 = v25 * 0.01745329300562541;
          sub_102C26D0(v50, v32, 0.0);
        }
        sub_102C0ED0(&v71);
        v53 = -*((float *)this + 47);
        *(float *)&v71 = *(float *)&v71 * v53;
        v72 = v72 * v53;
        v73 = v53 * v73;
        v75 = *((float *)this + 47) * 0.300000011920929 + v75;
        v74 = v74 + *(float *)&v71;
        v75 = v72 + v75;
        v76 = v76 + v73;
        *(float *)&v54 = *(float *)a2 - v74;
        v67 = *((float *)a2 + 1) - v75;
        v60 = *((float *)a2 + 2) - v76;
        v79 = v54;
        v71 = v54;
        v80 = v67;
        v72 = v67;
        v81 = v60;
        v73 = v60;
        sub_100029CD();
        v13 = 0.0;
        qmemcpy(v86, (const void *)sub_10018E71(v88, (int)&v71), sizeof(v86));
      }
      if ( *(float *)&v78 != 0.0 )
      {
        v78 = *(int *)(v78 + 668);
        v39 = v78;
        v34 = v13;
        v28 = CameraHandler::Instance();
        CameraHandler::setToView(v28, (struct Vector *)&v74, (struct Matrix *)v86, v34, *(float *)&v39);
      }
      if ( !v77[0] )
      {
        v83 = 0;
        v84 = 0;
        v85 = 0;
        v78 = *(int *)(*((_DWORD *)this + 22) + 12);
        v88[18] = 0.0;
        sub_10002E37(&v82, (int)&v78);
        v30 = *(_DWORD *)a2;
        v31 = *((float *)a2 + 1);
        v35 = *((float *)a2 + 2);
        v29 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 22) + 300) + 712);
        CameraHandler::Instance();
        CameraHandler::setRayCheck(v29, v30, v31, v35, (int)&v82);
        if ( v83 )
          operator delete(v83);
      }
    }
  }
}
