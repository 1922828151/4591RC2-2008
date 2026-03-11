/*
 * func-name: ?SphereWireframe@Canvas@@UAEXAAVVector@@MK@Z
 * func-address: 0x10067240
 * callers: none
 * callees: 0x1001cb70, 0x101189f0, 0x101a281a, 0x101a2820
 */

void __thiscall Canvas::SphereWireframe(Canvas *this, struct Vector *a2, float a3, unsigned int a4)
{
  struct RenderDevice *v4; // eax
  int v5; // ebp
  struct RenderDevice *v6; // eax
  struct RenderDevice *v7; // eax
  struct RenderDevice *v8; // eax
  struct RenderDevice *v9; // eax
  struct RenderDevice *v10; // eax
  struct RenderDevice *v11; // eax
  struct RenderDevice *v12; // eax
  struct RenderDevice *v13; // eax
  double v14; // st7
  int v15; // ecx
  float *v16; // eax
  float *v17; // esi
  long double v18; // st7
  double v19; // st7
  double v20; // st7
  double v21; // st7
  double v22; // st7
  double v23; // st7
  double v24; // st7
  double v25; // st7
  double v26; // st7
  _DWORD *v27; // eax
  float v28; // [esp+4Ch] [ebp-2A8h]
  float v29; // [esp+4Ch] [ebp-2A8h]
  float v30; // [esp+4Ch] [ebp-2A8h]
  float v31; // [esp+50h] [ebp-2A4h]
  float v32; // [esp+54h] [ebp-2A0h]
  int v33; // [esp+58h] [ebp-29Ch]
  float v34; // [esp+5Ch] [ebp-298h]
  float v35; // [esp+60h] [ebp-294h]
  float v36; // [esp+64h] [ebp-290h]
  float v38; // [esp+6Ch] [ebp-288h]
  float v39; // [esp+70h] [ebp-284h]
  float v40; // [esp+74h] [ebp-280h]
  float v41; // [esp+78h] [ebp-27Ch]
  float v42; // [esp+7Ch] [ebp-278h]
  float v43; // [esp+80h] [ebp-274h]
  int v44; // [esp+94h] [ebp-260h]
  int v45; // [esp+98h] [ebp-25Ch]
  _BYTE v46[64]; // [esp+9Ch] [ebp-258h] BYREF
  int v47[16]; // [esp+DCh] [ebp-218h] BYREF
  _DWORD v48[2]; // [esp+11Ch] [ebp-1D8h] BYREF
  _DWORD v49[100]; // [esp+124h] [ebp-1D0h] BYREF
  float v50[16]; // [esp+2B4h] [ebp-40h] BYREF

  v4 = RenderDevice::Instance();
  v5 = 0;
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD))(*(_DWORD *)v4 + 484))(v4, 0);
  v6 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v6 + 432))(v6, 26, 1);
  v7 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v7 + 432))(v7, 27, 1);
  v8 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v8 + 432))(v8, 176, 1);
  v9 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v9 + 440))(v9, 0, 1, 2);
  v10 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, _DWORD))(*(_DWORD *)v10 + 440))(v10, 0, 2, 0);
  v11 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v11 + 440))(v11, 0, 4, 1);
  v12 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _BYTE *))(*(_DWORD *)v12 + 468))(v12, v46);
  v13 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int *))(*(_DWORD *)v13 + 480))(v13, v47);
  sub_1001CB70(v46, v50, (int)v47);
  v14 = 0.0;
  v15 = 16;
  v16 = (float *)v49;
  do
  {
    *(v16 - 2) = 0.0;
    v16 += 6;
    --v15;
    *(v16 - 7) = 0.0;
    *(v16 - 6) = 0.0;
  }
  while ( v15 >= 0 );
  v33 = 0;
  while ( 1 )
  {
    v31 = v14;
    v17 = (float *)v48;
    v18 = v31;
    do
    {
      v28 = cos(v18);
      v32 = v28 * a3;
      v29 = sin(v31);
      v30 = v29 * a3;
      v19 = *(float *)a2;
      if ( v33 )
      {
        v22 = v19 + v32;
        if ( v33 == 1 )
        {
          v34 = v22;
          v23 = *((float *)a2 + 1);
          *v17 = v34;
          v35 = v23 + 0.0;
          v24 = *((float *)a2 + 2);
          v17[1] = v35;
          v36 = v24 + v30;
          v17[2] = v36;
        }
        else
        {
          v41 = v22;
          v25 = *((float *)a2 + 1);
          *v17 = v41;
          v42 = v25 + v30;
          v26 = *((float *)a2 + 2);
          v17[1] = v42;
          v43 = v26 + 0.0;
          v17[2] = v43;
        }
        *((_DWORD *)v17 + 3) = a4;
        *((_DWORD *)v17 + 4) = v44;
        *((_DWORD *)v17 + 5) = v45;
      }
      else
      {
        v38 = v19 + 0.0;
        v20 = *((float *)a2 + 1);
        *v17 = v38;
        v39 = v20 + v32;
        v21 = *((float *)a2 + 2);
        v17[1] = v39;
        v40 = v21 + v30;
        v17[2] = v40;
        *((_DWORD *)v17 + 3) = a4;
        *((_DWORD *)v17 + 4) = v44;
        *((_DWORD *)v17 + 5) = v45;
      }
      ++v5;
      v17 += 6;
      v31 = v31 + 0.4000000059604645;
      v18 = v31;
    }
    while ( v31 <= 6.283185482025146 );
    v48[6 * v5] = v48[0];
    v27 = &v48[6 * v5];
    v27[1] = v48[1];
    v27[2] = v49[0];
    v27[3] = v49[1];
    v27[4] = v49[2];
    v27[5] = v49[3];
    (*(void (__thiscall **)(Canvas *, int, _DWORD *, int, _DWORD))(*(_DWORD *)this + 84))(this, 17, v48, 24, 0);
    v5 = 0;
    if ( ++v33 >= 3 )
      break;
    v14 = 0.0;
  }
}
