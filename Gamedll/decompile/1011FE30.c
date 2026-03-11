/*
 * func-name: sub_1011FE30
 * func-address: 0x1011fe30
 * callers: 0x10002bdf
 * callees: 0x10018e71, 0x102c9d98
 */

int __thiscall sub_1011FE30(int this)
{
  Editor *v2; // eax
  Actor *v3; // esi
  Model *v4; // eax
  Model *v5; // esi
  Model *v6; // eax
  StaticModel *v7; // ecx
  int v8; // eax
  int v9; // ecx
  _DWORD *v10; // eax
  int v11; // eax
  int v12; // eax
  float v13; // eax
  float v14; // edx
  float v15; // ecx
  int v16; // eax
  int result; // eax
  const char *v18; // eax
  int v19; // edx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  const char *v23; // eax
  struct ModelFrame *v24; // eax
  const char *v25; // eax
  int v26; // [esp+0h] [ebp-10Ch]
  int v27; // [esp+0h] [ebp-10Ch]
  int v28; // [esp+Ch] [ebp-100h]
  int v29; // [esp+10h] [ebp-FCh]
  float v30[16]; // [esp+24h] [ebp-E8h] BYREF
  _DWORD v31[16]; // [esp+64h] [ebp-A8h] BYREF
  _BYTE v32[28]; // [esp+A4h] [ebp-68h] BYREF
  _BYTE v33[64]; // [esp+C0h] [ebp-4Ch] BYREF
  int v34; // [esp+108h] [ebp-4h]

  v2 = (Editor *)Editor::Instance(v28, v29);
  if ( Editor::GetEditorMode(v2) )
  {
    StaticModel::Load(*(StaticModel **)(this + 716), "Arrow.xml", 0);
    v3 = (Actor *)operator new(0x41Cu);
    v34 = 0;
    if ( v3 )
    {
      Actor::Actor(v3, *(struct World **)(this + 712));
      *(_DWORD *)v3 = &Actor::`vftable';
    }
    else
    {
      v3 = 0;
    }
    *(_DWORD *)(this + 1492) = v3;
    v4 = (Model *)operator new(0x1C8u);
    v5 = v4;
    v34 = 1;
    if ( v4 )
    {
      Model::Model(v4);
      *(_DWORD *)v5 = &Model::`vftable';
      v6 = v5;
    }
    else
    {
      v6 = 0;
    }
    *(_DWORD *)(*(_DWORD *)(this + 1492) + 716) = v6;
    v7 = *(StaticModel **)(*(_DWORD *)(this + 1492) + 716);
    v34 = -1;
    StaticModel::Load(v7, "Arrow.xml", 0);
    v8 = std::operator+<char>(v32, this + 444, "_Camera");
    v9 = *(_DWORD *)(this + 1492) + 444;
    v34 = 2;
    std::string::operator=(v9, v8);
    v34 = -1;
    std::string::~string(v32);
    *(_BYTE *)(*(_DWORD *)(this + 1492) + 440) = 0;
    v10 = (_DWORD *)(*(_DWORD *)(this + 1492) + 856);
    *v10 = *(_DWORD *)(this + 1228);
    v10[1] = *(_DWORD *)(this + 1232);
    v10[2] = *(_DWORD *)(this + 1236);
    qmemcpy((void *)(*(_DWORD *)(this + 1492) + 868), (const void *)sub_10018E71(v33, this + 1240), 0x40u);
    v30[0] = 0.0;
    v30[1] = 0.0;
    v30[2] = 0.0;
    v30[4] = 0.0;
    v30[5] = 0.0;
    v30[6] = 0.0;
    v30[8] = 0.0;
    v30[9] = 0.0;
    v30[10] = 0.0;
    v30[12] = 0.0;
    v30[13] = 0.0;
    v11 = *(_DWORD *)(this + 1492);
    qmemcpy(v30, (const void *)(v11 + 868), sizeof(v30));
    v30[12] = *(float *)(v11 + 856);
    v30[13] = *(float *)(v11 + 860);
    v30[14] = *(float *)(v11 + 864);
    v12 = NxPhysics::Instance(v11, -1, *(_DWORD *)(v11 + 716), v30, 1);
    *(_DWORD *)(*(_DWORD *)(this + 1492) + 620) = NxPhysics::CreateMeshActor(v12);
  }
  if ( !*(_DWORD *)(this + 620) )
  {
    v13 = *(float *)(this + 856);
    v14 = *(float *)(this + 864);
    qmemcpy(v30, (const void *)(this + 868), sizeof(v30));
    v15 = *(float *)(this + 860);
    v30[12] = v13;
    v30[13] = v15;
    v26 = *(_DWORD *)(this + 716);
    v30[14] = v14;
    v16 = NxPhysics::Instance(this, -1, v26, v30, 1);
    *(_DWORD *)(this + 620) = NxPhysics::CreateMeshActor(v16);
  }
  result = std::operator!=<char>(this + 1052, &unk_10311A7B);
  if ( (_BYTE)result )
  {
    v18 = (const char *)std::string::c_str(this + 1052);
    StaticModel::Load(*(StaticModel **)(this + 716), v18, 0);
    v19 = *(_DWORD *)(this + 856);
    v20 = *(_DWORD *)(this + 860);
    qmemcpy(v31, (const void *)(this + 868), sizeof(v31));
    v21 = *(_DWORD *)(this + 864);
    v31[12] = v19;
    v31[13] = v20;
    v27 = *(_DWORD *)(this + 716);
    v31[14] = v21;
    v22 = NxPhysics::Instance(this, -1, v27, v31, 1);
    *(_DWORD *)(this + 620) = NxPhysics::CreateMeshActor(v22);
    v23 = (const char *)std::string::c_str(this + 1080);
    v24 = ModelFrame::Find(*(ModelFrame **)(*(_DWORD *)(this + 716) + 308), v23, 0);
    *(_DWORD *)(this + 1280) = v24;
    if ( v24 )
    {
      if ( (unsigned __int8)std::operator!=<char>(this + 1112, &unk_10311A85) )
      {
        AnimationSet::Load(this + 1300, this + 1112, this + 1112, 1, 0, 0);
        *(_DWORD *)(this + 1284) = Model::AttachAnimSet(*(Model **)(this + 716), (struct AnimationSet *)(this + 1300));
      }
      if ( (unsigned __int8)std::operator!=<char>(this + 1140, &unk_10311A86) )
      {
        AnimationSet::Load(this + 1344, this + 1140, this + 1140, 0, 0, 0);
        *(_DWORD *)(this + 1288) = Model::AttachAnimSet(*(Model **)(this + 716), (struct AnimationSet *)(this + 1344));
      }
      if ( (unsigned __int8)std::operator!=<char>(this + 1168, &unk_10311A87) )
      {
        AnimationSet::Load(this + 1388, this + 1168, this + 1168, 1, 0, 0);
        *(_DWORD *)(this + 1292) = Model::AttachAnimSet(*(Model **)(this + 716), (struct AnimationSet *)(this + 1388));
      }
      if ( (unsigned __int8)std::operator!=<char>(this + 1196, &unk_10311A8D) )
      {
        AnimationSet::Load(this + 1432, this + 1196, this + 1196, 0, 0, 0);
        *(_DWORD *)(this + 1296) = Model::AttachAnimSet(*(Model **)(this + 716), (struct AnimationSet *)(this + 1432));
      }
      result = -1;
      if ( *(_DWORD *)(this + 1288) == -1
        || *(_DWORD *)(this + 1296) == -1
        || *(_DWORD *)(this + 1284) == -1
        || *(_DWORD *)(this + 1292) == -1 )
      {
        return Error("EstabTakeActor's animation load failed.");
      }
    }
    else
    {
      v25 = (const char *)std::string::c_str(this + 1080);
      return Error("EstabTakeActor's Frame is NULL. %s", v25);
    }
  }
  return result;
}
