/*
 * func-name: ?OutOffEstablishment@Robot@GameClient@@QAEXXZ_0
 * func-address: 0x101771a0
 * callers: 0x100156bd
 * callees: 0x100029cd, 0x1000ad76, 0x1000adc6, 0x1000dafd, 0x1000ee62, 0x10016f95, 0x102c0ed0
 */

void __thiscall GameClient::Robot::OutOffEstablishment(GameClient::Robot *this)
{
  int v2; // eax
  GameClient::EstabManager *v3; // eax
  GameClient::Establishment *Establishment; // eax
  char v5; // cl
  bool v6; // zf
  _DWORD *v7; // esi
  NxPhysics *v8; // eax
  _DWORD *v9; // ebp
  double v10; // st6
  int v11; // eax
  _DWORD *v12; // ecx
  double v13; // st7
  int v14; // edx
  void (__thiscall *v15)(GameClient::Robot *, char *); // eax
  int v16; // edx
  int v17; // eax
  int v18; // ecx
  NxPhysics *v19; // eax
  _DWORD *v20; // eax
  _DWORD *v21; // ecx
  _DWORD *v22; // ebx
  float v23; // [esp+20h] [ebp-ECh]
  unsigned int v24; // [esp+28h] [ebp-E4h]
  struct Actor *v25; // [esp+2Ch] [ebp-E0h]
  struct NxActor **v26; // [esp+2Ch] [ebp-E0h]
  int v27; // [esp+30h] [ebp-DCh]
  const struct BBox *v28; // [esp+34h] [ebp-D8h]
  const struct Matrix *v29; // [esp+38h] [ebp-D4h]
  float v30; // [esp+40h] [ebp-CCh]
  float v31; // [esp+44h] [ebp-C8h]
  float v32; // [esp+48h] [ebp-C4h]
  float v33[3]; // [esp+4Ch] [ebp-C0h] BYREF
  _DWORD v34[16]; // [esp+58h] [ebp-B4h] BYREF
  _BYTE v35[36]; // [esp+98h] [ebp-74h] BYREF
  _DWORD *v36; // [esp+BCh] [ebp-50h]
  int v37; // [esp+C0h] [ebp-4Ch]
  int v38; // [esp+108h] [ebp-4h]

  v2 = *((_DWORD *)this + 91);
  if ( v2 == 2 || v2 == 3 )
  {
    v24 = *((_DWORD *)this + 70);
    v3 = GameClient::EstabManager::Instance();
    Establishment = GameClient::EstabManager::GetEstablishment(v3, v24);
    if ( Establishment )
      GameClient::Establishment::Hide(Establishment);
  }
  v5 = *((_BYTE *)this + 700);
  *((_DWORD *)this + 92) &= 0xFFFFFF5F;
  *((_DWORD *)this + 70) = -1;
  *((_DWORD *)this + 71) = -1;
  GameClient::Robot::ChangeViewMode(this, v5);
  v6 = *((_DWORD *)this + 44) == 0;
  v7 = (_DWORD *)((char *)this + 176);
  *((float *)this + 167) = 100.0;
  *((_DWORD *)this + 165) = 1;
  if ( v6
    || (v8 = (NxPhysics *)NxPhysics::Instance((char *)this + 176, v25, v27, v28, v29),
        NxPhysics::DestroyControllerActor(v8, v26),
        (*v7 = 0) == 0) )
  {
    CollisionInfo::CollisionInfo((CollisionInfo *)v35);
    v9 = (_DWORD *)((char *)this + 24);
    v32 = *((float *)this + 6) + 0.0;
    v10 = *((float *)this + 7) - 3.0;
    v38 = 0;
    v31 = v10;
    v30 = *((float *)this + 8) + 0.0;
    v33[0] = v32;
    v33[1] = v31;
    v33[2] = v30;
    v11 = NxPhysics::Instance((char *)this + 24, v33, 1, v35, 266);
    if ( (unsigned __int8)NxPhysics::RayCast(v11) )
    {
      v12 = v36;
      if ( !v36 || !((v37 - (int)v36) / 12) )
      {
        _invalid_parameter_noinfo();
        v12 = v36;
      }
      v13 = *((float *)this + 112) - *((float *)this + 109);
      *v9 = *v12;
      v14 = *(_DWORD *)this;
      *((_DWORD *)this + 7) = v12[1];
      v15 = *(void (__thiscall **)(GameClient::Robot *, char *))(v14 + 36);
      *((_DWORD *)this + 8) = v12[2];
      *((float *)this + 7) = v13 * 0.5 + 0.2000000029802322 + *((float *)this + 7);
      v15(this, (char *)this + 24);
    }
    v16 = *((_DWORD *)this + 7);
    v17 = *((_DWORD *)this + 8);
    qmemcpy(v34, (char *)this + 36, sizeof(v34));
    v34[12] = *v9;
    v18 = *((_DWORD *)this + 43);
    v34[13] = v16;
    v34[14] = v17;
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v18 + 36))(v18, v34);
    v23 = (float)*((int *)this + 84);
    v19 = (NxPhysics *)NxPhysics::Instance(
                         *((_DWORD *)this + 43),
                         *((_DWORD *)this + 3),
                         (char *)this + 416,
                         v34,
                         LODWORD(v23));
    *((_DWORD *)this + 44) = NxPhysics::CreateControllerActor(v19, v25, v27, v28, v29);
    *((_DWORD *)this + 135) = *((_DWORD *)this + 105);
    *((_DWORD *)this + 136) = *((_DWORD *)this + 106);
    *((_DWORD *)this + 137) = *((_DWORD *)this + 107);
    *((_DWORD *)this + 138) = *((_DWORD *)this + 108);
    *((_DWORD *)this + 139) = *((_DWORD *)this + 109);
    *((_DWORD *)this + 140) = *((_DWORD *)this + 110);
    *((_DWORD *)this + 141) = *((_DWORD *)this + 111);
    *((_DWORD *)this + 142) = *((_DWORD *)this + 112);
    *((_DWORD *)this + 143) = *((_DWORD *)this + 113);
    v38 = -1;
    CollisionInfo::~CollisionInfo((CollisionInfo *)v35);
  }
  GameClient::Robot::UpdatePhysicsController(this);
  v20 = (_DWORD *)sub_102C0ED0(v33);
  v21 = (_DWORD *)(*((_DWORD *)this + 43) + 1440);
  *v21 = *v20;
  v21[1] = v20[1];
  v21[2] = v20[2];
  *(float *)(*((_DWORD *)this + 43) + 1444) = 0.0;
  sub_100029CD();
  v22 = (_DWORD *)*((_DWORD *)this + 43);
  v22[363] = v22[360];
  v22[364] = v22[361];
  v22[365] = v22[362];
}
