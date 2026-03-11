/*
 * func-name: sub_1011F1C0
 * func-address: 0x1011f1c0
 * callers: 0x10016261
 * callees: none
 */

void __thiscall sub_1011F1C0(_DWORD *this)
{
  AnimationSet *v2; // ebp
  NxPhysics *v3; // eax
  int v4; // ecx
  int v5; // eax
  NxPhysics *v6; // eax
  int v7; // ecx
  int v8; // ecx
  EventAttemper *v9; // eax
  int v10; // [esp+4h] [ebp-24h]
  struct NxActor **v11; // [esp+4h] [ebp-24h]
  int v12; // [esp+4h] [ebp-24h]
  struct NxActor **v13; // [esp+4h] [ebp-24h]
  int v14; // [esp+8h] [ebp-20h]
  BOOL v15; // [esp+8h] [ebp-20h]
  int v16; // [esp+Ch] [ebp-1Ch]
  int v17; // [esp+Ch] [ebp-1Ch]
  int v18; // [esp+10h] [ebp-18h]
  int v19; // [esp+10h] [ebp-18h]

  *this = &EstabTakeActor::`vftable';
  v2 = (AnimationSet *)(this + 325);
  AnimationSet::Destroy((AnimationSet *)(this + 325));
  AnimationSet::Destroy((AnimationSet *)(this + 336));
  AnimationSet::Destroy((AnimationSet *)(this + 347));
  AnimationSet::Destroy((AnimationSet *)(this + 358));
  v3 = (NxPhysics *)NxPhysics::Instance(this + 155, v10, v14, v16, v18);
  NxPhysics::DestroyMeshActor(v3, v11);
  v4 = this[179];
  if ( v4 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 12))(v4, 1);
    this[179] = 0;
  }
  v5 = this[373];
  if ( v5 )
  {
    v6 = (NxPhysics *)NxPhysics::Instance(v5 + 620, v12, v15, v17, v19);
    NxPhysics::DestroyMeshActor(v6, v13);
    v7 = *(_DWORD *)(this[373] + 716);
    if ( v7 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 12))(v7, 1);
      *(_DWORD *)(this[373] + 716) = 0;
    }
    v8 = this[373];
    if ( v8 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 80))(v8, 1);
      this[373] = 0;
    }
  }
  v9 = (EventAttemper *)EventAttemper::Instance(this[372], 1);
  EventAttemper::RemoveObserver(v9, v12, v15);
  AnimationSet::~AnimationSet((AnimationSet *)(this + 358));
  AnimationSet::~AnimationSet((AnimationSet *)(this + 347));
  AnimationSet::~AnimationSet((AnimationSet *)(this + 336));
  AnimationSet::~AnimationSet(v2);
  std::string::~string(this + 313);
  std::string::~string(this + 299);
  std::string::~string(this + 292);
  std::string::~string(this + 285);
  std::string::~string(this + 278);
  std::string::~string(this + 270);
  std::string::~string(this + 263);
  Actor::~Actor((Actor *)this);
}
