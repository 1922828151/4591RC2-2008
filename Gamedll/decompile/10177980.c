/*
 * func-name: ?Revived@Robot@GameClient@@QAEXXZ_0
 * func-address: 0x10177980
 * callers: 0x10004d81
 * callees: 0x10006a19, 0x1000ad76, 0x10016f95, 0x1001816a
 */

void __thiscall GameClient::Robot::Revived(GameClient::Robot *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // esi
  NxPhysics *v5; // eax
  _DWORD *v6; // ebx
  double v7; // st6
  int v8; // eax
  _DWORD *v9; // ecx
  double v10; // st7
  int v11; // edx
  void (__thiscall *v12)(GameClient::Robot *, char *); // eax
  int v13; // edx
  int v14; // eax
  int v15; // ecx
  NxPhysics *v16; // eax
  int v17; // eax
  Event *v18; // eax
  int v19; // ebp
  struct BinStream *Stream; // esi
  float v21; // [esp+38h] [ebp-ECh]
  struct Actor *v22; // [esp+44h] [ebp-E0h]
  struct NxActor **v23; // [esp+44h] [ebp-E0h]
  int v24; // [esp+48h] [ebp-DCh]
  const struct BBox *v25; // [esp+4Ch] [ebp-D8h]
  const struct Matrix *v26; // [esp+50h] [ebp-D4h]
  float v27; // [esp+58h] [ebp-CCh]
  float v28; // [esp+5Ch] [ebp-C8h]
  float v29; // [esp+60h] [ebp-C4h]
  float v30[3]; // [esp+64h] [ebp-C0h] BYREF
  _DWORD v31[16]; // [esp+70h] [ebp-B4h] BYREF
  _BYTE v32[36]; // [esp+B0h] [ebp-74h] BYREF
  _DWORD *v33; // [esp+D4h] [ebp-50h]
  int v34; // [esp+D8h] [ebp-4Ch]
  int v35; // [esp+120h] [ebp-4h]

  *((_DWORD *)this + 92) |= 0x80u;
  *((_DWORD *)this + 90) = 0;
  *((_DWORD *)this + 88) = 0;
  v2 = *((_DWORD *)this + 39);
  if ( v2 && (*((_DWORD *)this + 40) - v2) / 20 )
  {
    v3 = *((_DWORD *)this + 39);
    if ( !v3 || !((*((_DWORD *)this + 40) - v3) / 20) )
      _invalid_parameter_noinfo();
    v4 = *((_DWORD *)this + 39);
    if ( !v4 || !((*((_DWORD *)this + 40) - v4) / 20) )
      _invalid_parameter_noinfo();
    *(float *)(*((_DWORD *)this + 39) + 8) = (float)*(int *)(v4 + 4);
  }
  GameClient::Robot::ChangeViewMode(this, 1);
  if ( *((_DWORD *)this + 45) )
  {
    v5 = (NxPhysics *)NxPhysics::Instance((char *)this + 180, v22, v24, v25, v26);
    NxPhysics::DestroyBoxActor(v5, v23);
    *((_DWORD *)this + 45) = 0;
  }
  if ( !*((_DWORD *)this + 44) )
  {
    CollisionInfo::CollisionInfo((CollisionInfo *)v32);
    v6 = (_DWORD *)((char *)this + 24);
    v29 = *((float *)this + 6) + 0.0;
    v7 = *((float *)this + 7) - 5.0;
    v35 = 0;
    v28 = v7;
    v27 = *((float *)this + 8) + 0.0;
    v30[0] = v29;
    v30[1] = v28;
    v30[2] = v27;
    v8 = NxPhysics::Instance((char *)this + 24, v30, 1, v32, 266);
    if ( (unsigned __int8)NxPhysics::RayCast(v8) )
    {
      v9 = v33;
      if ( !v33 || !((v34 - (int)v33) / 12) )
      {
        _invalid_parameter_noinfo();
        v9 = v33;
      }
      v10 = *((float *)this + 112) - *((float *)this + 109);
      *v6 = *v9;
      v11 = *(_DWORD *)this;
      *((_DWORD *)this + 7) = v9[1];
      v12 = *(void (__thiscall **)(GameClient::Robot *, char *))(v11 + 36);
      *((_DWORD *)this + 8) = v9[2];
      *((float *)this + 7) = v10 * 0.5 + 0.2000000029802322 + *((float *)this + 7);
      v12(this, (char *)this + 24);
    }
    v13 = *((_DWORD *)this + 7);
    v14 = *((_DWORD *)this + 8);
    qmemcpy(v31, (char *)this + 36, sizeof(v31));
    v31[12] = *v6;
    v15 = *((_DWORD *)this + 43);
    v31[13] = v13;
    v31[14] = v14;
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v15 + 36))(v15, v31);
    v21 = (float)*((int *)this + 84);
    v16 = (NxPhysics *)NxPhysics::Instance(
                         *((_DWORD *)this + 43),
                         *((_DWORD *)this + 3),
                         (char *)this + 416,
                         v31,
                         LODWORD(v21));
    *((_DWORD *)this + 44) = NxPhysics::CreateControllerActor(v16, v22, v24, v25, v26);
    *((_DWORD *)this + 135) = *((_DWORD *)this + 105);
    *((_DWORD *)this + 136) = *((_DWORD *)this + 106);
    *((_DWORD *)this + 137) = *((_DWORD *)this + 107);
    *((_DWORD *)this + 138) = *((_DWORD *)this + 108);
    *((_DWORD *)this + 139) = *((_DWORD *)this + 109);
    *((_DWORD *)this + 140) = *((_DWORD *)this + 110);
    *((_DWORD *)this + 141) = *((_DWORD *)this + 111);
    *((_DWORD *)this + 142) = *((_DWORD *)this + 112);
    *((_DWORD *)this + 143) = *((_DWORD *)this + 113);
    v35 = -1;
    CollisionInfo::~CollisionInfo((CollisionInfo *)v32);
  }
  GameClient::Robot::UpdatePhysicsController(this);
  if ( GameClient::WorldObject::IsLocal(this) )
  {
    v17 = EventAttemper::Instance(9, 4109);
    v18 = (Event *)EventAttemper::AddEvent(v17);
    v19 = *((_DWORD *)this + 3);
    Stream = Event::GetStream(v18);
    sub_1001816A(4);
    *(_DWORD *)(*((_DWORD *)Stream + 1) + *((_DWORD *)Stream + 2)) = v19;
    *((_DWORD *)Stream + 2) += 4;
  }
}
