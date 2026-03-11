/*
 * func-name: sub_101293B0
 * func-address: 0x101293b0
 * callers: 0x1001749a
 * callees: 0x10003f58, 0x1000a097, 0x102c09f0
 */

void __thiscall sub_101293B0(float *this, int a2)
{
  int v3; // eax
  int v4; // eax
  CameraHandler *v5; // eax
  struct Camera *Camera; // eax
  CameraHandler *v7; // eax
  struct Camera *v8; // eax
  int v9; // eax
  int v10; // eax
  unsigned int i; // ebx
  int v12; // ecx
  int v13; // ecx
  int v14; // edi
  float *v15; // ebp
  int v16; // ecx
  int v17; // ecx
  int v18; // ebp
  int v19; // eax
  int v20; // ecx
  int v21; // ebp
  int v22; // eax
  int v23; // [esp+5Ch] [ebp-68h]
  int v24; // [esp+60h] [ebp-64h]
  int v25; // [esp+60h] [ebp-64h]
  int v26; // [esp+60h] [ebp-64h]
  float v27; // [esp+7Ch] [ebp-48h]
  float v28; // [esp+80h] [ebp-44h]
  float v29; // [esp+84h] [ebp-40h]
  float v30; // [esp+84h] [ebp-40h]
  float v31; // [esp+84h] [ebp-40h]
  float v32; // [esp+84h] [ebp-40h]
  float v33; // [esp+88h] [ebp-3Ch]
  float v34; // [esp+88h] [ebp-3Ch]
  float v35; // [esp+8Ch] [ebp-38h]
  float v36; // [esp+8Ch] [ebp-38h]
  float v37; // [esp+90h] [ebp-34h]
  float v38; // [esp+90h] [ebp-34h]
  float v39; // [esp+94h] [ebp-30h] BYREF
  float v40; // [esp+98h] [ebp-2Ch]
  float v41; // [esp+9Ch] [ebp-28h]
  float v42[3]; // [esp+A0h] [ebp-24h] BYREF
  float v43; // [esp+ACh] [ebp-18h] BYREF
  float v44; // [esp+B0h] [ebp-14h]
  float v45; // [esp+B4h] [ebp-10h]
  float v46; // [esp+B8h] [ebp-Ch] BYREF
  float v47; // [esp+BCh] [ebp-8h]
  float v48; // [esp+C0h] [ebp-4h]

  if ( *((_DWORD *)this + 22) )
  {
    v3 = *((_DWORD *)this + 22);
    v28 = (double)*(int *)(v3 + 80) / 400.0;
    v27 = (double)*(int *)(v3 + 84) / 400.0;
    v4 = Canvas::Instance();
    v24 = *((_DWORD *)this + 22);
    v23 = *((_DWORD *)this + 21);
    v39 = *this + 0.0;
    v40 = this[1] + 0.2000000029802322;
    v41 = this[2] + 0.0;
    (*(void (__thiscall **)(int, float *, float, float, int, int, int, int))(*(_DWORD *)v4 + 124))(
      v4,
      &v39,
      COERCE_FLOAT(LODWORD(v28)),
      COERCE_FLOAT(LODWORD(v27)),
      v23,
      v24,
      2,
      2);
    v39 = 0.0;
    v40 = 1.0;
    v41 = 0.0;
    v5 = CameraHandler::Instance();
    Camera = CameraHandler::GetCamera(v5, 0);
    sub_102C09F0(v42, (char *)Camera + 376, &v39);
    v39 = 0.0;
    v40 = -1.0;
    v41 = 0.0;
    v7 = CameraHandler::Instance();
    v8 = CameraHandler::GetCamera(v7, 0);
    sub_102C09F0(&v46, (char *)v8 + 376, &v39);
    if ( *((_DWORD *)this + 24) )
    {
      v9 = Canvas::Instance();
      v25 = *((_DWORD *)this + 24);
      v29 = v27 + v28;
      v39 = v29 * v42[0];
      v40 = v42[1] * v29;
      v41 = v29 * v42[2];
      v33 = *this + 0.0;
      v35 = this[1] + 0.2000000029802322;
      v37 = this[2] + 0.0;
      v43 = v33 + v39;
      v44 = v35 + v40;
      v45 = v37 + v41;
      (*(void (__thiscall **)(int, float *, float, float, int, int, int, int))(*(_DWORD *)v9 + 124))(
        v9,
        &v43,
        COERCE_FLOAT(LODWORD(v27)),
        COERCE_FLOAT(LODWORD(v27)),
        -1,
        v25,
        5,
        6);
    }
    if ( *((_DWORD *)this + 25) )
    {
      v10 = Canvas::Instance();
      v26 = *((_DWORD *)this + 25);
      v30 = v27 + v28;
      v34 = v30 * v46;
      v36 = v47 * v30;
      v38 = v30 * v48;
      v39 = *this + 0.0;
      v40 = this[1] + 0.2000000029802322;
      v41 = this[2] + 0.0;
      v43 = v39 + v34;
      v44 = v40 + v36;
      v45 = v41 + v38;
      (*(void (__thiscall **)(int, float *, float, float, int, int, int, int))(*(_DWORD *)v10 + 124))(
        v10,
        &v43,
        COERCE_FLOAT(LODWORD(v27)),
        COERCE_FLOAT(LODWORD(v27)),
        -1,
        v26,
        5,
        6);
    }
  }
  for ( i = 0; ; ++i )
  {
    v12 = *((_DWORD *)this + 27);
    if ( !v12 || i >= (*((_DWORD *)this + 28) - v12) >> 3 )
      break;
    v13 = *((_DWORD *)this + 27);
    v14 = 8 * i;
    v15 = (float *)(8 * i + v13);
    if ( !v13 || i >= (*((_DWORD *)this + 28) - v13) >> 3 )
      _invalid_parameter_noinfo();
    v31 = 0.5 - *v15 * 0.5;
    *(float *)(*(_DWORD *)(v14 + *((_DWORD *)this + 27) + 4) + 60) = v31;
    v16 = *((_DWORD *)this + 27);
    if ( !v16 || i >= (*((_DWORD *)this + 28) - v16) >> 3 )
      _invalid_parameter_noinfo();
    v17 = *((_DWORD *)this + 27);
    v18 = v14 + v17;
    if ( !v17 || i >= (*((_DWORD *)this + 28) - v17) >> 3 )
      _invalid_parameter_noinfo();
    v32 = *(float *)(*(_DWORD *)(v18 + 4) + 60) + 0.5;
    *(float *)(*(_DWORD *)(v14 + *((_DWORD *)this + 27) + 4) + 68) = v32;
    v19 = Canvas::Instance();
    v20 = *((_DWORD *)this + 27);
    v21 = v19;
    if ( !v20 || i >= (*((_DWORD *)this + 28) - v20) >> 3 )
      _invalid_parameter_noinfo();
    v22 = *((_DWORD *)this + 27);
    v44 = (double)(int)i * 0.03999999910593033;
    v46 = *this + 0.0;
    v47 = this[1] + v44;
    v48 = this[2] + 0.0;
    (*(void (__thiscall **)(int, float *, _DWORD, _DWORD, int, _DWORD, int, int))(*(_DWORD *)v21 + 124))(
      v21,
      &v46,
      0.5,
      0.0099999998,
      -1,
      *(_DWORD *)(v14 + v22 + 4),
      5,
      6);
  }
}
