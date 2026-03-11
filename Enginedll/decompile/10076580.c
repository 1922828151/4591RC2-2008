/*
 * func-name: ?Tick@ClothSimulator@@QAEXPAVCamera@@@Z
 * func-address: 0x10076580
 * callers: none
 * callees: 0x10076ef0, 0x101189f0, 0x10134e60, 0x10135320, 0x101a2516
 */

void __thiscall ClothSimulator::Tick(ClothSimulator *this, struct Camera *a2)
{
  int v2; // eax
  int v4; // ecx
  unsigned int v5; // esi
  int v6; // ecx
  double v7; // st7
  int *v8; // edi
  unsigned int j; // ebp
  int v10; // esi
  int v11; // ecx
  int v12; // edi
  unsigned int v13; // esi
  int v14; // ecx
  float *v15; // ecx
  int v16; // edx
  float *v17; // eax
  int v18; // ecx
  int v19; // ebp
  int v20; // ecx
  int v21; // ebp
  float *v22; // eax
  double v23; // st5
  float v24; // edx
  double v25; // st7
  float *v26; // eax
  double v27; // st7
  struct Camera *v28; // edx
  int v29; // ecx
  int v30; // ebp
  int v31; // eax
  char *v32; // edx
  int v33; // eax
  struct RenderDevice *v34; // eax
  struct RenderDevice *v35; // eax
  int *v36; // [esp+20h] [ebp-50h]
  unsigned int v37; // [esp+24h] [ebp-4Ch]
  char *v38; // [esp+24h] [ebp-4Ch]
  unsigned int i; // [esp+28h] [ebp-48h]
  int v40; // [esp+2Ch] [ebp-44h]
  int v41; // [esp+30h] [ebp-40h] BYREF
  float v42; // [esp+34h] [ebp-3Ch]
  float v43; // [esp+38h] [ebp-38h]
  float v44; // [esp+3Ch] [ebp-34h]
  float v45; // [esp+40h] [ebp-30h]
  float v46; // [esp+44h] [ebp-2Ch]
  float v47; // [esp+48h] [ebp-28h]
  float v48; // [esp+4Ch] [ebp-24h]
  float v49; // [esp+50h] [ebp-20h]
  float v50; // [esp+54h] [ebp-1Ch]
  float v51; // [esp+58h] [ebp-18h]
  float v52; // [esp+5Ch] [ebp-14h]
  float v53; // [esp+60h] [ebp-10h]
  float v54; // [esp+64h] [ebp-Ch]
  float v55; // [esp+68h] [ebp-8h]
  float v56; // [esp+6Ch] [ebp-4h]
  float v57; // [esp+74h] [ebp+4h]
  float v58; // [esp+74h] [ebp+4h]
  float v59; // [esp+74h] [ebp+4h]
  float v60; // [esp+74h] [ebp+4h]
  struct Camera *v61; // [esp+74h] [ebp+4h]

  v2 = dword_10284F14;
  *(_DWORD *)dword_10284F14 = *((_DWORD *)a2 + 88);
  *(_DWORD *)(v2 + 4) = *((_DWORD *)a2 + 89);
  v4 = *((_DWORD *)a2 + 90);
  *(float *)(v2 + 12) = 2.0;
  v5 = 0;
  *(_DWORD *)(v2 + 8) = v4;
  for ( i = 0; ; v5 = i )
  {
    v6 = *((_DWORD *)this + 5);
    if ( !v6 || v5 >= (*((_DWORD *)this + 6) - v6) >> 2 )
      break;
    v7 = GDeltaTime;
    v8 = *(int **)(*((_DWORD *)this + 5) + 4 * v5);
    v36 = v8;
    if ( GDeltaTime >= 0.01250000018626451 )
      v7 = 0.0125;
    v57 = v7;
    sub_10134E60(v57, 0, 0);
    for ( j = 0; ; ++j )
    {
      v10 = *((_DWORD *)this + 8);
      v11 = *(_DWORD *)(v10 + 16);
      v37 = j;
      if ( !v11 || j >= (*(_DWORD *)(v10 + 20) - v11) >> 2 )
        break;
      v12 = *(_DWORD *)(*(_DWORD *)(v10 + 16) + 4 * j);
      v13 = 0;
      if ( std::vector<Model *>::size(this) )
      {
        do
        {
          v14 = *((_DWORD *)this + 1);
          if ( !v14 || v13 >= (*((_DWORD *)this + 2) - v14) >> 2 )
            invalid_parameter_noinfo();
          v15 = *(float **)v12;
          v16 = *((_DWORD *)this + 1);
          v17 = *(float **)(v16 + 4 * v13);
          v45 = **(float **)v12 - *v17;
          v46 = v15[1] - v17[1];
          v47 = v15[2] - v17[2];
          v58 = v46 * v46 + v45 * v45 + v47 * v47;
          if ( !v16 || v13 >= (*((_DWORD *)this + 2) - v16) >> 2 )
            invalid_parameter_noinfo();
          v18 = *((_DWORD *)this + 1);
          v19 = v18 + 4 * v13;
          if ( !v18 || v13 >= (*((_DWORD *)this + 2) - v18) >> 2 )
            invalid_parameter_noinfo();
          v20 = *((_DWORD *)this + 1);
          if ( *(float *)(*(_DWORD *)(v20 + 4 * v13) + 12) * *(float *)(*(_DWORD *)v19 + 12) > v58 )
          {
            if ( !v20 || v13 >= (*((_DWORD *)this + 2) - v20) >> 2 )
              invalid_parameter_noinfo();
            v21 = *((_DWORD *)this + 1);
            v44 = v47;
            v42 = v45;
            v43 = v46;
            if ( v58 >= 0.0000000099999999 )
            {
              v59 = sqrt(v58);
              v60 = 1.0 / v59;
              v42 = v60 * v45;
              v43 = v43 * v60;
              v44 = v60 * v44;
            }
            if ( !v21 || v13 >= (*((_DWORD *)this + 2) - v21) >> 2 )
              invalid_parameter_noinfo();
            v22 = *(float **)(v21 + 4 * v13);
            v23 = *(float *)(*(_DWORD *)(*((_DWORD *)this + 1) + 4 * v13) + 12);
            v48 = v42 * v23;
            v49 = v43 * v23;
            v50 = v23 * v44;
            v51 = v48 + *v22;
            v52 = v22[1] + v49;
            v24 = v52;
            v25 = v22[2];
            v26 = *(float **)v12;
            v27 = v25 + v50;
            *v26 = v51;
            v26[1] = v24;
            v53 = v27;
            v26[2] = v53;
            v54 = 0.0;
            v55 = 0.0;
            v56 = 0.0;
            *(float *)(v12 + 8) = 0.0;
            *(float *)(v12 + 12) = 0.0;
            *(float *)(v12 + 16) = 0.0;
          }
          ++v13;
        }
        while ( v13 < std::vector<Model *>::size(this) );
        j = v37;
      }
      v8 = v36;
    }
    sub_10135320(v10);
    (*(void (__stdcall **)(int, int, int *))(*(_DWORD *)v8[3] + 60))(v8[3], 0x2000, &v41);
    v28 = 0;
    v61 = 0;
    v40 = 0;
    if ( v8[1] > 0 )
    {
      v29 = *v8;
      v38 = (char *)(v8 + 4);
      do
      {
        v30 = 0;
        if ( v29 > 0 )
        {
          v31 = 7 * (_DWORD)v28;
          v32 = v38;
          v33 = 8 * v31;
          do
          {
            v61 = (struct Camera *)((char *)v61 + 1);
            qmemcpy((void *)(v33 + v41), v32, 0x38u);
            v29 = *v36;
            ++v30;
            v33 += 56;
            v32 += 56;
          }
          while ( v30 < *v36 );
          v28 = v61;
          v8 = v36;
        }
        v38 += 1400;
        ++v40;
      }
      while ( v40 < v8[1] );
    }
    (*(void (__stdcall **)(int))(*(_DWORD *)v8[3] + 64))(v8[3]);
    v34 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v34 + 432))(v34, 22, 1);
    (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v8[3] + 12))(v8[3], 0);
    v35 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v35 + 432))(v35, 22, 3);
    ++i;
  }
}
