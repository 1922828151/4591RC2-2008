/*
 * func-name: sub_10148F70
 * func-address: 0x10148f70
 * callers: 0x100158a2
 * callees: 0x10001c8a, 0x1000225c, 0x100029cd, 0x10002f7c, 0x1000ae2a, 0x1000bf05, 0x1000d021, 0x10010bae, 0x10018fc0
 */

void __thiscall sub_10148F70(int this)
{
  int v2; // edi
  bool v3; // zf
  double v4; // st6
  float *v5; // edi
  int v6; // eax
  float *v7; // ecx
  float v8; // ecx
  float v9; // edx
  int v10; // eax
  _DWORD *v11; // ebx
  float v12; // [esp+2Ch] [ebp-98h]
  float v13; // [esp+2Ch] [ebp-98h]
  float v14; // [esp+2Ch] [ebp-98h]
  float v15; // [esp+2Ch] [ebp-98h]
  float v16; // [esp+2Ch] [ebp-98h]
  float v17; // [esp+2Ch] [ebp-98h]
  float v18; // [esp+30h] [ebp-94h]
  float v19; // [esp+30h] [ebp-94h]
  float v20; // [esp+30h] [ebp-94h]
  float v21; // [esp+30h] [ebp-94h]
  float v22; // [esp+30h] [ebp-94h]
  float v23; // [esp+30h] [ebp-94h]
  float v24; // [esp+34h] [ebp-90h]
  float v25; // [esp+34h] [ebp-90h]
  float v26; // [esp+34h] [ebp-90h]
  float v27; // [esp+34h] [ebp-90h]
  float v28; // [esp+34h] [ebp-90h]
  float v29; // [esp+34h] [ebp-90h]
  float v30; // [esp+38h] [ebp-8Ch] BYREF
  float v31; // [esp+3Ch] [ebp-88h]
  float v32; // [esp+40h] [ebp-84h]
  float v33[3]; // [esp+44h] [ebp-80h] BYREF
  _BYTE v34[36]; // [esp+50h] [ebp-74h] BYREF
  _DWORD *v35; // [esp+74h] [ebp-50h]
  int v36; // [esp+78h] [ebp-4Ch]
  int v37; // [esp+C0h] [ebp-4h]

  CollisionInfo::CollisionInfo((CollisionInfo *)v34);
  v2 = *(_DWORD *)(this + 8);
  v3 = *(_BYTE *)(v2 + 160) == 0;
  v37 = 0;
  if ( v3 )
  {
    v5 = (float *)(this + 12);
    v14 = *(float *)(this + 24) - *(float *)(this + 12);
    v26 = *(float *)(this + 28) - *(float *)(this + 16);
    v20 = *(float *)(this + 32) - *(float *)(this + 20);
    v30 = v14;
    v31 = v26;
    v32 = v20;
    sub_100029CD();
    v15 = v14 * 5.0;
    v27 = v26 * 5.0;
    v21 = 5.0 * v20;
    v16 = *(float *)(this + 24) + v15;
    v28 = *(float *)(this + 28) + v27;
    v22 = *(float *)(this + 32) + v21;
    v30 = v16;
    v31 = v28;
    v32 = v22;
    v10 = NxPhysics::Instance(this + 116, this + 12, &v30, 3, v34);
    if ( (unsigned __int8)NxPhysics::RayCast(v10) )
    {
      v11 = v35;
      if ( !v35 || !((v36 - (int)v35) / 12) )
      {
        _invalid_parameter_noinfo();
        v11 = v35;
      }
      *(_DWORD *)(this + 24) = *v11;
      *(_DWORD *)(this + 28) = v11[1];
      *(_DWORD *)(this + 32) = v11[2];
      sub_1000225C((int)v34);
    }
    else
    {
      sub_1000225C(0);
    }
    if ( sub_1000BF05() )
    {
      sub_1000BF05();
      sub_1000AE2A(this + 12);
      v17 = *(float *)(this + 24) - *v5;
      v29 = *(float *)(this + 28) - *(float *)(this + 16);
      v23 = *(float *)(this + 32) - *(float *)(this + 20);
      v30 = v17;
      v31 = v29;
      v32 = v23;
      v33[0] = 0.0;
      v33[1] = 0.0;
      v33[2] = 0.0;
      sub_1000BF05();
      sub_1000D021((int)v33, (int)&v30);
    }
  }
  else
  {
    if ( *(_DWORD *)(v2 + 136) == 2 )
      sub_10001C8A();
    v4 = (double)*(int *)(v2 + 156);
    v5 = (float *)(this + 12);
    *(float *)(this + 40) = *(float *)(this + 40) - v4 * GDeltaTime;
    v18 = *(float *)(this + 36) * GDeltaTime;
    v24 = *(float *)(this + 40) * GDeltaTime;
    v12 = GDeltaTime * *(float *)(this + 44);
    v19 = *(float *)(this + 12) + v18;
    v25 = *(float *)(this + 16) + v24;
    v13 = *(float *)(this + 20) + v12;
    v30 = v19;
    v31 = v25;
    v32 = v13;
    v6 = NxPhysics::Instance(this + 116, this + 12, &v30, 3, v34);
    if ( (unsigned __int8)NxPhysics::RayCast(v6) )
    {
      v7 = (float *)v35;
      if ( !v35 || !((v36 - (int)v35) / 12) )
      {
        _invalid_parameter_noinfo();
        v7 = (float *)v35;
      }
      *v5 = *v7;
      *(float *)(this + 16) = v7[1];
      *(float *)(this + 20) = v7[2];
      sub_1000225C((int)v34);
    }
    else
    {
      v8 = v31;
      v9 = v32;
      *v5 = v30;
      *(float *)(this + 16) = v8;
      *(float *)(this + 20) = v9;
      if ( sub_1000BF05() )
      {
        sub_1000AE2A(this + 12);
        sub_10002F7C(this + 48);
      }
      if ( *(float *)(this + 140) > 0.0 )
        *(float *)(this + 140) = *(float *)(this + 140) - GDeltaTime;
      if ( *(float *)(this + 140) <= 0.0 )
        sub_1000225C(0);
    }
  }
  SoundMgr::Instance();
  SoundMgr::PlaySoundA(this + 260, (int)v5, this + 36, 0, COERCE_INT(0.75));
  v37 = -1;
  CollisionInfo::~CollisionInfo((CollisionInfo *)v34);
}
