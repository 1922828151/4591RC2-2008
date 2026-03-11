/*
 * func-name: ?LoadResource@SamplePlayer@@QAEXXZ_0
 * func-address: 0x100e6b40
 * callers: 0x10010587
 * callees: 0x1000f1dc, 0x102c0750
 */

void __thiscall SamplePlayer::LoadResource(SamplePlayer *this)
{
  int v2; // eax
  int NodeHandle; // eax
  int Animation; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // edx
  NxPhysics *v18; // eax
  int v19; // [esp+1E4h] [ebp-BCh] BYREF
  const char *v20; // [esp+1E8h] [ebp-B8h]
  int v21; // [esp+1ECh] [ebp-B4h] BYREF
  int v22; // [esp+1F0h] [ebp-B0h]
  int v23; // [esp+1F4h] [ebp-ACh]
  _BYTE *v24; // [esp+1F8h] [ebp-A8h]
  _DWORD *v25; // [esp+1FCh] [ebp-A4h]
  int v26; // [esp+200h] [ebp-A0h]
  int v27; // [esp+204h] [ebp-9Ch]
  float v28; // [esp+208h] [ebp-98h]
  struct Actor *v29; // [esp+20Ch] [ebp-94h]
  int v30; // [esp+210h] [ebp-90h]
  const struct BBox *v31; // [esp+214h] [ebp-8Ch]
  const struct Matrix *v32; // [esp+218h] [ebp-88h]
  int *v33; // [esp+21Ch] [ebp-84h]
  float v34; // [esp+220h] [ebp-80h]
  float v35; // [esp+224h] [ebp-7Ch]
  float v36; // [esp+228h] [ebp-78h]
  _BYTE v37[16]; // [esp+22Ch] [ebp-74h] BYREF
  float v38; // [esp+23Ch] [ebp-64h]
  float v39; // [esp+240h] [ebp-60h]
  float v40; // [esp+244h] [ebp-5Ch]
  float v41; // [esp+248h] [ebp-58h]
  float v42; // [esp+24Ch] [ebp-54h]
  float v43; // [esp+250h] [ebp-50h]
  _DWORD v44[16]; // [esp+254h] [ebp-4Ch] BYREF
  int v45; // [esp+29Ch] [ebp-4h]

  if ( !*((_DWORD *)this + 179) )
  {
    LODWORD(v28) = 1;
    v27 = 0;
    *(float *)&v26 = 0.0;
    v33 = &v19;
    std::string::string(&v19, "M_Pacer_Basic.xml");
    v2 = Precacher::CacheModel();
    v28 = 0.0;
    v33 = &v21;
    v20 = "Weapon_Point";
    *((_DWORD *)this + 179) = v2;
    std::string::string(&v21, v20);
    NodeHandle = StaticModel::GetNodeHandle(*((_DWORD *)this + 179), v21, v22, v23, v24, v25, v26, v27, LODWORD(v28));
    v28 = 0.0;
    v27 = 0;
    v26 = 1;
    v33 = &v19;
    *((_DWORD *)this + 270) = NodeHandle;
    std::string::string(&v19, "M_Pacer_Basic_Idle_GS.X");
    Animation = Model::LoadAnimation(*((_DWORD *)this + 179), v19, v20, v21, v22, v23, v24, v25, v26, v27, LODWORD(v28));
    v28 = 0.0;
    v27 = 0;
    v26 = 1;
    v33 = &v19;
    *((_DWORD *)this + 281) = Animation;
    std::string::string(&v19, "M_Pacer_Basic_WF_GS.X");
    v5 = Model::LoadAnimation(*((_DWORD *)this + 179), v19, v20, v21, v22, v23, v24, v25, v26, v27, LODWORD(v28));
    v28 = 0.0;
    v27 = 0;
    v26 = 1;
    v33 = &v19;
    *((_DWORD *)this + 282) = v5;
    std::string::string(&v19, "M_Pacer_Basic_WB_GS.X");
    v6 = Model::LoadAnimation(*((_DWORD *)this + 179), v19, v20, v21, v22, v23, v24, v25, v26, v27, LODWORD(v28));
    v28 = 0.0;
    v27 = 0;
    v26 = 1;
    v33 = &v19;
    *((_DWORD *)this + 283) = v6;
    std::string::string(&v19, "M_Pacer_Basic_WL_GS.X");
    v7 = Model::LoadAnimation(*((_DWORD *)this + 179), v19, v20, v21, v22, v23, v24, v25, v26, v27, LODWORD(v28));
    v28 = 0.0;
    v27 = 0;
    v26 = 1;
    v33 = &v19;
    *((_DWORD *)this + 284) = v7;
    std::string::string(&v19, "M_Pacer_Basic_WR_GS.X");
    v8 = Model::LoadAnimation(*((_DWORD *)this + 179), v19, v20, v21, v22, v23, v24, v25, v26, v27, LODWORD(v28));
    v28 = 0.0;
    v27 = 0;
    v26 = 1;
    *((_DWORD *)this + 285) = v8;
    v33 = &v19;
    std::string::string(&v19, "M_Pacer_Basic_SIdle_GS.X");
    v9 = Model::LoadAnimation(*((_DWORD *)this + 179), v19, v20, v21, v22, v23, v24, v25, v26, v27, LODWORD(v28));
    v28 = 0.0;
    v27 = 0;
    v26 = 1;
    v33 = &v19;
    *((_DWORD *)this + 286) = v9;
    std::string::string(&v19, "M_Pacer_Basic_SF_GS.X");
    v10 = Model::LoadAnimation(*((_DWORD *)this + 179), v19, v20, v21, v22, v23, v24, v25, v26, v27, LODWORD(v28));
    v28 = 0.0;
    v27 = 0;
    v26 = 1;
    v33 = &v19;
    *((_DWORD *)this + 287) = v10;
    std::string::string(&v19, "M_Pacer_Basic_SB_GS.X");
    v11 = Model::LoadAnimation(*((_DWORD *)this + 179), v19, v20, v21, v22, v23, v24, v25, v26, v27, LODWORD(v28));
    v28 = 0.0;
    v27 = 0;
    v26 = 1;
    v33 = &v19;
    *((_DWORD *)this + 288) = v11;
    std::string::string(&v19, "M_Pacer_Basic_SL_GS.X");
    v12 = Model::LoadAnimation(*((_DWORD *)this + 179), v19, v20, v21, v22, v23, v24, v25, v26, v27, LODWORD(v28));
    v28 = 0.0;
    v27 = 0;
    v26 = 1;
    v33 = &v19;
    *((_DWORD *)this + 289) = v12;
    std::string::string(&v19, "M_Pacer_Basic_SR_GS.X");
    v13 = Model::LoadAnimation(*((_DWORD *)this + 179), v19, v20, v21, v22, v23, v24, v25, v26, v27, LODWORD(v28));
    v28 = 0.0;
    v27 = 0;
    *(float *)&v26 = 0.0;
    v33 = &v19;
    *((_DWORD *)this + 290) = v13;
    std::string::string(&v19, "M_Pacer_Basic_Jump_GS.X");
    v14 = Model::LoadAnimation(*((_DWORD *)this + 179), v19, v20, v21, v22, v23, v24, v25, v26, v27, LODWORD(v28));
    v28 = 0.0;
    v27 = 0;
    *(float *)&v26 = 0.0;
    v33 = &v19;
    *((_DWORD *)this + 291) = v14;
    std::string::string(&v19, "M_Pacer_Basic_Shoot_GS.X");
    *((_DWORD *)this + 292) = Model::LoadAnimation(
                                *((_DWORD *)this + 179),
                                v19,
                                v20,
                                v21,
                                v22,
                                v23,
                                v24,
                                v25,
                                v26,
                                v27,
                                LODWORD(v28));
  }
  if ( !*((_DWORD *)this + 155) )
  {
    sub_1000F1DC();
    v36 = 0.5;
    v42 = 1.0;
    v34 = -0.5;
    v41 = 0.5;
    v35 = -1.0;
    v38 = -0.5;
    v15 = *((_DWORD *)this + 214);
    v39 = -1.0;
    v36 = -0.5;
    qmemcpy(v44, (char *)this + 868, sizeof(v44));
    v16 = *((_DWORD *)this + 215);
    v44[12] = v15;
    v28 = 45.0;
    v27 = 0;
    v44[13] = v16;
    v43 = 0.5;
    *(float *)&v26 = 1.0;
    v25 = v44;
    v24 = v37;
    v40 = -0.5;
    v17 = *((_DWORD *)this + 216);
    v45 = 0;
    v44[14] = v17;
    v18 = (NxPhysics *)NxPhysics::Instance(this, -1, v37, v44, 1.0);
    *((_DWORD *)this + 155) = NxPhysics::CreateControllerActor(
                                v18,
                                v29,
                                v30,
                                v31,
                                v32,
                                *(float *)&v33,
                                (struct PhysicsController_Callback *)LODWORD(v34),
                                v35);
    v45 = -1;
    sub_102C0750(v37);
  }
}
