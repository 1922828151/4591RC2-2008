/*
 * func-name: ?Tick@World@@QAEXXZ
 * func-address: 0x10138880
 * callers: 0x1016dcd0, 0x1016e310
 * callees: 0x1001b2e0, 0x10020830, 0x1007e380, 0x1007e3d0, 0x1007e670, 0x1007ec70, 0x100956d0, 0x100debd0, 0x100df070, 0x100e2550, 0x100e34c0, 0x100e6600, 0x100eef10, 0x10116f70, 0x101189f0, 0x10118c10, 0x10118dc0, 0x1013f210, 0x1013f310, 0x101a2500, 0x101a26c0
 */

void __thiscall World::Tick(World *this)
{
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // eax
  unsigned int v3; // ebx
  struct RenderDevice *v4; // eax
  bool v5; // al
  LARGE_INTEGER *v6; // eax
  char *v7; // ebp
  _DWORD *v8; // eax
  int v9; // ecx
  int v10; // edi
  LARGE_INTEGER *v11; // eax
  StaticModel *v12; // ecx
  double v13; // st7
  int v14; // eax
  int v15; // ebp
  int v16; // ecx
  int v17; // eax
  int v18; // ebp
  unsigned int v19; // ebx
  CRETimer *v20; // eax
  int v21; // eax
  char *v22; // ebx
  float v23; // ebp
  int (__thiscall *v24)(int); // edx
  int v25; // eax
  struct Profiler *v26; // eax
  int v27; // edx
  _DWORD *v28; // eax
  int v29; // ecx
  struct Profiler *v30; // eax
  int v31; // edx
  _DWORD *v32; // eax
  int v33; // ecx
  float *v34; // edi
  CRETimer *v35; // eax
  LARGE_INTEGER *v36; // eax
  void (__cdecl *v37)(); // ebx
  unsigned int i; // edi
  int v39; // ecx
  unsigned int j; // edi
  int v41; // ecx
  int v42; // edx
  float *v43; // edi
  CRETimer *v44; // eax
  double v45; // st7
  unsigned int v46; // edx
  int v47; // ecx
  float *v48; // ebx
  int v49; // eax
  unsigned int k; // edi
  int v51; // ecx
  unsigned int v52; // ebp
  unsigned int v53; // edi
  int v54; // eax
  unsigned int m; // edi
  int v56; // ecx
  int v57; // edx
  int v58; // ecx
  int v59; // ecx
  int v60; // ecx
  int v61; // eax
  int v62; // edi
  float v63; // esi
  int v64; // ebp
  const char *v65; // eax
  char *v66; // edi
  char *ii; // esi
  _DWORD *v68; // eax
  unsigned int v69; // [esp+64h] [ebp-B4h]
  unsigned int v70; // [esp+64h] [ebp-B4h]
  float v71; // [esp+64h] [ebp-B4h]
  char *v72; // [esp+68h] [ebp-B0h]
  float n; // [esp+6Ch] [ebp-ACh] BYREF
  int v74; // [esp+70h] [ebp-A8h]
  char *v75; // [esp+74h] [ebp-A4h] BYREF
  float v76; // [esp+78h] [ebp-A0h]
  int v77; // [esp+80h] [ebp-98h]
  float v78; // [esp+84h] [ebp-94h]
  char v79[12]; // [esp+8Ch] [ebp-8Ch] BYREF
  _BYTE v80[28]; // [esp+98h] [ebp-80h] BYREF
  _BYTE v81[28]; // [esp+B4h] [ebp-64h] BYREF
  float v82; // [esp+D0h] [ebp-48h]
  int v83; // [esp+D4h] [ebp-44h]
  struct _EXCEPTION_REGISTRATION_RECORD *v84; // [esp+10Ch] [ebp-Ch]
  void *v85; // [esp+110h] [ebp-8h]
  int v86; // [esp+114h] [ebp-4h]

  v86 = -1;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  v85 = &loc_101B3404;
  v84 = ExceptionList;
  if ( GDeltaTime <= 0.0 )
    return;
  v3 = 0;
  if ( *((_BYTE *)Editor::Instance() + 2056) )
    (*(void (__thiscall **)(World *))(*(_DWORD *)this + 16))(this);
  v5 = 0;
  if ( !*((_BYTE *)this + 20) )
  {
    v4 = RenderDevice::Instance();
    if ( (*(unsigned __int8 (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v4 + 96))(v4) )
      v5 = 1;
  }
  *((_BYTE *)this + 781) = v5;
  v6 = (LARGE_INTEGER *)REGetGlobalTimer();
  CRETimer::StartMiniTimer(v6);
  v7 = (char *)this + 4;
  v72 = (char *)this + 4;
  sub_10020830(*(void ***)(*((_DWORD *)this + 2) + 4));
  *(_DWORD *)(*((_DWORD *)this + 2) + 4) = *((_DWORD *)this + 2);
  v8 = (_DWORD *)*((_DWORD *)this + 2);
  *((_DWORD *)this + 3) = 0;
  *v8 = v8;
  *(_DWORD *)(*((_DWORD *)this + 2) + 8) = *((_DWORD *)this + 2);
  v69 = 0;
  while ( 1 )
  {
    v9 = *((_DWORD *)this + 806);
    if ( !v9 || v3 >= (*((_DWORD *)this + 807) - v9) >> 2 )
      break;
    v10 = *(_DWORD *)(*((_DWORD *)this + 806) + 4 * v3);
    if ( *((_BYTE *)this + 725) )
    {
      v11 = (LARGE_INTEGER *)REGetGlobalTimer();
      CRETimer::StartMiniTimer(v11);
    }
    if ( 0.0 != *(float *)(v10 + 820) )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 60))(v10);
      v12 = *(StaticModel **)(v10 + 716);
      if ( v12 )
      {
        StaticModel::ClearLights(v12);
        if ( !*(_BYTE *)(v10 + 725) || *(_BYTE *)(v10 + 441) )
        {
          if ( *(_BYTE *)(v10 + 1008) )
          {
            (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(v10 + 716) + 28))(
              *(_DWORD *)(v10 + 716),
              v10 + 868,
              v10 + 856);
            (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v10 + 716) + 20))(*(_DWORD *)(v10 + 716));
          }
        }
      }
    }
    if ( -1.0 != *(float *)(v10 + 820) )
    {
      n = *(float *)(v10 + 820) - GDeltaTime;
      v13 = n;
      *(float *)(v10 + 820) = n;
      if ( v13 <= 0.0 )
      {
        v14 = *((_DWORD *)this + 806);
        if ( v14 )
          v15 = (*((_DWORD *)this + 807) - v14) >> 2;
        else
          v15 = 0;
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 80))(v10, 1);
        v16 = *((_DWORD *)this + 806);
        v10 = 0;
        if ( v16 )
          v17 = (*((_DWORD *)this + 807) - v16) >> 2;
        else
          v17 = 0;
        v18 = v15 - v17;
        if ( v18 <= 0 )
          v19 = v3 - 1;
        else
          v19 = v3 - v18;
        v69 = v19;
      }
    }
    if ( *((_BYTE *)this + 725) )
    {
      v20 = REGetGlobalTimer();
      n = CRETimer::StopMiniTimer(v20);
      v21 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 100))(v10);
      std::string::string(v80, v21);
      v86 = 0;
      sub_1013F310(&v75, v80);
      v86 = -1;
      std::string::~string(v80);
      v22 = v75;
      v77 = *((_DWORD *)this + 2);
      if ( !v75 || v75 != v72 )
        invalid_parameter_noinfo();
      v23 = v76;
      if ( LODWORD(v76) != v77 )
      {
        if ( !v22 )
          invalid_parameter_noinfo();
        if ( LODWORD(v23) == *((_DWORD *)v22 + 1) )
          invalid_parameter_noinfo();
        *(float *)(LODWORD(v23) + 40) = *(float *)(LODWORD(v23) + 40) + n;
        if ( LODWORD(v23) == *((_DWORD *)v22 + 1) )
          invalid_parameter_noinfo();
        ++*(_DWORD *)(LODWORD(v23) + 44);
        goto LABEL_44;
      }
      v24 = *(int (__thiscall **)(int))(*(_DWORD *)v10 + 100);
      v78 = n;
      v25 = v24(v10);
      std::string::string(v80, v25);
      v86 = 1;
      std::string::string(v81, v80);
      v82 = v78;
      v83 = 1;
      LOBYTE(v86) = 2;
      sub_1013F210(v79, v81);
      LOBYTE(v86) = 1;
      std::string::~string(v81);
      v86 = -1;
      std::string::~string(v80);
      ++v69;
      v7 = (char *)this + 4;
      v3 = v69;
    }
    else
    {
LABEL_44:
      ++v69;
      v7 = (char *)this + 4;
      v3 = v69;
    }
  }
  v26 = Profiler::Get();
  v27 = *((_DWORD *)this + 806);
  v28 = (_DWORD *)((char *)v26 + 60);
  if ( v27 )
    v29 = (*((_DWORD *)this + 807) - v27) >> 2;
  else
    v29 = 0;
  *v28 += v29;
  v30 = Profiler::Get();
  v31 = *((_DWORD *)this + 810);
  v32 = (_DWORD *)((char *)v30 + 56);
  if ( v31 )
    v33 = (*((_DWORD *)this + 811) - v31) >> 2;
  else
    v33 = 0;
  *v32 += v33;
  v34 = (float *)((char *)Profiler::Get() + 108);
  v35 = REGetGlobalTimer();
  *v34 = CRETimer::StopMiniTimer(v35) + *v34;
  v36 = (LARGE_INTEGER *)REGetGlobalTimer();
  CRETimer::StartMiniTimer(v36);
  v37 = invalid_parameter_noinfo;
  if ( !*((_BYTE *)this + 82) )
  {
    for ( i = 0; ; ++i )
    {
      v39 = *((_DWORD *)this + 810);
      if ( !v39 || i >= (*((_DWORD *)this + 811) - v39) >> 2 )
        break;
      Light::MarkStaticItems(*(Light **)(*((_DWORD *)this + 810) + 4 * i));
    }
  }
  for ( j = 0; ; ++j )
  {
    v41 = *((_DWORD *)this + 810);
    if ( !v41 || j >= (*((_DWORD *)this + 811) - v41) >> 2 )
      break;
    v42 = *((_DWORD *)this + 810);
    if ( *(_BYTE *)(*(_DWORD *)(v42 + 4 * j) + 1052) )
    {
      if ( !v42 || j >= (*((_DWORD *)this + 811) - v42) >> 2 )
        invalid_parameter_noinfo();
      Light::MarkLitItems(*(Light **)(*((_DWORD *)this + 810) + 4 * j));
    }
  }
  *((_BYTE *)this + 82) = 1;
  v43 = (float *)((char *)Profiler::Get() + 116);
  v44 = REGetGlobalTimer();
  v45 = CRETimer::StopMiniTimer(v44);
  v46 = 0;
  v70 = 0;
  *v43 = v45 + *v43;
  while ( 1 )
  {
    v47 = *((_DWORD *)this + 814);
    if ( !v47 || v46 >= (*((_DWORD *)this + 815) - v47) >> 2 )
      break;
    v48 = *(float **)(*((_DWORD *)this + 814) + 4 * v70);
    if ( !v48 )
      Error("A script was NULL");
    n = v48[34];
    if ( n == NAN || (v49 = (int)((double)SLODWORD(n) - GDeltaTime), *((_DWORD *)v48 + 34) = v49, v49 > 0) )
    {
      Script::Tick((Script *)v48);
    }
    else
    {
      for ( k = 0; ; ++k )
      {
        v51 = *((_DWORD *)this + 814);
        if ( !v51 || k >= (*((_DWORD *)this + 815) - v51) >> 2 )
          break;
        if ( v48 == *(float **)(*((_DWORD *)this + 814) + 4 * k) )
        {
          v52 = *((_DWORD *)this + 814);
          if ( v52 > *((_DWORD *)this + 815) )
            invalid_parameter_noinfo();
          v53 = v52 + 4 * k;
          if ( v53 > *((_DWORD *)this + 815) || v53 < *((_DWORD *)this + 814) )
            invalid_parameter_noinfo();
          v54 = (int)(*((_DWORD *)this + 815) - (v53 + 4)) >> 2;
          if ( v54 > 0 )
            memmove_s((void *const)v53, 4 * v54, (const void *const)(v53 + 4), 4 * v54);
          *((_DWORD *)this + 815) -= 4;
          break;
        }
      }
      Script::~Script((Script *)v48);
      operator delete(v48);
      --v70;
    }
    ++v70;
    v37 = invalid_parameter_noinfo;
    v7 = (char *)this + 4;
    v46 = v70;
  }
  if ( *((_BYTE *)this + 724) )
  {
    for ( m = 0; ; ++m )
    {
      v56 = *((_DWORD *)this + 178);
      if ( !v56 || m >= (*((_DWORD *)this + 179) - v56) >> 2 )
        break;
      v57 = *((_DWORD *)this + 178);
      if ( *(_DWORD *)(*(_DWORD *)(v57 + 4 * m) + 320) == 1 )
      {
        if ( !v57 || m >= (*((_DWORD *)this + 179) - v57) >> 2 )
          v37();
        v58 = *((_DWORD *)this + 178);
        if ( *(_BYTE *)(*(_DWORD *)(v58 + 4 * m) + 324) )
        {
          if ( !v58 || m >= (*((_DWORD *)this + 179) - v58) >> 2 )
            v37();
          Material::PreDestroy(*(Material **)(*((_DWORD *)this + 178) + 4 * m));
        }
      }
      v59 = *((_DWORD *)this + 178);
      if ( !v59 || m >= (*((_DWORD *)this + 179) - v59) >> 2 )
        v37();
      v60 = *((_DWORD *)this + 178);
      if ( *(int *)(*(_DWORD *)(v60 + 4 * m) + 320) > 1 )
      {
        if ( !v60 || m >= (*((_DWORD *)this + 179) - v60) >> 2 )
          v37();
        v61 = *((_DWORD *)this + 178);
        if ( !*(_BYTE *)(*(_DWORD *)(v61 + 4 * m) + 324) )
        {
          if ( !v61 || m >= (*((_DWORD *)this + 179) - v61) >> 2 )
            v37();
          Material::PreLoad(*(Material **)(*((_DWORD *)this + 178) + 4 * m));
        }
      }
    }
  }
  if ( *((_BYTE *)this + 725) )
  {
    v62 = **((_DWORD **)v7 + 1);
    v71 = 0.0;
    v63 = *(float *)&v7;
    v74 = v62;
    for ( n = *(float *)&v7; ; v63 = n )
    {
      v64 = *((_DWORD *)v72 + 1);
      if ( v63 == 0.0 || (char *)LODWORD(v63) != v72 )
        invalid_parameter_noinfo();
      if ( v62 == v64 )
        break;
      if ( v63 == 0.0 )
        invalid_parameter_noinfo();
      if ( v62 == *(_DWORD *)(LODWORD(v63) + 4) )
        invalid_parameter_noinfo();
      if ( v62 == *(_DWORD *)(LODWORD(v63) + 4) )
      {
        invalid_parameter_noinfo();
        if ( v62 == *(_DWORD *)(LODWORD(v63) + 4) )
        {
          invalid_parameter_noinfo();
          if ( v62 == *(_DWORD *)(LODWORD(v63) + 4) )
          {
            invalid_parameter_noinfo();
            if ( v62 == *(_DWORD *)(LODWORD(v63) + 4) )
              invalid_parameter_noinfo();
          }
        }
      }
      v65 = (const char *)std::string::c_str(v62 + 12);
      LogPrintf(
        "Tick --- %.3f %.2f %03d %s",
        *(float *)(v62 + 40) / (double)*(int *)(v62 + 44),
        *(float *)(v62 + 40),
        *(_DWORD *)(v62 + 44),
        v65);
      if ( v62 == *(_DWORD *)(LODWORD(v63) + 4) )
        invalid_parameter_noinfo();
      v71 = *(float *)(v62 + 40) + v71;
      sub_1001B2E0(&n);
      v62 = v74;
    }
    LogPrintf("Tick --- AllElesp %.2f", v71);
    v66 = *(char **)(*((_DWORD *)v72 + 1) + 4);
    for ( ii = v66; !ii[49]; v66 = ii )
    {
      sub_10020830(*((void ***)ii + 2));
      ii = *(char **)ii;
      std::string::~string(v66 + 12);
      operator delete(v66);
    }
    *(_DWORD *)(*((_DWORD *)v72 + 1) + 4) = *((_DWORD *)v72 + 1);
    v68 = (_DWORD *)*((_DWORD *)v72 + 1);
    *((_DWORD *)v72 + 2) = 0;
    *v68 = v68;
    *(_DWORD *)(*((_DWORD *)v72 + 1) + 8) = *((_DWORD *)v72 + 1);
  }
}
