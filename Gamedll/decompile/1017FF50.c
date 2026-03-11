/*
 * func-name: ?WriteSystemPartSnapshot@Robot@GameClient@@QAEXAAVBinStream@@_N@Z_0
 * func-address: 0x1017ff50
 * callers: 0x10002abd
 * callees: 0x100034b8, 0x10004fca, 0x100065b4, 0x10006a19, 0x1000773e, 0x1000aff6, 0x1000fa6a, 0x10015537, 0x1001816a, 0x10018e71, 0x1001a0f5, 0x102c9d50, 0x102c9ea8
 */

void __thiscall GameClient::Robot::WriteSystemPartSnapshot(
        GameClient::Robot *this,
        struct BinStream *a2,
        unsigned int a3)
{
  struct BinStream *v4; // esi
  int v5; // eax
  int v6; // ecx
  bool v7; // cc
  int v8; // eax
  unsigned int v9; // ebp
  struct BinStream *v10; // ebx
  int v11; // eax
  unsigned int v12; // edx
  int v13; // eax
  GameClient::FlyweightManager *v14; // eax
  void *v15; // eax
  int v16; // eax
  unsigned int v17; // edx
  int v18; // eax
  GameClient::FlyweightManager *v19; // eax
  struct GameClient::Function *v20; // eax
  int v21; // eax
  int v22; // eax
  unsigned int v23; // edx
  int v24; // eax
  GameClient::FlyweightManager *v25; // eax
  int v26; // eax
  unsigned int v27; // edx
  int v28; // eax
  GameClient::FlyweightManager *v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // ecx
  _DWORD *v43; // eax
  int v44; // ecx
  unsigned int v45; // ebp
  int v46; // edx
  int *v47; // eax
  float v48; // ecx
  float v49; // eax
  int v50; // eax
  int v51; // eax
  void (__thiscall **v52)(GameClient::Robot *, int); // ebp
  int v53; // eax
  int v54; // eax
  Event *v55; // eax
  int v56; // ebp
  struct BinStream *Stream; // esi
  unsigned int v58; // [esp+8h] [ebp-88h]
  int v59; // [esp+24h] [ebp-6Ch]
  int v60; // [esp+28h] [ebp-68h] BYREF
  float v61; // [esp+2Ch] [ebp-64h]
  float v62; // [esp+30h] [ebp-60h]
  int v63; // [esp+34h] [ebp-5Ch] BYREF
  void *v64; // [esp+38h] [ebp-58h]
  int v65; // [esp+3Ch] [ebp-54h]
  int v66; // [esp+40h] [ebp-50h]
  _BYTE v67[64]; // [esp+44h] [ebp-4Ch] BYREF
  int v68; // [esp+8Ch] [ebp-4h]

  v64 = 0;
  v65 = 0;
  v66 = 0;
  v4 = a2;
  v5 = *((_DWORD *)a2 + 3);
  v6 = v5 + 4;
  v7 = (unsigned int)(v5 + 4) <= *((_DWORD *)a2 + 2);
  v68 = 0;
  if ( v7 )
  {
    v8 = *(_DWORD *)(v5 + *((_DWORD *)a2 + 1));
    *((_DWORD *)a2 + 3) = v6;
  }
  else
  {
    v8 = a3;
  }
  if ( v8 > 0 )
  {
    v9 = a3;
    v10 = a2;
    v59 = v8;
    do
    {
      v11 = *((_DWORD *)v4 + 3);
      v12 = *((_DWORD *)v4 + 2);
      if ( v11 + 4 <= v12 )
      {
        v9 = *(_DWORD *)(v11 + *((_DWORD *)v4 + 1));
        *((_DWORD *)v4 + 3) = v11 + 4;
      }
      if ( v9 == -1 )
      {
        sub_1001A0F5(&v63, (int)&unk_10314EA4);
      }
      else
      {
        v13 = *((_DWORD *)v4 + 3);
        if ( v13 + 4 <= v12 )
        {
          v10 = *(struct BinStream **)(v13 + *((_DWORD *)v4 + 1));
          a2 = v10;
          *((_DWORD *)v4 + 3) = v13 + 4;
        }
        v58 = *((_DWORD *)this + 4);
        v14 = GameClient::FlyweightManager::Instance();
        GameClient::FlyweightManager::NewWorldObject(v14, v9, (unsigned int)v10, v58, v4);
        sub_1001A0F5(&v63, (int)&a2);
      }
      --v59;
    }
    while ( v59 );
    v15 = v64;
    if ( v64 )
    {
      if ( !((v65 - (int)v64) >> 2) )
        goto LABEL_72;
      GameClient::Robot::AddSystemPart(this, (int)&v63, a3);
      if ( (_BYTE)a3 )
      {
        v16 = *((_DWORD *)v4 + 3);
        v17 = *((_DWORD *)v4 + 2);
        if ( v16 + 4 <= v17 )
        {
          v9 = *(_DWORD *)(v16 + *((_DWORD *)v4 + 1));
          *((_DWORD *)v4 + 3) = v16 + 4;
        }
        if ( v9 != -1 )
        {
          v18 = *((_DWORD *)v4 + 3);
          if ( v18 + 4 <= v17 )
          {
            v10 = *(struct BinStream **)(v18 + *((_DWORD *)v4 + 1));
            *((_DWORD *)v4 + 3) = v18 + 4;
          }
          v19 = GameClient::FlyweightManager::Instance();
          v20 = GameClient::FlyweightManager::NewFunction(v19, v9, (unsigned int)v10);
          v21 = _RTDynamicCast(
                  v20,
                  0,
                  &GameClient::Function `RTTI Type Descriptor',
                  &GameClient::Func_Power `RTTI Type Descriptor',
                  0);
          *((_DWORD *)this + 48) = v21;
          (*(void (__thiscall **)(int, struct BinStream *))(*(_DWORD *)(v21 + 16) + 12))(v21 + 16, v4);
          *(_DWORD *)(*((_DWORD *)this + 48) + 28) = this;
        }
        v22 = *((_DWORD *)v4 + 3);
        v23 = *((_DWORD *)v4 + 2);
        if ( v22 + 4 <= v23 )
        {
          v9 = *(_DWORD *)(v22 + *((_DWORD *)v4 + 1));
          *((_DWORD *)v4 + 3) = v22 + 4;
        }
        if ( v9 != -1 )
        {
          v24 = *((_DWORD *)v4 + 3);
          if ( v24 + 4 <= v23 )
          {
            v10 = *(struct BinStream **)(v24 + *((_DWORD *)v4 + 1));
            *((_DWORD *)v4 + 3) = v24 + 4;
          }
          v25 = GameClient::FlyweightManager::Instance();
          *((_DWORD *)this + 55) = GameClient::FlyweightManager::NewSkill(v25, v9, (unsigned int)v10, v4);
        }
        v26 = *((_DWORD *)v4 + 3);
        v27 = *((_DWORD *)v4 + 2);
        if ( v26 + 4 <= v27 )
        {
          v9 = *(_DWORD *)(v26 + *((_DWORD *)v4 + 1));
          *((_DWORD *)v4 + 3) = v26 + 4;
        }
        if ( v9 != -1 )
        {
          v28 = *((_DWORD *)v4 + 3);
          if ( v28 + 4 <= v27 )
          {
            v10 = *(struct BinStream **)(v28 + *((_DWORD *)v4 + 1));
            *((_DWORD *)v4 + 3) = v28 + 4;
          }
          v29 = GameClient::FlyweightManager::Instance();
          *((_DWORD *)this + 56) = GameClient::FlyweightManager::NewSkill(v29, v9, (unsigned int)v10, v4);
        }
        v30 = *((_DWORD *)v4 + 3);
        if ( (unsigned int)(v30 + 4) <= *((_DWORD *)v4 + 2) )
        {
          *((_DWORD *)this + 54) = *(_DWORD *)(v30 + *((_DWORD *)v4 + 1));
          *((_DWORD *)v4 + 3) += 4;
        }
      }
      v31 = *((_DWORD *)v4 + 3);
      *(float *)&v60 = 0.0;
      v7 = (unsigned int)(v31 + 4) <= *((_DWORD *)v4 + 2);
      v61 = 0.0;
      v62 = 0.0;
      if ( v7 )
      {
        *((float *)this + 82) = *(float *)(v31 + *((_DWORD *)v4 + 1));
        *((_DWORD *)v4 + 3) += 4;
      }
      v32 = *((_DWORD *)v4 + 3);
      if ( (unsigned int)(v32 + 4) <= *((_DWORD *)v4 + 2) )
      {
        *((float *)this + 83) = *(float *)(v32 + *((_DWORD *)v4 + 1));
        *((_DWORD *)v4 + 3) += 4;
      }
      v33 = *((_DWORD *)v4 + 3);
      if ( (unsigned int)(v33 + 4) <= *((_DWORD *)v4 + 2) )
      {
        *((_DWORD *)this + 88) = *(_DWORD *)(v33 + *((_DWORD *)v4 + 1));
        *((_DWORD *)v4 + 3) += 4;
      }
      v34 = *((_DWORD *)v4 + 3);
      if ( (unsigned int)(v34 + 4) <= *((_DWORD *)v4 + 2) )
      {
        *((_DWORD *)this + 89) = *(_DWORD *)(v34 + *((_DWORD *)v4 + 1));
        *((_DWORD *)v4 + 3) += 4;
      }
      v35 = *((_DWORD *)v4 + 3);
      if ( (unsigned int)(v35 + 4) <= *((_DWORD *)v4 + 2) )
      {
        *((_DWORD *)this + 90) = *(_DWORD *)(v35 + *((_DWORD *)v4 + 1));
        *((_DWORD *)v4 + 3) += 4;
      }
      v36 = *((_DWORD *)v4 + 3);
      if ( (unsigned int)(v36 + 4) <= *((_DWORD *)v4 + 2) )
      {
        *((_DWORD *)this + 91) = *(_DWORD *)(v36 + *((_DWORD *)v4 + 1));
        *((_DWORD *)v4 + 3) += 4;
      }
      v37 = *((_DWORD *)v4 + 3);
      if ( (unsigned int)(v37 + 4) <= *((_DWORD *)v4 + 2) )
      {
        *((_DWORD *)this + 92) = *(_DWORD *)(v37 + *((_DWORD *)v4 + 1));
        *((_DWORD *)v4 + 3) += 4;
      }
      v38 = *((_DWORD *)v4 + 3);
      if ( (unsigned int)(v38 + 4) <= *((_DWORD *)v4 + 2) )
      {
        *((_DWORD *)this + 58) = *(_DWORD *)(v38 + *((_DWORD *)v4 + 1));
        *((_DWORD *)v4 + 3) += 4;
      }
      v39 = *((_DWORD *)v4 + 3);
      if ( (unsigned int)(v39 + 4) <= *((_DWORD *)v4 + 2) )
      {
        *((_DWORD *)this + 80) = *(_DWORD *)(v39 + *((_DWORD *)v4 + 1));
        *((_DWORD *)v4 + 3) += 4;
      }
      v40 = *((_DWORD *)v4 + 3);
      if ( (unsigned int)(v40 + 4) <= *((_DWORD *)v4 + 2) )
      {
        *((float *)this + 81) = *(float *)(v40 + *((_DWORD *)v4 + 1));
        *((_DWORD *)v4 + 3) += 4;
      }
      v41 = *((_DWORD *)v4 + 3);
      if ( (unsigned int)(v41 + 4) <= *((_DWORD *)v4 + 2) )
      {
        *((_DWORD *)this + 186) = *(_DWORD *)(v41 + *((_DWORD *)v4 + 1));
        *((_DWORD *)v4 + 3) += 4;
      }
      v42 = *((_DWORD *)v4 + 3);
      if ( (unsigned int)(v42 + 12) <= *((_DWORD *)v4 + 2) )
      {
        v43 = (_DWORD *)(v42 + *((_DWORD *)v4 + 1));
        *((_DWORD *)this + 6) = *v43;
        *((_DWORD *)this + 7) = v43[1];
        *((_DWORD *)this + 8) = v43[2];
        *((_DWORD *)v4 + 3) += 12;
      }
      v44 = *((_DWORD *)v4 + 3);
      v45 = *((_DWORD *)v4 + 2);
      v46 = v44 + 12;
      if ( v44 + 12 <= v45 )
      {
        v47 = (int *)(v44 + *((_DWORD *)v4 + 1));
        v60 = *v47;
        v48 = *((float *)v47 + 1);
        v49 = *((float *)v47 + 2);
        v61 = v48;
        v62 = v49;
        *((_DWORD *)v4 + 3) = v46;
      }
      v50 = *((_DWORD *)v4 + 3);
      if ( v50 + 4 <= v45 )
      {
        *((_DWORD *)this + 70) = *(_DWORD *)(v50 + *((_DWORD *)v4 + 1));
        *((_DWORD *)v4 + 3) += 4;
      }
      v51 = *((_DWORD *)v4 + 3);
      if ( (unsigned int)(v51 + 4) <= *((_DWORD *)v4 + 2) )
      {
        *((_DWORD *)this + 71) = *(_DWORD *)(v51 + *((_DWORD *)v4 + 1));
        *((_DWORD *)v4 + 3) += 4;
      }
      (*(void (__thiscall **)(GameClient::Robot *, char *))(*(_DWORD *)this + 36))(this, (char *)this + 24);
      v52 = (void (__thiscall **)(GameClient::Robot *, int))(*(_DWORD *)this + 40);
      v53 = sub_10018E71(v67, (int)&v60);
      (*v52)(this, v53);
      if ( (_BYTE)a3 )
        GameClient::DamageUnit::WriteArmorInfo((GameClient::Robot *)((char *)this + 148), v4);
      if ( GameClient::WorldObject::IsLocal(this) )
      {
        v54 = EventAttemper::Instance(9, 4150);
        v55 = (Event *)EventAttemper::AddEvent(v54);
        v56 = *((_DWORD *)this + 3);
        Stream = Event::GetStream(v55);
        sub_1001816A(4);
        *(_DWORD *)(*((_DWORD *)Stream + 1) + *((_DWORD *)Stream + 2)) = v56;
        *((_DWORD *)Stream + 2) += 4;
      }
      GameClient::Robot::loadResource(this);
      v15 = v64;
      if ( v64 )
LABEL_72:
        operator delete(v15);
    }
  }
}
