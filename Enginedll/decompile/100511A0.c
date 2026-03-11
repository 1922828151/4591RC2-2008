/*
 * func-name: ??1Actor@@UAE@XZ
 * func-address: 0x100511a0
 * callers: 0x100184e0, 0x1002a570, 0x1002a690, 0x100518e0, 0x10051b50, 0x100541c0, 0x100544f0, 0x10054aa0, 0x1005ddc0, 0x10074d60, 0x100da460, 0x100da530, 0x100dde50, 0x100de9e0, 0x100dead0, 0x100df590, 0x1012fc10, 0x1012ffd0, 0x1016e550, 0x1016e600
 * callees: 0x1000cc00, 0x100111d0, 0x1004ec70, 0x1005f1c0, 0x1007ec70, 0x10082690, 0x101189f0, 0x101381e0, 0x10141630, 0x10143fd0, 0x1017a0b0, 0x101a2500
 */

void __thiscall Actor::~Actor(Actor *this)
{
  Editor *v2; // eax
  struct RenderDevice *v3; // eax
  int v4; // edi
  unsigned int i; // edi
  int v6; // ecx
  int v7; // eax
  unsigned int j; // ebp
  int v9; // edi
  int v10; // ecx
  int v11; // edi
  unsigned int v12; // ebx
  int v13; // edi
  unsigned int v14; // ebp
  int v15; // edi
  int v16; // eax
  int v17; // edi
  int v18; // eax
  NxPhysics *v19; // eax
  unsigned int k; // edi
  int v21; // ecx
  int v22; // ecx
  Actor *v23; // ecx
  unsigned int m; // ebp
  int v25; // ecx
  unsigned int n; // ebx
  int v27; // ecx
  void (__cdecl *v28)(); // edi
  int v29; // eax
  int v30; // ecx
  int v31; // eax
  int v32; // ecx
  int v33; // edi
  int v34; // ecx
  int v35; // edi
  int v36; // ecx
  int v37; // edi
  unsigned int v38; // ebx
  int v39; // edi
  unsigned int v40; // ebx
  int v41; // ecx
  int v42; // edi
  int v43; // eax
  int v44; // edi
  int v45; // eax
  int v46; // ecx
  int v47; // ecx
  unsigned int ii; // edi
  int v49; // ecx
  int v50; // edx
  int v51; // ecx
  int v52; // ecx
  World *v53; // ecx
  int v54; // ecx
  int v55; // eax
  int v56; // eax
  int v57; // edi
  int jj; // ebp
  int v59; // edi
  int kk; // ebp
  unsigned int v61; // [esp+8h] [ebp-14h]

  *(_DWORD *)this = &Actor::`vftable';
  if ( *((_BYTE *)this + 441) )
  {
    v2 = Editor::Instance();
    Editor::UnSelectAll(v2);
  }
  if ( RenderDevice::Instance() )
  {
    v3 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, _DWORD))(*(_DWORD *)v3 + 4))(v3, *((_DWORD *)this + 90));
  }
  v4 = *((_DWORD *)this + 52);
  *((_DWORD *)this + 90) = 0;
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 88) )
      operator delete(*(void **)(v4 + 88));
    *(_DWORD *)(v4 + 88) = 0;
    *(_DWORD *)(v4 + 92) = 0;
    *(_DWORD *)(v4 + 96) = 0;
    operator delete((void *)v4);
    *((_DWORD *)this + 52) = 0;
  }
  for ( i = 0; ; ++i )
  {
    v6 = *((_DWORD *)this + 97);
    if ( !v6 || i >= (*((_DWORD *)this + 98) - v6) >> 2 )
      break;
    v7 = *((_DWORD *)this + 97);
    if ( *(Actor **)(*(_DWORD *)(v7 + 4 * i) + 380) == this )
    {
      if ( !v7 || i >= (*((_DWORD *)this + 98) - v7) >> 2 )
        invalid_parameter_noinfo();
      *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 97) + 4 * i) + 380) = 0;
    }
  }
  if ( *((_DWORD *)this + 95) )
  {
    for ( j = 0; ; ++j )
    {
      v9 = *((_DWORD *)this + 95);
      v10 = *(_DWORD *)(v9 + 388);
      if ( !v10 || j >= (*(_DWORD *)(v9 + 392) - v10) >> 2 )
        break;
      if ( this == *(Actor **)(*(_DWORD *)(v9 + 388) + 4 * j) )
      {
        v11 = *((_DWORD *)this + 95);
        v12 = *(_DWORD *)(v11 + 388);
        v13 = v11 + 384;
        if ( v12 > *(_DWORD *)(v13 + 8) )
          invalid_parameter_noinfo();
        v14 = v12 + 4 * j;
        if ( v14 > *(_DWORD *)(v13 + 8) || v14 < *(_DWORD *)(v13 + 4) )
          invalid_parameter_noinfo();
        v15 = *((_DWORD *)this + 95);
        v16 = *(_DWORD *)(v15 + 392);
        v17 = v15 + 384;
        v18 = (int)(v16 - (v14 + 4)) >> 2;
        if ( v18 > 0 )
          memmove_s((void *const)v14, 4 * v18, (const void *const)(v14 + 4), 4 * v18);
        *(_DWORD *)(v17 + 8) -= 4;
        break;
      }
    }
  }
  if ( *((_DWORD *)this + 155) )
  {
    v19 = NxPhysics::Instance();
    NxPhysics::DestroyNxActor(v19, (struct NxActor **)this + 155);
    *((_DWORD *)this + 155) = 0;
  }
  for ( k = 0; ; ++k )
  {
    v21 = *((_DWORD *)this + 22);
    if ( !v21 || k >= (*((_DWORD *)this + 23) - v21) >> 2 )
      break;
    ***(_DWORD ***)(*((_DWORD *)this + 22) + 4 * k) = 0;
    v22 = *((_DWORD *)this + 22);
    if ( !v22 || k >= (*((_DWORD *)this + 23) - v22) >> 2 )
      invalid_parameter_noinfo();
    operator delete(*(void **)(*((_DWORD *)this + 22) + 4 * k));
  }
  v23 = (Actor *)*((_DWORD *)this + 25);
  if ( v23 )
    Actor::DelRef(v23, this);
  for ( m = 0; ; ++m )
  {
    v25 = *((_DWORD *)this + 37);
    if ( !v25 || m >= (*((_DWORD *)this + 38) - v25) >> 2 )
      break;
    for ( n = 0; ; ++n )
    {
      v27 = *((_DWORD *)this + 37);
      if ( v27 && m < (*((_DWORD *)this + 38) - v27) >> 2 )
      {
        v28 = invalid_parameter_noinfo;
      }
      else
      {
        v28 = invalid_parameter_noinfo;
        invalid_parameter_noinfo();
      }
      v29 = *(_DWORD *)(*((_DWORD *)this + 37) + 4 * m);
      v30 = *(_DWORD *)(v29 + 164);
      v31 = v29 + 160;
      if ( !v30 || n >= (*(_DWORD *)(v31 + 8) - v30) >> 2 )
        break;
      v32 = *((_DWORD *)this + 37);
      if ( !v32 || m >= (*((_DWORD *)this + 38) - v32) >> 2 )
        v28();
      v33 = *(_DWORD *)(*((_DWORD *)this + 37) + 4 * m);
      v34 = *(_DWORD *)(v33 + 164);
      v35 = v33 + 160;
      if ( !v34 || n >= (*(_DWORD *)(v35 + 8) - v34) >> 2 )
        invalid_parameter_noinfo();
      if ( this == *(Actor **)(*(_DWORD *)(v35 + 4) + 4 * n) )
      {
        v36 = *((_DWORD *)this + 37);
        v61 = n;
        if ( !v36 || m >= (*((_DWORD *)this + 38) - v36) >> 2 )
          invalid_parameter_noinfo();
        v37 = *(_DWORD *)(*((_DWORD *)this + 37) + 4 * m);
        v38 = *(_DWORD *)(v37 + 164);
        v39 = v37 + 160;
        if ( v38 > *(_DWORD *)(v39 + 8) )
          invalid_parameter_noinfo();
        v40 = v38 + 4 * v61;
        if ( v40 > *(_DWORD *)(v39 + 8) || v40 < *(_DWORD *)(v39 + 4) )
          invalid_parameter_noinfo();
        v41 = *((_DWORD *)this + 37);
        if ( !v41 || m >= (*((_DWORD *)this + 38) - v41) >> 2 )
          invalid_parameter_noinfo();
        v42 = *(_DWORD *)(*((_DWORD *)this + 37) + 4 * m);
        v43 = *(_DWORD *)(v42 + 168);
        v44 = v42 + 160;
        v45 = (int)(v43 - (v40 + 4)) >> 2;
        if ( v45 > 0 )
          memmove_s((void *const)v40, 4 * v45, (const void *const)(v40 + 4), 4 * v45);
        *(_DWORD *)(v44 + 8) -= 4;
        v28 = invalid_parameter_noinfo;
        break;
      }
    }
    v46 = *((_DWORD *)this + 37);
    if ( !v46 || m >= (*((_DWORD *)this + 38) - v46) >> 2 )
      v28();
    v47 = *((_DWORD *)this + 37);
    if ( *(Actor **)(*(_DWORD *)(v47 + 4 * m) + 100) == this )
    {
      if ( !v47 || m >= (*((_DWORD *)this + 38) - v47) >> 2 )
        v28();
      *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 37) + 4 * m) + 100) = 0;
    }
  }
  for ( ii = 0; ; ++ii )
  {
    v49 = *((_DWORD *)this + 41);
    if ( !v49 || ii >= (*((_DWORD *)this + 42) - v49) >> 2 )
      break;
    v50 = *((_DWORD *)this + 41);
    if ( *(_DWORD *)(v50 + 4 * ii) )
    {
      if ( !v50 || ii >= (*((_DWORD *)this + 42) - v50) >> 2 )
        invalid_parameter_noinfo();
      v51 = *(_DWORD *)(*((_DWORD *)this + 41) + 4 * ii);
      (*(void (__thiscall **)(int, Actor *))(*(_DWORD *)v51 + 48))(v51, this);
      v52 = *((_DWORD *)this + 41);
      if ( !v52 || ii >= (*((_DWORD *)this + 42) - v52) >> 2 )
        invalid_parameter_noinfo();
      Actor::DelRef(*(Actor **)(*((_DWORD *)this + 41) + 4 * ii), this);
    }
  }
  v53 = (World *)*((_DWORD *)this + 178);
  if ( v53 )
    World::RemoveActor(v53, this);
  v54 = *((_DWORD *)this + 179);
  if ( v54 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v54 + 12))(v54, 1);
    *((_DWORD *)this + 179) = 0;
  }
  if ( *((_DWORD *)this + 157) != -1 )
  {
    v55 = sub_1005F1C0();
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v55 + 12))(v55, *((unsigned __int16 *)this + 314));
  }
  std::string::~string((char *)this + 1024);
  sub_1017A0B0((char *)this + 768);
  ScriptData::~ScriptData((Actor *)((char *)this + 472));
  std::string::~string((char *)this + 444);
  v56 = *((_DWORD *)this + 107);
  if ( v56 )
  {
    sub_1000CC00(v56, *((_DWORD *)this + 108));
    operator delete(*((void **)this + 107));
  }
  *((_DWORD *)this + 107) = 0;
  *((_DWORD *)this + 108) = 0;
  *((_DWORD *)this + 109) = 0;
  v57 = *((_DWORD *)this + 101);
  if ( v57 )
  {
    for ( jj = *((_DWORD *)this + 102); v57 != jj; v57 += 28 )
      std::string::~string(v57);
    operator delete(*((void **)this + 101));
  }
  *((_DWORD *)this + 101) = 0;
  *((_DWORD *)this + 102) = 0;
  *((_DWORD *)this + 103) = 0;
  if ( *((_DWORD *)this + 97) )
    operator delete(*((void **)this + 97));
  *((_DWORD *)this + 97) = 0;
  *((_DWORD *)this + 98) = 0;
  *((_DWORD *)this + 99) = 0;
  v59 = *((_DWORD *)this + 85);
  if ( v59 )
  {
    for ( kk = *((_DWORD *)this + 86); v59 != kk; v59 += 28 )
      std::string::~string(v59);
    operator delete(*((void **)this + 85));
  }
  *((_DWORD *)this + 85) = 0;
  *((_DWORD *)this + 86) = 0;
  *((_DWORD *)this + 87) = 0;
  std::string::~string((char *)this + 280);
  std::string::~string((char *)this + 220);
  if ( *((_DWORD *)this + 45) )
    operator delete(*((void **)this + 45));
  *((_DWORD *)this + 45) = 0;
  *((_DWORD *)this + 46) = 0;
  *((_DWORD *)this + 47) = 0;
  if ( *((_DWORD *)this + 41) )
    operator delete(*((void **)this + 41));
  *((_DWORD *)this + 41) = 0;
  *((_DWORD *)this + 42) = 0;
  *((_DWORD *)this + 43) = 0;
  if ( *((_DWORD *)this + 37) )
    operator delete(*((void **)this + 37));
  *((_DWORD *)this + 37) = 0;
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 39) = 0;
  sub_1017A0B0((char *)this + 104);
  if ( *((_DWORD *)this + 22) )
    operator delete(*((void **)this + 22));
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 23) = 0;
  *((_DWORD *)this + 24) = 0;
}
