/*
 * func-name: ?TransitionToAnimation@Model@@QAEMHMMMM@Z
 * func-address: 0x100f2260
 * callers: none
 * callees: 0x100956d0
 */

double __userpurge Model::TransitionToAnimation@<st0>(
        Model *this@<ecx>,
        int a2@<edi>,
        unsigned int a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8)
{
  int v9; // eax
  int v10; // edi
  const char *v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // ecx
  int v15; // ebx
  int v16; // ebp
  unsigned int v17; // ebp
  int v18; // ecx
  int *v19; // eax
  int v20; // ebp
  unsigned __int64 v21; // st7
  int v22; // ebp
  int v23; // ecx
  int v24; // ecx
  unsigned int v25; // edi
  double v27; // [esp+68h] [ebp-64h]
  double v28; // [esp+6Ch] [ebp-60h]
  int v29; // [esp+80h] [ebp-4Ch] BYREF
  int v30; // [esp+84h] [ebp-48h]
  float v31; // [esp+88h] [ebp-44h] BYREF
  int v32; // [esp+8Ch] [ebp-40h]
  _DWORD v33[4]; // [esp+90h] [ebp-3Ch] BYREF
  double v34; // [esp+A0h] [ebp-2Ch]
  int v35; // [esp+A8h] [ebp-24h]
  _BYTE v36[4]; // [esp+B0h] [ebp-1Ch] BYREF
  float v37; // [esp+B4h] [ebp-18h]

  v9 = *((_DWORD *)this + 94);
  if ( !v9 || a3 == -1 )
    return 0.0;
  v29 = 0;
  v30 = 0;
  (*(void (__stdcall **)(int, unsigned int, int *, int))(*(_DWORD *)v9 + 44))(v9, a3, &v29, a2);
  v10 = 0;
  if ( *((int *)this + 112) <= 0 )
    goto LABEL_9;
  while ( 1 )
  {
    (*(void (__stdcall **)(_DWORD, int, float *))(**((_DWORD **)this + 94) + 68))(*((_DWORD *)this + 94), v10, &v31);
    if ( v30 )
    {
      if ( v30 == LODWORD(v31) )
        break;
    }
    if ( ++v10 >= *((_DWORD *)this + 112) )
      goto LABEL_9;
  }
  (*(void (__stdcall **)(_DWORD, int, _BYTE *))(**((_DWORD **)this + 94) + 96))(*((_DWORD *)this + 94), v10, v36);
  if ( v10 == -1 )
  {
LABEL_9:
    v10 = 0;
    if ( *((int *)this + 112) <= 0 )
      goto LABEL_14;
    while ( 1 )
    {
      (*(void (__stdcall **)(_DWORD, int, _BYTE *))(**((_DWORD **)this + 94) + 96))(*((_DWORD *)this + 94), v10, v36);
      if ( 0.0 == v37 )
        break;
      if ( ++v10 >= *((_DWORD *)this + 112) )
        goto LABEL_14;
    }
    if ( v10 == -1 )
    {
LABEL_14:
      v10 = *((_DWORD *)this + 100) + 1;
      if ( v10 >= *((_DWORD *)this + 112) )
        v10 = 0;
    }
    if ( (*(int (__stdcall **)(_DWORD, int, int))(**((_DWORD **)this + 94) + 64))(*((_DWORD *)this + 94), v10, v30) )
    {
      v11 = (const char *)std::string::c_str((char *)this + 320);
      Error("m_AnimationController->SetTrackAnimationSet() Model: %s, Track: %d", v11, v10);
    }
  }
  *(float *)&v33[1] = 0.5;
  v33[0] = 1;
  v35 = 1;
  v12 = *((_DWORD *)this + 94);
  *(float *)&v33[2] = a8;
  v34 = a7;
  (*(void (__stdcall **)(int, int))(*(_DWORD *)v12 + 132))(v12, v10);
  (*(void (__stdcall **)(_DWORD, int, _DWORD *))(**((_DWORD **)this + 94) + 92))(*((_DWORD *)this + 94), v10, v33);
  v13 = *((_DWORD *)this + 96);
  if ( !v13 || a3 >= (*((_DWORD *)this + 97) - v13) >> 4 )
    invalid_parameter_noinfo();
  v14 = *((_DWORD *)this + 96);
  v15 = 16 * a3 + v14;
  v32 = 16 * a3;
  if ( !v14 || a3 >= (*((_DWORD *)this + 97) - v14) >> 4 )
    invalid_parameter_noinfo();
  v16 = v32 + *((_DWORD *)this + 96);
  *(float *)(v16 + 8) = ((double (__stdcall *)(_DWORD))*(_DWORD *)(**((_DWORD **)this + 94) + 60))(*((_DWORD *)this + 94))
                      + (*(float *)(v15 + 4) - a7) / a8;
  v17 = *((_DWORD *)this + 99);
  if ( v17 == -1 )
    goto LABEL_33;
  if ( LODWORD(a4) != v17 )
    goto LABEL_30;
  v18 = *((_DWORD *)this + 96);
  if ( !v18 || v17 >= (*((_DWORD *)this + 97) - v18) >> 4 )
    invalid_parameter_noinfo();
  if ( !*(_BYTE *)(*((_DWORD *)this + 96) + 16 * v17) )
  {
LABEL_33:
    *(double *)&v21 = 0.0;
  }
  else
  {
LABEL_30:
    if ( -1.0 == a6 )
    {
      v19 = (int *)*((_DWORD *)this + 94);
      v20 = *v19;
      v28 = ((double (__stdcall *)(int *, _DWORD, _DWORD, int))*(_DWORD *)(*v19 + 60))(
              v19,
              COERCE_UNSIGNED_INT64(a5),
              HIDWORD(COERCE_UNSIGNED_INT64(a5)),
              1);
      (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(v20 + 112))(
        *((_DWORD *)this + 94),
        *((_DWORD *)this + 100),
        0.0,
        LODWORD(v28),
        HIDWORD(v28));
    }
    *(double *)&v21 = a5;
  }
  v22 = **((_DWORD **)this + 94);
  v27 = ((double (__stdcall *)(_DWORD, _DWORD, _DWORD))*(_DWORD *)(v22 + 60))(*((_DWORD *)this + 94), v21, HIDWORD(v21));
  (*(void (__stdcall **)(_DWORD, int, float, _DWORD, _DWORD))(v22 + 112))(
    *((_DWORD *)this + 94),
    v10,
    COERCE_FLOAT(LODWORD(a8)),
    LODWORD(v27),
    HIDWORD(v27));
  *((float *)this + 99) = a4;
  *((_DWORD *)this + 100) = v10;
  v23 = *((_DWORD *)this + 96);
  if ( !v23 || LODWORD(a4) >= (*((_DWORD *)this + 97) - v23) >> 4 )
    invalid_parameter_noinfo();
  *(_BYTE *)(LODWORD(v31) + *((_DWORD *)this + 96) + 12) = 1;
  v24 = *((_DWORD *)this + 96);
  v25 = *((_DWORD *)this + 99);
  if ( !v24 || v25 >= (*((_DWORD *)this + 97) - v24) >> 4 )
    invalid_parameter_noinfo();
  return *(float *)(16 * v25 + *((_DWORD *)this + 96) + 4);
}
