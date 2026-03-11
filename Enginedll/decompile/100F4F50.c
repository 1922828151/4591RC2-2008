/*
 * func-name: ?LoadAnimation@Model@@QAEHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NPAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@1@Z
 * func-address: 0x100f4f50
 * callers: 0x1010c190
 * callees: 0x1003e700, 0x1007e380, 0x1007e3d0, 0x1007e670, 0x10097220, 0x100e2550, 0x100f1b70, 0x100f2aa0, 0x100f4bf0, 0x100f64f0, 0x1017eaef
 */

int __userpurge Model::LoadAnimation@<eax>(
        Model *this@<ecx>,
        int a2@<ebx>,
        int a3@<edi>,
        char a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        float a11,
        int a12,
        unsigned __int8 a13)
{
  LARGE_INTEGER *v14; // eax
  CRETimer *v15; // eax
  unsigned int v17; // eax
  int v18; // eax
  _DWORD *v19; // esi
  unsigned int v20; // edi
  int v21; // ecx
  int v22; // ebp
  float *v23; // eax
  int v24; // ecx
  float *v25; // ebx
  int v26; // ecx
  float *v27; // ecx
  int v28; // eax
  int v29; // edi
  int v30; // eax
  CRETimer *v31; // eax
  const char *v32; // eax
  int v33; // esi
  double v34; // [esp+8h] [ebp-8Ch]
  int v36; // [esp+24h] [ebp-70h]
  unsigned int v37; // [esp+28h] [ebp-6Ch]
  int v38; // [esp+2Ch] [ebp-68h]
  int v39; // [esp+30h] [ebp-64h]
  int v40[8]; // [esp+34h] [ebp-60h] BYREF
  float *v41; // [esp+54h] [ebp-40h]
  int v42; // [esp+58h] [ebp-3Ch]
  int v43; // [esp+60h] [ebp-34h]
  int v44; // [esp+64h] [ebp-30h]
  float v45; // [esp+68h] [ebp-2Ch]
  int v46; // [esp+90h] [ebp-4h]

  v46 = 0;
  v14 = (LARGE_INTEGER *)REGetGlobalTimer();
  CRETimer::StartMiniTimer(v14);
  if ( !*((_DWORD *)this + 94) )
    Model::InitializeAnimationSystem(this, a2, a3, 0);
  sub_100F64F0(v40);
  v45 = *((float *)this + 13);
  v43 = LOBYTE(a11);
  LOBYTE(v46) = 1;
  v44 = a13;
  v40[6] = a12;
  if ( !FindMedia((int)&a4, (int)"Models", 0, 0) || (v17 = std::string::c_str(&a4), sub_100F4BF0((int **)v40, v17)) )
  {
    v15 = REGetGlobalTimer();
    CRETimer::StopMiniTimer(v15);
    LOBYTE(v46) = 0;
    sub_100F2AA0((int)v40);
    v46 = -1;
    std::string::~string(&a4);
    return -1;
  }
  else
  {
    v18 = *((_DWORD *)this + 96);
    v19 = (_DWORD *)((char *)this + 380);
    if ( v18 )
      v20 = (v19[2] - v18) >> 4;
    else
      v20 = 0;
    LOBYTE(v39) = 0;
    sub_1003E700(v19, v20 + 1, v36, v37, v38, v39);
    v21 = v19[1];
    if ( !v21 || v20 >= (v19[2] - v21) >> 4 )
      invalid_parameter_noinfo();
    v22 = 16 * v20;
    *(_BYTE *)(v19[1] + 16 * v20) = v43 != 0;
    v23 = v41;
    if ( !v41 || !((v42 - (int)v41) >> 3) )
    {
      invalid_parameter_noinfo();
      v23 = v41;
    }
    v24 = v19[1];
    v25 = v23;
    if ( !v24 || v20 >= (v19[2] - v24) >> 4 )
      invalid_parameter_noinfo();
    *(float *)(v19[1] + v22 + 4) = *v25;
    v26 = v19[1];
    if ( !v26 || v20 >= (v19[2] - v26) >> 4 )
      invalid_parameter_noinfo();
    *(float *)(v19[1] + v22 + 8) = -1.0e10;
    v27 = v41;
    if ( !v41 || !((v42 - (int)v41) >> 3) )
    {
      invalid_parameter_noinfo();
      v27 = v41;
    }
    v28 = (*(int (__stdcall **)(_DWORD, _DWORD))(**((_DWORD **)this + 94) + 32))(
            *((_DWORD *)this + 94),
            *((_DWORD *)v27 + 1));
    if ( v28 < 0 )
    {
      v29 = *(_DWORD *)dword_11249F38;
      v30 = sub_1017EAEF(v28);
      (*(void (**)(void *, const char *, ...))(v29 + 4))(
        dword_11249F38,
        " Error: %s, in: m_AnimationController->RegisterAnimationSet(load.animationSets[0].set)",
        v30);
    }
    v31 = REGetGlobalTimer();
    a11 = CRETimer::StopMiniTimer(v31);
    v34 = a11 / 1000.0;
    v32 = (const char *)std::string::c_str(&a4);
    LogPrintf("Anim '%s' load took %f seconds", v32, v34);
    v33 = (*(int (__stdcall **)(_DWORD))(**((_DWORD **)this + 94) + 40))(*((_DWORD *)this + 94)) - 1;
    LOBYTE(v46) = 0;
    sub_100F2AA0((int)v40);
    v46 = -1;
    std::string::~string(&a4);
    return v33;
  }
}
