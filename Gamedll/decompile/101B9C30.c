/*
 * func-name: ?CreateNxVehicle@SuspendVehicle@GameClient@@UAEPAVNxRaycastVehicle@2@XZ_0
 * func-address: 0x101b9c30
 * callers: 0x1000bd89
 * callees: 0x10004ef3, 0x100151b3, 0x10015e3d, 0x102c9d50, 0x102c9d98
 */

struct GameClient::NxRaycastVehicle *__thiscall GameClient::SuspendVehicle::CreateNxVehicle(
        GameClient::SuspendVehicle *this)
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
  _DWORD *v17; // esi
  int v18; // ecx
  int v19; // ecx
  int v20; // ebx
  float *v21; // esi
  int v22; // eax
  int v23; // ebx
  int v24; // eax
  int v25; // ecx
  int v26; // esi
  int v27; // ecx
  unsigned int v28; // eax
  int v29; // edi
  void *v30; // [esp+48h] [ebp-11Ch]
  void *v31; // [esp+48h] [ebp-11Ch]
  int v32; // [esp+48h] [ebp-11Ch]
  int v33; // [esp+60h] [ebp-104h]
  int v34; // [esp+64h] [ebp-100h] BYREF
  void *v35; // [esp+68h] [ebp-FCh]
  int v36; // [esp+6Ch] [ebp-F8h]
  int v37; // [esp+70h] [ebp-F4h]
  int v38; // [esp+74h] [ebp-F0h] BYREF
  void *v39; // [esp+78h] [ebp-ECh]
  int v40; // [esp+7Ch] [ebp-E8h]
  int v41; // [esp+80h] [ebp-E4h]
  float v42; // [esp+84h] [ebp-E0h] BYREF
  float v43; // [esp+88h] [ebp-DCh]
  float v44; // [esp+8Ch] [ebp-D8h]
  int v45; // [esp+90h] [ebp-D4h]
  int v46; // [esp+94h] [ebp-D0h]
  float v47; // [esp+98h] [ebp-CCh]
  float v48; // [esp+9Ch] [ebp-C8h]
  float v49; // [esp+A0h] [ebp-C4h]
  float v50; // [esp+A4h] [ebp-C0h]
  float v51; // [esp+A8h] [ebp-BCh]
  float v52; // [esp+ACh] [ebp-B8h]
  float v53; // [esp+B0h] [ebp-B4h]
  float v54; // [esp+B4h] [ebp-B0h]
  float v55; // [esp+B8h] [ebp-ACh]
  float v56; // [esp+BCh] [ebp-A8h]
  _BYTE v57[12]; // [esp+C0h] [ebp-A4h] BYREF
  _BYTE v58[12]; // [esp+CCh] [ebp-98h] BYREF
  _BYTE v59[48]; // [esp+D8h] [ebp-8Ch] BYREF
  int v60; // [esp+108h] [ebp-5Ch]
  int v61; // [esp+10Ch] [ebp-58h]
  int v62; // [esp+110h] [ebp-54h]
  _BYTE v63[48]; // [esp+118h] [ebp-4Ch] BYREF
  int v64; // [esp+148h] [ebp-1Ch]
  int v65; // [esp+14Ch] [ebp-18h]
  int v66; // [esp+150h] [ebp-14h]
  int v67; // [esp+160h] [ebp-4h]

  v2 = (_DWORD *)*((_DWORD *)this + 135);
  if ( !v2 )
    return 0;
  v4 = v2[290];
  v5 = v4 ? (v2[291] - v4) >> 2 : 0;
  v6 = v2[302];
  v7 = v6 ? (v2[303] - v6) / 12 : 0;
  if ( v5 != v7 )
    return 0;
  v67 = 0;
  if ( operator new(0xE0u) )
    v8 = sub_100151B3();
  else
    v8 = 0;
  *((_DWORD *)this + 134) = v8;
  v9 = *(void (__thiscall **)(char *, _BYTE *))(*((_DWORD *)this + 37) + 12);
  v67 = -1;
  v9((char *)this + 148, v63);
  v10 = (int *)(*(int (__thiscall **)(char *, _BYTE *))(*((_DWORD *)this + 37) + 8))((char *)this + 148, v57);
  v64 = *v10;
  v65 = v10[1];
  v66 = v10[2];
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v30 = (void *)(*((_DWORD *)this + 135) + 1072);
  v67 = 1;
  sub_10015E3D(&v38, v30);
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v31 = (void *)(*((_DWORD *)this + 135) + 1084);
  LOBYTE(v67) = 2;
  sub_10015E3D(&v34, v31);
  (*(void (__thiscall **)(char *, _BYTE *))(*((_DWORD *)this + 37) + 12))((char *)this + 148, v59);
  v11 = (int *)(*(int (__thiscall **)(char *, _BYTE *))(*((_DWORD *)this + 37) + 8))((char *)this + 148, v58);
  v12 = *((_DWORD *)this + 127);
  v60 = *v11;
  v13 = *((_DWORD *)this + 134);
  v61 = v11[1];
  v32 = v12;
  v14 = *((_DWORD *)this + 125);
  v62 = v11[2];
  v15 = (float *)*((_DWORD *)this + 135);
  (*(void (__thiscall **)(int, _BYTE *, _DWORD, int *, int *, float, float, float, float, float, float, float, float, _DWORD, float, float *, float, float, int, int))(*(_DWORD *)v13 + 20))(
    v13,
    v59,
    *((_DWORD *)this + 3),
    &v38,
    &v34,
    v15[274],
    v15[275],
    v15[276],
    v15[277],
    v15[306],
    v15[307],
    v15[305],
    v15[308],
    0.0,
    v15[278],
    v15 + 279,
    v15[282],
    v15[283],
    v14,
    v32);
  v42 = 0.0;
  v16 = 0;
  v43 = 0.0;
  v33 = 0;
  v44 = 0.0;
  while ( 1 )
  {
    v17 = (_DWORD *)*((_DWORD *)this + 135);
    v18 = v17[290];
    if ( !v18 || v16 >= (v17[291] - v18) >> 2 )
      break;
    v45 = 0;
    v46 = 0;
    v19 = v17[290];
    if ( !v19 || v16 >= (v17[291] - v19) >> 2 )
      _invalid_parameter_noinfo();
    v20 = *((_DWORD *)this + 135);
    v21 = *(float **)(v17[290] + 4 * v16);
    v22 = *(_DWORD *)(v20 + 1208);
    v23 = v20 + 1204;
    if ( !v22 || v16 >= (*(_DWORD *)(v23 + 8) - v22) / 12 )
      _invalid_parameter_noinfo();
    v24 = *(_DWORD *)(v23 + 4);
    v42 = *(float *)(v24 + v33);
    v43 = *(float *)(v24 + v33 + 4);
    v44 = *(float *)(v33 + v24 + 8);
    v47 = v21[27];
    v25 = *((_DWORD *)this + 134);
    v48 = v21[28];
    v49 = v21[29];
    v50 = v21[30];
    v51 = v21[31];
    v52 = v21[32];
    v53 = v21[33];
    v54 = v21[34];
    v55 = v21[35];
    v56 = v21[36];
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)v25 + 24))(v25, &v42);
    ++v16;
    v33 += 12;
  }
  *((_DWORD *)this + 114) = *((_DWORD *)this + 134);
  v26 = v17[129];
  if ( v26 >= 0 )
  {
    v27 = *((_DWORD *)this + 49);
    v28 = v27 ? (*((_DWORD *)this + 50) - v27) >> 2 : 0;
    if ( v26 < v28 )
    {
      if ( !v27 || v26 >= (unsigned int)((*((_DWORD *)this + 50) - v27) >> 2) )
        _invalid_parameter_noinfo();
      *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 49) + 4 * v26) + 92) = *(_DWORD *)(*((_DWORD *)this + 135) + 1268);
    }
  }
  GameClient::SuspendVehicle::BindWheelFrames(this);
  v29 = *((_DWORD *)this + 134);
  if ( v35 )
    operator delete(v35);
  v35 = 0;
  v36 = 0;
  v37 = 0;
  if ( v39 )
    operator delete(v39);
  return (struct GameClient::NxRaycastVehicle *)v29;
}
