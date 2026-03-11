/*
 * func-name: ?Tick@HookEstablishment@@UAEXXZ_0
 * func-address: 0x1012e760
 * callers: 0x1000986d
 * callees: 0x1001371e, 0x102c9ea8
 */

void __thiscall HookEstablishment::Tick(struct Model **this)
{
  Editor *v2; // eax
  unsigned __int8 (__cdecl *v3)(struct Model **, struct Model **); // ebp
  int v4; // eax
  NxPhysics *v5; // eax
  struct Model *v6; // eax
  struct Model *v7; // edx
  struct Model *v8; // ecx
  int v9; // eax
  Model *v10; // ecx
  Model *v11; // ecx
  struct Model *v12; // eax
  Model *v13; // ecx
  struct Model *v14; // ecx
  struct Model *v15; // ecx
  int Actor; // eax
  int v17; // eax
  struct Model *v18; // ecx
  struct Model *v19; // edx
  int v20; // esi
  int v21; // eax
  _BYTE v22[24]; // [esp+1Ch] [ebp-BCh] BYREF
  int v23; // [esp+34h] [ebp-A4h]
  void ***v24; // [esp+38h] [ebp-A0h]
  void ***v25; // [esp+3Ch] [ebp-9Ch]
  int v26; // [esp+40h] [ebp-98h]
  struct NxActor **v27; // [esp+44h] [ebp-94h]
  int v28; // [esp+48h] [ebp-90h]
  int v29; // [esp+4Ch] [ebp-8Ch]
  int v30; // [esp+50h] [ebp-88h]
  _BYTE *v31; // [esp+54h] [ebp-84h]
  _DWORD v32[16]; // [esp+58h] [ebp-80h] BYREF
  char v33[48]; // [esp+98h] [ebp-40h] BYREF
  struct Model *v34; // [esp+C8h] [ebp-10h]
  struct Model *v35; // [esp+CCh] [ebp-Ch]
  struct Model *v36; // [esp+D0h] [ebp-8h]

  v2 = (Editor *)Editor::Instance(v27, v28);
  if ( Editor::GetEditorMode(v2) )
  {
    v3 = (unsigned __int8 (__cdecl *)(struct Model **, struct Model **))std::operator!=<char>;
    if ( (unsigned __int8)std::operator!=<char>(this + 263, this + 270) )
    {
      Precacher::PurgeModel(this + 179);
      v26 = 1;
      v25 = 0;
      v24 = 0;
      v31 = v22;
      std::string::string(v22, this + 263);
      v4 = Precacher::CacheModel();
      v26 = (int)(this + 263);
      this[179] = (struct Model *)v4;
      std::string::operator=(this + 270, v26);
      if ( this[155] )
      {
        v5 = (NxPhysics *)NxPhysics::Instance(this + 155, v27, v28, v29, v30);
        NxPhysics::DestroyMeshActor(v5, v27);
      }
      v6 = this[214];
      v7 = this[216];
      qmemcpy(v32, this + 217, sizeof(v32));
      v8 = this[215];
      v26 = 1;
      v32[12] = v6;
      v25 = (void ***)v32;
      v32[13] = v8;
      v24 = (void ***)this[179];
      v32[14] = v7;
      v9 = NxPhysics::Instance(this, -1, v24, v32, 1);
      NxPhysics::CreateMeshActor(v9);
      v3 = (unsigned __int8 (__cdecl *)(struct Model **, struct Model **))std::operator!=<char>;
    }
    if ( v3(this + 277, this + 284) )
    {
      std::string::operator=(this + 284, this + 277);
      if ( AnimationSet::GetDXSet((AnimationSet *)(this + 292)) )
      {
        v10 = this[179];
        if ( v10 )
          Model::DetachAnimSet(v10, (struct AnimationSet *)(this + 292));
      }
      AnimationSet::Destroy((AnimationSet *)(this + 292));
      AnimationSet::Load(this + 292, this + 277, this + 277, 1, 0, 0);
      v11 = this[179];
      if ( v11 )
      {
        v12 = (struct Model *)Model::AttachAnimSet(v11, (struct AnimationSet *)(this + 292));
        v13 = this[179];
        *(float *)&v26 = 1.0;
        this[291] = v12;
        Model::TransitionToAnimation(v13, v12, 1.1, 1.0, 0.0, *(float *)&v26);
      }
    }
    v14 = this[319];
    if ( v14 )
    {
      (*(void (__thiscall **)(struct Model *, char *))(*(_DWORD *)v14 + 36))(v14, (char *)this + 856);
      (*(void (__thiscall **)(struct Model *, char *))(*(_DWORD *)this[319] + 40))(this[319], (char *)this + 868);
    }
    if ( v3(this + 340, this + 347) )
    {
      v15 = this[178];
      *(float *)&v26 = 0.0;
      v25 = &HookEstablishment `RTTI Type Descriptor';
      v24 = &Actor `RTTI Type Descriptor';
      v23 = 0;
      Actor = World::FindActor(v15, this + 340);
      v17 = _RTDynamicCast(Actor, v23, v24, v25, v26);
      v26 = (int)(this + 340);
      this[354] = (struct Model *)v17;
      std::string::operator=(this + 347, v26);
    }
    if ( this[155] )
    {
      if ( *((_BYTE *)this + 441) )
      {
        sub_1001371E((int)(this + 217));
        v18 = this[216];
        v19 = this[214];
        v35 = this[215];
        v36 = v18;
        v34 = v19;
        v20 = *(_DWORD *)this[155];
        v21 = NxHelper::ToNxMat34(v32, v33);
        (*(void (__thiscall **)(struct Model *, int))(v20 + 20))(this[155], v21);
      }
    }
    Actor::Tick((Actor *)this);
  }
  else
  {
    *((float *)this + 205) = 0.0;
    Actor::Tick((Actor *)this);
  }
}
