/*
 * func-name: ?addModel@C3DModel@@QAE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x100b41c0
 * callers: none
 * callees: 0x10050b80, 0x100b2080, 0x100de9e0, 0x100efd60, 0x100f2ca0, 0x1016db80, 0x1016e4c0, 0x1016e600, 0x101a2534
 */

char __thiscall C3DModel::addModel(C3DModel *this, _DWORD *a2)
{
  TextureCamera *v4; // eax
  TextureCamera *v5; // eax
  Light *v6; // eax
  float *v7; // eax
  int v8; // ecx
  int v9; // ecx
  Actor *v10; // eax
  Actor *v11; // eax
  Model *v12; // eax
  Model *v13; // eax
  const char *v14; // eax

  if ( !*((_DWORD *)this + 261) )
    return 0;
  if ( !*((_DWORD *)this + 133) )
  {
    v4 = (TextureCamera *)operator new(0x1520u);
    if ( v4 )
      v5 = TextureCamera::TextureCamera(v4, 0);
    else
      v5 = 0;
    *((_DWORD *)this + 133) = v5;
    TextureCamera::Init(v5, 0.0, 0.0, -10.0, 0.0, 0.0, 1.0, 100.0, 0, 0.0, 0.0, 0.0, 0.0, 0.0, 0);
    v6 = (Light *)operator new(0x5B0u);
    if ( v6 )
      v7 = (float *)Light::Light(v6, (struct World *)(*((_DWORD *)this + 133) + 1608));
    else
      v7 = 0;
    v7[214] = 0.0;
    v7[215] = 10.0;
    v7[216] = -10.0;
  }
  if ( a2[5] )
  {
    if ( *((_DWORD *)this + 270) )
    {
      TextureCamera::RemoveActorToList(*((TextureCamera **)this + 133), *((struct Actor **)this + 270));
      v9 = *((_DWORD *)this + 270);
      if ( v9 )
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 80))(v9, 1);
        *((_DWORD *)this + 270) = 0;
      }
    }
    v10 = (Actor *)operator new(0x41Cu);
    if ( v10 )
      v11 = Actor::Actor(v10, 0);
    else
      v11 = 0;
    *((_DWORD *)this + 270) = v11;
    v12 = (Model *)operator new(0x1C8u);
    if ( v12 )
      v13 = Model::Model(v12);
    else
      v13 = 0;
    *(_DWORD *)(*((_DWORD *)this + 270) + 716) = v13;
    if ( a2[6] < 0x10u )
      v14 = (const char *)(a2 + 1);
    else
      v14 = (const char *)a2[1];
    StaticModel::Load(*(StaticModel **)(*((_DWORD *)this + 270) + 716), v14, 0);
    return C3DModel::addModel(this, *((struct Actor **)this + 270));
  }
  else
  {
    TextureCamera::RemoveActorToList(*((TextureCamera **)this + 133), *((struct Actor **)this + 270));
    v8 = *((_DWORD *)this + 270);
    if ( v8 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 80))(v8, 1);
      *((_DWORD *)this + 270) = 0;
    }
    return 1;
  }
}
