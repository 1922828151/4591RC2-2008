/*
 * func-name: ?Update@SLock@GameClient@@UAEXM@Z_0
 * func-address: 0x101d3bb0
 * callers: 0x1000f2d1
 * callees: 0x10001b04, 0x10001dfc, 0x10002cf2, 0x10002e37, 0x10003f58, 0x1000497b, 0x10006618, 0x10006a19, 0x100077ed, 0x1000a097, 0x1000ede0, 0x10013647, 0x10016a4f, 0x102c9ea8
 */

void __thiscall GameClient::SLock::Update(GameClient::WorldObject **this, float a2)
{
  GameClient::WorldObject *v3; // eax
  GameClient::WorldObject *v4; // ecx
  GameClient::WorldObject *v5; // ebp
  int v6; // eax
  int v7; // ebp
  int v8; // ecx
  GameClient::WorldObject *v9; // eax
  GameClient::Robot *v10; // ebx
  int v11; // eax
  CameraHandler *v12; // eax
  struct Camera *Camera; // eax
  int v14; // ecx
  float v15; // edx
  float v16; // eax
  CameraHandler *v17; // eax
  float *v18; // eax
  float v19; // ecx
  GameClient::WorldObject *v20; // ebp
  double v21; // st7
  int v22; // eax
  int v23; // edi
  int v24; // eax
  unsigned int v25; // ecx
  GameClient::WorldObject *v26; // eax
  GameClient::WorldObject *v27; // eax
  double v28; // st7
  double v29; // st7
  GameClient::WorldObject *v30; // eax
  unsigned int *v31; // ebp
  double v32; // st7
  int v33; // eax
  GameClient::Robot *v34; // ecx
  char v35; // [esp+3Bh] [ebp-9Dh] BYREF
  int v36; // [esp+3Ch] [ebp-9Ch] BYREF
  float v37; // [esp+40h] [ebp-98h] BYREF
  float v38; // [esp+44h] [ebp-94h]
  GameClient::WorldObject *v39; // [esp+48h] [ebp-90h]
  int v40; // [esp+4Ch] [ebp-8Ch] BYREF
  float v41; // [esp+50h] [ebp-88h]
  float v42; // [esp+54h] [ebp-84h]
  float v43; // [esp+58h] [ebp-80h] BYREF
  float v44; // [esp+5Ch] [ebp-7Ch]
  float v45; // [esp+60h] [ebp-78h]
  _BYTE v46[76]; // [esp+64h] [ebp-74h] BYREF
  int v47; // [esp+B0h] [ebp-28h]
  int v48; // [esp+D4h] [ebp-4h]

  if ( this[4] != (GameClient::WorldObject *)2 || !GameClient::WorldObject::IsLocal(this[5]) )
  {
LABEL_54:
    GameClient::Skill::Update((GameClient::Skill *)this, a2);
    return;
  }
  v3 = this[172];
  v4 = this[2];
  v39 = v4;
  if ( !v3 || !((this[173] - v3) >> 2) )
  {
    this[170] = (GameClient::WorldObject *)266;
    if ( (*((_BYTE *)v4 + 700) & 1) != 0 )
      this[170] = (GameClient::WorldObject *)298;
    if ( (*((_BYTE *)v4 + 700) & 0xC) != 0 )
      this[170] = (GameClient::WorldObject *)((unsigned int)this[170] | 0xF000);
    v36 = *((int *)this[5] + 3);
    sub_10002E37(this + 171, (int)&v36);
    v5 = this[5];
    if ( *((_DWORD *)v5 + 28) == 2 )
    {
      v6 = *((_DWORD *)v5 + 37);
      if ( v6 )
      {
        v36 = *(int *)(v6 + 12);
        sub_10002E37(this + 171, (int)&v36);
      }
      v7 = *((_DWORD *)v5 + 67);
      if ( v7 )
      {
        v36 = *(int *)(v7 + 12);
        sub_10002E37(this + 171, (int)&v36);
      }
    }
    v4 = v39;
  }
  v8 = *((_DWORD *)v4 + 28);
  if ( v8 == 1 )
  {
    v9 = this[5];
    v10 = v9;
  }
  else
  {
    if ( v8 != 3 )
      return;
    v9 = this[5];
    v10 = (GameClient::Robot *)*((_DWORD *)v9 + 37);
  }
  if ( v10 )
  {
    if ( (*((_DWORD *)v10 + 92) & 0x20) == 0
      || v8 != 1
      && (v11 = _RTDynamicCast(
                  v9,
                  0,
                  &GameClient::WorldObject `RTTI Type Descriptor',
                  &GameClient::Equip `RTTI Type Descriptor',
                  0)) != 0
      && *(_DWORD *)(v11 + 268) )
    {
      CollisionInfo::CollisionInfo((CollisionInfo *)v46);
      v48 = 0;
      v12 = CameraHandler::Instance();
      Camera = CameraHandler::GetCamera(v12, 0);
      v14 = *((int *)Camera + 94);
      v15 = *((float *)Camera + 95);
      v16 = *((float *)Camera + 96);
      v40 = v14;
      v41 = v15;
      v42 = v16;
      v17 = CameraHandler::Instance();
      v18 = (float *)CameraHandler::GetCamera(v17, 0);
      v19 = v18[88];
      v20 = v39;
      v18 += 88;
      v43 = v19;
      v44 = v18[1];
      v45 = v18[2];
      *(float *)&v36 = (float)*((int *)v39 + 176);
      v21 = *(float *)&v36;
      *(float *)&v36 = *(float *)&v40 * *(float *)&v36;
      v37 = v41 * v21;
      v38 = v21 * v42;
      *(float *)&v36 = v19 + *(float *)&v36;
      v37 = v44 + v37;
      v38 = v45 + v38;
      v40 = v36;
      v41 = v37;
      v42 = v38;
      v22 = NxPhysics::Instance(this + 171, &v43, &v40, 3, v46);
      if ( !(unsigned __int8)NxPhysics::RayCast(v22) || (v23 = v47, v47 == -1) )
      {
        this[167] = (GameClient::WorldObject *)-1;
      }
      else
      {
        v24 = sub_10001DFC(v47);
        if ( v24
          && (*(_DWORD *)(v24 + 112) & *((_DWORD *)v20 + 175)) != 0
          && *(_DWORD *)(v24 + 108) != *((_DWORD *)v10 + 27) )
        {
          v25 = (unsigned int)this[167];
          if ( v23 == v25 )
          {
            if ( this[168] == (GameClient::WorldObject *)-1 )
            {
              v27 = v39;
              v38 = *((float *)this + 169) + GDeltaTime;
              v28 = v38;
              *((float *)this + 169) = v38;
              if ( *((float *)v27 + 177) <= v28 )
              {
                v29 = *((float *)v39 + 178);
                this[168] = (GameClient::WorldObject *)v25;
                *((float *)this + 169) = v29;
                GameClient::Robot::AddBeLockedTarget(v10, v25);
                if ( sub_10016A4F(*((_DWORD *)this[5] + 4)) )
                {
                  sub_100077ED((int)&v37, 9, 169, COERCE_INT(0.0), 1, 512);
                  LOBYTE(v48) = 1;
                  v35 = 1;
                  sub_10001B04((int)(this + 168));
                  sub_10006618((int)&v35);
                  j_nullsub_44((int)&v37);
                  LOBYTE(v48) = 0;
                  if ( v37 != 0.0 )
                    Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)LODWORD(v37));
                }
              }
            }
          }
          else
          {
            v26 = this[168];
            if ( v26 == (GameClient::WorldObject *)-1 )
            {
              this[167] = (GameClient::WorldObject *)v23;
              *((float *)this + 169) = 0.0;
            }
            else
            {
              if ( v26 == (GameClient::WorldObject *)v23 )
                this[169] = *((GameClient::WorldObject **)v20 + 178);
              this[167] = (GameClient::WorldObject *)v23;
            }
          }
        }
      }
      v30 = this[168];
      v31 = (unsigned int *)(this + 168);
      if ( v30 != (GameClient::WorldObject *)-1 && v30 != this[167] )
      {
        v38 = *((float *)this + 169) - GDeltaTime;
        v32 = v38;
        *((float *)this + 169) = v38;
        if ( v32 <= 0.0 )
        {
          if ( sub_10016A4F(*((_DWORD *)this[5] + 4)) )
          {
            sub_100077ED((int)&v37, 9, 169, COERCE_INT(0.0), 1, 512);
            LOBYTE(v48) = 2;
            v35 = 0;
            sub_10001B04((int)(this + 168));
            sub_10006618((int)&v35);
            j_nullsub_44((int)&v37);
            LOBYTE(v48) = 0;
            if ( v37 != 0.0 )
              Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)LODWORD(v37));
          }
          v33 = *((_DWORD *)v39 + 28);
          if ( v33 == 1 )
          {
            GameClient::Robot::RemoveBeLockedTarget(this[5], *v31);
          }
          else if ( v33 == 3 )
          {
            v34 = (GameClient::Robot *)*((_DWORD *)this[5] + 37);
            if ( v34 )
              GameClient::Robot::RemoveBeLockedTarget(v34, *v31);
          }
          *v31 = -1;
          *((float *)this + 169) = 0.0;
        }
      }
      v48 = -1;
      CollisionInfo::~CollisionInfo((CollisionInfo *)v46);
      goto LABEL_54;
    }
  }
}
