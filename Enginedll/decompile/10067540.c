/*
 * func-name: ?CylinderWireframe@Canvas@@UAEXAAVVector@@MMK@Z
 * func-address: 0x10067540
 * callers: none
 * callees: 0x1001cb70, 0x101189f0, 0x101a281a, 0x101a2820
 */

void __thiscall Canvas::CylinderWireframe(Canvas *this, struct Vector *a2, float a3, float a4, unsigned int a5)
{
  struct RenderDevice *v6; // eax
  struct RenderDevice *v7; // eax
  struct RenderDevice *v8; // eax
  struct RenderDevice *v9; // eax
  struct RenderDevice *v10; // eax
  struct RenderDevice *v11; // eax
  struct RenderDevice *v12; // eax
  struct RenderDevice *v13; // eax
  struct RenderDevice *v14; // eax
  double v15; // st7
  int v16; // ecx
  float *v17; // eax
  float *v18; // esi
  long double v19; // st7
  double v20; // st7
  double v21; // st6
  int v22; // eax
  double v23; // st4
  int v24; // edx
  double v25; // st6
  void (__thiscall *v26)(Canvas *, _DWORD *, _DWORD *, unsigned int); // edx
  double v27; // st7
  int v28; // eax
  double v29; // st7
  int v30; // ecx
  _DWORD *v31; // eax
  void (__thiscall *v32)(Canvas *, int, _DWORD *, int, _DWORD); // edx
  bool v33; // cc
  float v34; // [esp+4Ch] [ebp-2E4h]
  float v35; // [esp+4Ch] [ebp-2E4h]
  float v36; // [esp+4Ch] [ebp-2E4h]
  float v37; // [esp+4Ch] [ebp-2E4h]
  float v38; // [esp+50h] [ebp-2E0h]
  float v39; // [esp+50h] [ebp-2E0h]
  float v40; // [esp+50h] [ebp-2E0h]
  float v41; // [esp+54h] [ebp-2DCh]
  int v42; // [esp+58h] [ebp-2D8h]
  int v43; // [esp+5Ch] [ebp-2D4h]
  float v44; // [esp+60h] [ebp-2D0h]
  float v45; // [esp+64h] [ebp-2CCh]
  float v46; // [esp+68h] [ebp-2C8h]
  float v47; // [esp+78h] [ebp-2B8h]
  float v48; // [esp+84h] [ebp-2ACh]
  float v49; // [esp+88h] [ebp-2A8h]
  _DWORD v50[3]; // [esp+90h] [ebp-2A0h] BYREF
  _DWORD v51[4]; // [esp+9Ch] [ebp-294h] BYREF
  float v52; // [esp+ACh] [ebp-284h]
  float v53; // [esp+B8h] [ebp-278h]
  int v54; // [esp+D0h] [ebp-260h]
  int v55; // [esp+D4h] [ebp-25Ch]
  int v56[16]; // [esp+D8h] [ebp-258h] BYREF
  _DWORD v57[16]; // [esp+118h] [ebp-218h] BYREF
  _DWORD v58[2]; // [esp+158h] [ebp-1D8h] BYREF
  _DWORD v59[100]; // [esp+160h] [ebp-1D0h] BYREF
  float v60[16]; // [esp+2F0h] [ebp-40h] BYREF

  v6 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD))(*(_DWORD *)v6 + 484))(v6, 0);
  v7 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v7 + 432))(v7, 26, 1);
  v8 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v8 + 432))(v8, 27, 1);
  v9 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v9 + 432))(v9, 176, 1);
  v10 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v10 + 440))(v10, 0, 1, 2);
  v11 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, _DWORD))(*(_DWORD *)v11 + 440))(v11, 0, 2, 0);
  v12 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v12 + 440))(v12, 0, 4, 1);
  v13 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD *))(*(_DWORD *)v13 + 468))(v13, v57);
  v14 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int *))(*(_DWORD *)v14 + 480))(v14, v56);
  sub_1001CB70(v57, v60, (int)v56);
  v15 = 0.0;
  v16 = 16;
  v17 = (float *)v59;
  do
  {
    *(v17 - 2) = 0.0;
    v17 += 6;
    --v16;
    *(v17 - 7) = 0.0;
    *(v17 - 6) = 0.0;
  }
  while ( v16 >= 0 );
  v42 = 0;
  v43 = 0;
  while ( 1 )
  {
    v41 = v15;
    v18 = (float *)v58;
    v19 = v41;
    do
    {
      v34 = cos(v19);
      v38 = v34 * a3;
      v35 = sin(v41);
      v36 = v35 * a3;
      if ( v43 )
      {
        if ( v43 == 1 )
        {
          v53 = -a4;
          v44 = *(float *)a2 + v38;
          v27 = *((float *)a2 + 1);
          *v18 = v44;
          v28 = v54;
          v45 = v27 + v53;
          v29 = *((float *)a2 + 2);
          v18[1] = v45;
          v30 = v55;
          v46 = v29 + v36;
          v18[2] = v46;
          *((_DWORD *)v18 + 3) = a5;
          *((_DWORD *)v18 + 4) = v28;
          *((_DWORD *)v18 + 5) = v30;
        }
      }
      else
      {
        v39 = *(float *)a2 + v38;
        v20 = v39;
        v21 = *((float *)a2 + 1);
        *v18 = v39;
        v22 = v55;
        v40 = v21 + a4;
        v23 = *((float *)a2 + 2);
        v18[1] = v40;
        v37 = v23 + v36;
        v18[2] = v37;
        v24 = v54;
        v47 = v20;
        *((_DWORD *)v18 + 3) = a5;
        *((_DWORD *)v18 + 4) = v24;
        *((_DWORD *)v18 + 5) = v22;
        v52 = -a4;
        *(float *)&v51[2] = v37;
        *(float *)v51 = v47;
        v48 = v20;
        v25 = *((float *)a2 + 1);
        *(float *)&v51[1] = v40;
        *(float *)v50 = v48;
        v49 = v25 + v52;
        *(float *)&v50[1] = v49;
        v26 = *(void (__thiscall **)(Canvas *, _DWORD *, _DWORD *, unsigned int))(*(_DWORD *)this + 96);
        *(float *)&v50[2] = v37;
        v26(this, v51, v50, a5);
      }
      ++v42;
      v18 += 6;
      v41 = v41 + 0.4000000059604645;
      v19 = v41;
    }
    while ( v41 <= 6.283185482025146 );
    v58[6 * v42] = v58[0];
    v31 = &v58[6 * v42];
    v31[1] = v58[1];
    v31[2] = v59[0];
    v31[3] = v59[1];
    v31[4] = v59[2];
    v32 = *(void (__thiscall **)(Canvas *, int, _DWORD *, int, _DWORD))(*(_DWORD *)this + 84);
    v31[5] = v59[3];
    v32(this, 17, v58, 24, 0);
    v33 = v43 + 1 < 2;
    v42 = 0;
    ++v43;
    if ( !v33 )
      break;
    v15 = 0.0;
  }
}
