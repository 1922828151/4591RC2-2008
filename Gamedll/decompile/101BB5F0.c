/*
 * func-name: ?CreateNxVehicle@WheelVehicle@GameClient@@UAEPAVNxRaycastVehicle@2@XZ_0
 * func-address: 0x101bb5f0
 * callers: 0x100071df
 * callees: 0x10003954, 0x10006b86, 0x10015e3d, 0x102c9d50, 0x102c9d98
 */

struct GameClient::NxRaycastVehicle *__thiscall GameClient::WheelVehicle::CreateNxVehicle(
        GameClient::WheelVehicle *this)
{
  _DWORD *v2; // eax
  int v4; // ecx
  int v5; // esi
  int v6; // edx
  int v7; // eax
  int v8; // eax
  void (__thiscall *v9)(char *, _BYTE *); // edx
  int *v10; // eax
  int *v11; // eax
  int v12; // esi
  int v13; // ecx
  int v14; // esi
  float *v15; // eax
  unsigned int v16; // ebp
  int v17; // esi
  int v18; // ecx
  int v19; // ecx
  int v20; // ebx
  int v21; // esi
  int v22; // eax
  int v23; // ebx
  int v24; // eax
  int v25; // ecx
  int v26; // edi
  void *v27; // [esp+54h] [ebp-11Ch]
  void *v28; // [esp+54h] [ebp-11Ch]
  int v29; // [esp+54h] [ebp-11Ch]
  int v30; // [esp+6Ch] [ebp-104h]
  int v31; // [esp+70h] [ebp-100h] BYREF
  void *v32; // [esp+74h] [ebp-FCh]
  float v33; // [esp+78h] [ebp-F8h]
  int v34; // [esp+7Ch] [ebp-F4h]
  int v35; // [esp+80h] [ebp-F0h] BYREF
  void *v36; // [esp+84h] [ebp-ECh]
  int v37; // [esp+88h] [ebp-E8h]
  int v38; // [esp+8Ch] [ebp-E4h]
  float v39; // [esp+90h] [ebp-E0h] BYREF
  float v40; // [esp+94h] [ebp-DCh]
  float v41; // [esp+98h] [ebp-D8h]
  int v42; // [esp+9Ch] [ebp-D4h]
  int v43; // [esp+A0h] [ebp-D0h]
  float v44; // [esp+A4h] [ebp-CCh]
  float v45; // [esp+A8h] [ebp-C8h]
  float v46; // [esp+ACh] [ebp-C4h]
  float v47; // [esp+B0h] [ebp-C0h]
  float v48; // [esp+B4h] [ebp-BCh]
  float v49; // [esp+B8h] [ebp-B8h]
  float v50; // [esp+BCh] [ebp-B4h]
  float v51; // [esp+C0h] [ebp-B0h]
  float v52; // [esp+C4h] [ebp-ACh]
  float v53; // [esp+C8h] [ebp-A8h]
  _BYTE v54[12]; // [esp+CCh] [ebp-A4h] BYREF
  _BYTE v55[12]; // [esp+D8h] [ebp-98h] BYREF
  _BYTE v56[48]; // [esp+E4h] [ebp-8Ch] BYREF
  int v57; // [esp+114h] [ebp-5Ch]
  int v58; // [esp+118h] [ebp-58h]
  int v59; // [esp+11Ch] [ebp-54h]
  _BYTE v60[48]; // [esp+124h] [ebp-4Ch] BYREF
  int v61; // [esp+154h] [ebp-1Ch]
  int v62; // [esp+158h] [ebp-18h]
  int v63; // [esp+15Ch] [ebp-14h]
  int v64; // [esp+16Ch] [ebp-4h]

  v2 = (_DWORD *)*((_DWORD *)this + 135);
  if ( !v2 )
    return 0;
  v4 = v2[290];
  v5 = v4 ? (v2[291] - v4) >> 2 : 0;
  v6 = v2[302];
  v7 = v6 ? (v2[303] - v6) / 12 : 0;
  if ( v5 != v7 )
    return 0;
  v64 = 0;
  if ( operator new(0xD0u) )
    v8 = sub_10003954();
  else
    v8 = 0;
  *((_DWORD *)this + 134) = v8;
  v9 = *(void (__thiscall **)(char *, _BYTE *))(*((_DWORD *)this + 37) + 12);
  v64 = -1;
  v9((char *)this + 148, v60);
  v10 = (int *)(*(int (__thiscall **)(char *, _BYTE *))(*((_DWORD *)this + 37) + 8))((char *)this + 148, v54);
  v61 = *v10;
  v62 = v10[1];
  v63 = v10[2];
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v27 = (void *)(*((_DWORD *)this + 135) + 1072);
  v64 = 1;
  sub_10015E3D(&v35, v27);
  v32 = 0;
  v33 = 0.0;
  v34 = 0;
  v28 = (void *)(*((_DWORD *)this + 135) + 1084);
  LOBYTE(v64) = 2;
  sub_10015E3D(&v31, v28);
  (*(void (__thiscall **)(char *, _BYTE *))(*((_DWORD *)this + 37) + 12))((char *)this + 148, v56);
  v11 = (int *)(*(int (__thiscall **)(char *, _BYTE *))(*((_DWORD *)this + 37) + 8))((char *)this + 148, v55);
  v12 = *((_DWORD *)this + 127);
  v57 = *v11;
  v13 = *((_DWORD *)this + 134);
  v58 = v11[1];
  v29 = v12;
  v14 = *((_DWORD *)this + 125);
  v59 = v11[2];
  v15 = (float *)*((_DWORD *)this + 135);
  (*(void (__thiscall **)(int, _BYTE *, _DWORD, int *, int *, float, float, float, float, _DWORD, float, float *, float, float, int, int))(*(_DWORD *)v13 + 20))(
    v13,
    v56,
    *((_DWORD *)this + 3),
    &v35,
    &v31,
    v15[274],
    v15[275],
    v15[276],
    v15[277],
    0.0,
    v15[278],
    v15 + 279,
    v15[282],
    v15[283],
    v14,
    v29);
  v39 = 0.0;
  v16 = 0;
  v40 = 0.0;
  v30 = 0;
  v41 = 0.0;
  while ( 1 )
  {
    v17 = *((_DWORD *)this + 135);
    v18 = *(_DWORD *)(v17 + 1160);
    if ( !v18 || v16 >= (*(_DWORD *)(v17 + 1164) - v18) >> 2 )
      break;
    v42 = 0;
    v43 = 0;
    v19 = *(_DWORD *)(v17 + 1160);
    if ( !v19 || v16 >= (*(_DWORD *)(v17 + 1164) - v19) >> 2 )
      _invalid_parameter_noinfo();
    v20 = *((_DWORD *)this + 135);
    v21 = *(_DWORD *)(*(_DWORD *)(v17 + 1160) + 4 * v16);
    v22 = *(_DWORD *)(v20 + 1208);
    v23 = v20 + 1204;
    if ( !v22 || v16 >= (*(_DWORD *)(v23 + 8) - v22) / 12 )
      _invalid_parameter_noinfo();
    v24 = *(_DWORD *)(v23 + 4);
    v39 = *(float *)(v24 + v30);
    v40 = *(float *)(v24 + v30 + 4);
    v41 = *(float *)(v30 + v24 + 8);
    v44 = *(float *)(v21 + 108);
    v25 = *((_DWORD *)this + 134);
    v45 = *(float *)(v21 + 112);
    v46 = *(float *)(v21 + 116);
    v47 = *(float *)(v21 + 120);
    v48 = *(float *)(v21 + 124);
    v49 = *(float *)(v21 + 128);
    v50 = *(float *)(v21 + 132);
    v51 = *(float *)(v21 + 136);
    v52 = *(float *)(v21 + 140);
    v53 = *(float *)(v21 + 144);
    (*(void (__stdcall **)(_DWORD, _DWORD, float *))(*(_DWORD *)v25 + 24))(
      *(float *)(v21 + 148),
      *(unsigned __int8 *)(v21 + 152),
      &v39);
    ++v16;
    v30 += 12;
  }
  *((_DWORD *)this + 114) = *((_DWORD *)this + 134);
  GameClient::WheelVehicle::BindWheelFrames(this);
  v26 = *((_DWORD *)this + 134);
  if ( v32 )
    operator delete(v32);
  v32 = 0;
  v33 = 0.0;
  v34 = 0;
  if ( v36 )
    operator delete(v36);
  return (struct GameClient::NxRaycastVehicle *)v26;
}
