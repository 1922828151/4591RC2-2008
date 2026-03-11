/*
 * func-name: ?Update@DamageEquip@GameClient@@UAEXM@Z_0
 * func-address: 0x1014e630
 * callers: 0x10002da6
 * callees: 0x100029cd, 0x100081c5, 0x100167ca, 0x10018e71, 0x102c0ed0
 */

void __thiscall GameClient::DamageEquip::Update(GameClient::DamageEquip *this, float a2)
{
  double v3; // st7
  int v4; // ebp
  int *v5; // edi
  int v6; // eax
  float *v7; // ecx
  double v8; // st7
  void (__thiscall *v9)(GameClient::DamageEquip *, float *); // edx
  int v10; // edx
  int v11; // eax
  int v12; // eax
  int *v13; // ecx
  int v14; // [esp+18h] [ebp-10Ch]
  float v15; // [esp+1Ch] [ebp-108h]
  float v16; // [esp+20h] [ebp-104h]
  float v17; // [esp+24h] [ebp-100h]
  float v18; // [esp+28h] [ebp-FCh]
  float v19; // [esp+40h] [ebp-E4h]
  float v20; // [esp+40h] [ebp-E4h]
  float v21; // [esp+44h] [ebp-E0h]
  float v22; // [esp+44h] [ebp-E0h]
  float v23; // [esp+48h] [ebp-DCh]
  float v24; // [esp+48h] [ebp-DCh]
  float v25; // [esp+4Ch] [ebp-D8h] BYREF
  float v26; // [esp+50h] [ebp-D4h]
  int v27; // [esp+54h] [ebp-D0h]
  float v28[3]; // [esp+58h] [ebp-CCh] BYREF
  int v29[3]; // [esp+64h] [ebp-C0h] BYREF
  _BYTE v30[48]; // [esp+70h] [ebp-B4h] BYREF
  int v31; // [esp+A0h] [ebp-84h]
  int v32; // [esp+A4h] [ebp-80h]
  int v33; // [esp+A8h] [ebp-7Ch]
  _BYTE v34[36]; // [esp+B0h] [ebp-74h] BYREF
  float *v35; // [esp+D4h] [ebp-50h]
  int v36; // [esp+D8h] [ebp-4Ch]
  int v37; // [esp+120h] [ebp-4h]

  v3 = a2;
  if ( *((_BYTE *)this + 820) )
  {
    v4 = *((_DWORD *)this + 2);
    v5 = (int *)((char *)this + 24);
    *((float *)this + 203) = *((float *)this + 203) - (double)*(int *)(v4 + 2204) * v3;
    v23 = *((float *)this + 202) * v3;
    v21 = *((float *)this + 203) * v3;
    v19 = v3 * *((float *)this + 204);
    v24 = *((float *)this + 6) + v23;
    v22 = *((float *)this + 7) + v21;
    v20 = *((float *)this + 8) + v19;
    v28[0] = v24;
    v28[1] = v22;
    v28[2] = v20;
    CollisionInfo::CollisionInfo((CollisionInfo *)v34);
    v37 = 0;
    v6 = NxPhysics::Instance((char *)this + 24, v28, 1, v34, 266);
    if ( (unsigned __int8)NxPhysics::RayCast(v6) )
    {
      v7 = v35;
      if ( !v35 || !((v36 - (int)v35) / 12) )
      {
        _invalid_parameter_noinfo();
        v7 = v35;
      }
      v8 = *(float *)(v4 + 2244) - *(float *)(v4 + 2232);
      v25 = *v7;
      v9 = *(void (__thiscall **)(GameClient::DamageEquip *, float *))(*(_DWORD *)this + 36);
      v26 = v7[1];
      v27 = *((_DWORD *)v7 + 2);
      v26 = v8 * 0.5 + v26;
      v9(this, &v25);
      *((_BYTE *)this + 820) = 0;
      *((float *)this + 204) = 0.0;
      *((float *)this + 203) = 0.0;
      *((float *)this + 202) = 0.0;
      if ( !*(_BYTE *)(v4 + 2208) && !*((_DWORD *)this + 200) )
      {
        sub_102C0ED0(v29);
        *(float *)&v29[1] = 0.0;
        sub_100029CD();
        sub_10018E71(v30, (int)v29);
        (*(void (__thiscall **)(GameClient::DamageEquip *, _BYTE *))(*(_DWORD *)this + 40))(this, v30);
        v10 = *((_DWORD *)this + 8);
        v11 = *v5;
        v32 = *((_DWORD *)this + 7);
        v14 = *(unsigned __int8 *)(v4 + 2208);
        v33 = v10;
        v31 = v11;
        v12 = NxPhysics::Instance(*((_DWORD *)this + 45), *((_DWORD *)this + 3), v4 + 2212, v30, v14);
        *((_DWORD *)this + 200) = NxPhysics::CreateBoxActor(v12);
      }
    }
    else
    {
      (*(void (__thiscall **)(GameClient::DamageEquip *, float *))(*(_DWORD *)this + 36))(this, v28);
    }
    v37 = -1;
    CollisionInfo::~CollisionInfo((CollisionInfo *)v34);
    v3 = a2;
  }
  if ( !*((_BYTE *)this + 184) )
  {
    v13 = (int *)*((_DWORD *)this + 45);
    v17 = 1.0;
    v16 = 1.0;
    v15 = 0.2;
    if ( *((_BYTE *)this + 820) )
      GameClient::AEquip::PlayAnimation((GameClient::AEquip *)v13, v13[546], v15, v16, v17, 0);
    else
      GameClient::AEquip::PlayAnimation((GameClient::AEquip *)v13, v13[545], v15, v16, v17, 0);
    v3 = a2;
  }
  v18 = v3;
  GameClient::Item::Update(this, v18);
}
