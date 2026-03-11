/*
 * func-name: ??1Prefab@@UAE@XZ
 * func-address: 0x100518e0
 * callers: 0x10018570, 0x1005b060, 0x1005b0e0, 0x1005e940, 0x1007e990, 0x10090f70, 0x10116c70, 0x10137070, 0x1015bc10, 0x1015bcd0, 0x1015e0f0, 0x10161710, 0x10161a90, 0x10162f00, 0x101655b0, 0x10165f10
 * callees: 0x100511a0, 0x1005f1c0, 0x10140fe0, 0x10143fd0, 0x101715f0, 0x101a2500
 */

void __thiscall Prefab::~Prefab(Prefab *this)
{
  unsigned int v2; // ebp
  unsigned int i; // ebx
  int v4; // ecx
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // edi
  int v11; // ecx
  int v12; // edi
  int v13; // ecx
  int v14; // edi
  unsigned int v15; // ebp
  int v16; // edi
  unsigned int v17; // ebp
  int v18; // ecx
  int v19; // edi
  int v20; // eax
  int v21; // edi
  int v22; // eax
  int v23; // eax
  NxPhysics *v24; // eax
  unsigned int v25; // [esp+10h] [ebp-14h]

  *(_DWORD *)this = &Prefab::`vftable';
  v2 = 0;
  for ( i = 0; ; ++i )
  {
    v4 = *((_DWORD *)this + 289);
    if ( !v4 || i >= (*((_DWORD *)this + 290) - v4) >> 2 )
      break;
    while ( 1 )
    {
      v5 = *((_DWORD *)this + 289);
      if ( !v5 || i >= (*((_DWORD *)this + 290) - v5) >> 2 )
        invalid_parameter_noinfo();
      v6 = *(_DWORD *)(*((_DWORD *)this + 289) + 4 * i);
      v7 = *(_DWORD *)(v6 + 88);
      v8 = v6 + 84;
      if ( !v7 || v2 >= (*(_DWORD *)(v8 + 8) - v7) >> 2 )
        break;
      v9 = *((_DWORD *)this + 289);
      if ( !v9 || i >= (*((_DWORD *)this + 290) - v9) >> 2 )
        invalid_parameter_noinfo();
      v10 = *(_DWORD *)(*((_DWORD *)this + 289) + 4 * i);
      v11 = *(_DWORD *)(v10 + 88);
      v12 = v10 + 84;
      if ( !v11 || v2 >= (*(_DWORD *)(v12 + 8) - v11) >> 2 )
        invalid_parameter_noinfo();
      if ( this == *(Prefab **)(*(_DWORD *)(v12 + 4) + 4 * v2) )
      {
        v13 = *((_DWORD *)this + 289);
        v25 = v2;
        if ( !v13 || i >= (*((_DWORD *)this + 290) - v13) >> 2 )
          invalid_parameter_noinfo();
        v14 = *(_DWORD *)(*((_DWORD *)this + 289) + 4 * i);
        v15 = *(_DWORD *)(v14 + 88);
        v16 = v14 + 84;
        if ( v15 > *(_DWORD *)(v16 + 8) )
          invalid_parameter_noinfo();
        v17 = v15 + 4 * v25;
        if ( v17 > *(_DWORD *)(v16 + 8) || v17 < *(_DWORD *)(v16 + 4) )
          invalid_parameter_noinfo();
        v18 = *((_DWORD *)this + 289);
        if ( !v18 || i >= (*((_DWORD *)this + 290) - v18) >> 2 )
          invalid_parameter_noinfo();
        v19 = *(_DWORD *)(*((_DWORD *)this + 289) + 4 * i);
        v20 = *(_DWORD *)(v19 + 92);
        v21 = v19 + 84;
        v22 = (int)(v20 - (v17 + 4)) >> 2;
        if ( v22 > 0 )
          memmove_s((void *const)v17, 4 * v22, (const void *const)(v17 + 4), 4 * v22);
        *(_DWORD *)(v21 + 8) -= 4;
        break;
      }
      ++v2;
    }
    v2 = 0;
  }
  if ( *((_DWORD *)this + 157) != -1 )
  {
    v23 = sub_1005F1C0();
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v23 + 12))(v23, *((unsigned __int16 *)this + 314));
    *((_DWORD *)this + 157) = -1;
  }
  if ( *((_DWORD *)this + 268) )
  {
    operator delete(*((void **)this + 268));
    *((_DWORD *)this + 268) = 0;
  }
  if ( AsyncLoader::s_pInstance && *((_DWORD *)this + 269) != -1 )
    AsyncLoader::CancelSubmit(AsyncLoader::s_pInstance, *((_DWORD *)this + 269));
  if ( *((_DWORD *)this + 155) )
  {
    v24 = NxPhysics::Instance();
    NxPhysics::DestroyMeshActor(v24, (struct NxActor **)this + 155);
  }
  if ( *((_DWORD *)this + 289) )
    operator delete(*((void **)this + 289));
  *((_DWORD *)this + 289) = 0;
  *((_DWORD *)this + 290) = 0;
  *((_DWORD *)this + 291) = 0;
  Actor::~Actor(this);
}
