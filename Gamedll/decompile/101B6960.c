/*
 * func-name: ?CreateNxVehicle@AircraftVehicle@GameClient@@UAEPAVNxRaycastVehicle@2@XZ_0
 * func-address: 0x101b6960
 * callers: 0x100172f1
 * callees: 0x10010839, 0x10015e3d, 0x1001a0e1, 0x102c9d50, 0x102c9d98
 */

struct GameClient::NxRaycastVehicle *__thiscall GameClient::AircraftVehicle::CreateNxVehicle(
        GameClient::AircraftVehicle *this)
{
  int v3; // eax
  void (__thiscall *v4)(char *, _BYTE *); // edx
  int *v5; // eax
  int *v6; // eax
  int v7; // edi
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // ebx
  unsigned int v13; // edi
  int v14; // edi
  int v15; // esi
  void *v16; // [esp+80h] [ebp-E0h]
  void *v17; // [esp+80h] [ebp-E0h]
  int v18; // [esp+98h] [ebp-C8h] BYREF
  void *v19; // [esp+9Ch] [ebp-C4h]
  int v20; // [esp+A0h] [ebp-C0h]
  int v21; // [esp+A4h] [ebp-BCh]
  int v22; // [esp+A8h] [ebp-B8h] BYREF
  void *v23; // [esp+ACh] [ebp-B4h]
  int v24; // [esp+B0h] [ebp-B0h]
  int v25; // [esp+B4h] [ebp-ACh]
  void *v26; // [esp+B8h] [ebp-A8h]
  _BYTE v27[12]; // [esp+BCh] [ebp-A4h] BYREF
  _BYTE v28[12]; // [esp+C8h] [ebp-98h] BYREF
  _BYTE v29[48]; // [esp+D4h] [ebp-8Ch] BYREF
  int v30; // [esp+104h] [ebp-5Ch]
  int v31; // [esp+108h] [ebp-58h]
  int v32; // [esp+10Ch] [ebp-54h]
  _BYTE v33[48]; // [esp+114h] [ebp-4Ch] BYREF
  int v34; // [esp+144h] [ebp-1Ch]
  int v35; // [esp+148h] [ebp-18h]
  int v36; // [esp+14Ch] [ebp-14h]
  int v37; // [esp+15Ch] [ebp-4h]

  if ( !*((_DWORD *)this + 135) )
    return 0;
  v26 = operator new(0x124u);
  v37 = 0;
  if ( v26 )
    v3 = sub_1001A0E1();
  else
    v3 = 0;
  *((_DWORD *)this + 134) = v3;
  v4 = *(void (__thiscall **)(char *, _BYTE *))(*((_DWORD *)this + 37) + 12);
  v37 = -1;
  v4((char *)this + 148, v33);
  v5 = (int *)(*(int (__thiscall **)(char *, _BYTE *))(*((_DWORD *)this + 37) + 8))((char *)this + 148, v28);
  v34 = *v5;
  v35 = v5[1];
  v36 = v5[2];
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v16 = (void *)(*((_DWORD *)this + 135) + 1072);
  v37 = 1;
  sub_10015E3D(&v22, v16);
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v17 = (void *)(*((_DWORD *)this + 135) + 1084);
  LOBYTE(v37) = 2;
  sub_10015E3D(&v18, v17);
  (*(void (__thiscall **)(char *, _BYTE *))(*((_DWORD *)this + 37) + 12))((char *)this + 148, v29);
  v6 = (int *)(*(int (__thiscall **)(char *, _BYTE *))(*((_DWORD *)this + 37) + 8))((char *)this + 148, v27);
  v7 = *((_DWORD *)this + 127);
  v30 = *v6;
  v8 = *((_DWORD *)this + 134);
  v31 = v6[1];
  v32 = v6[2];
  v9 = *((_DWORD *)this + 135);
  (*(void (__thiscall **)(int, _BYTE *, _DWORD, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v8 + 20))(
    v8,
    v29,
    *((_DWORD *)this + 3),
    &v22,
    &v18,
    *(float *)(v9 + 1096),
    *(float *)(v9 + 1100),
    *(float *)(v9 + 1104),
    *(float *)(v9 + 1108),
    *(float *)(v9 + 1136),
    *(float *)(v9 + 1140),
    *(float *)(v9 + 1144),
    *(float *)(v9 + 1148),
    *(float *)(v9 + 1152),
    *(float *)(v9 + 1156),
    *(float *)(v9 + 1160),
    *(float *)(v9 + 1164),
    *(float *)(v9 + 1168),
    *(float *)(v9 + 1172),
    *(float *)(v9 + 1176),
    0.0,
    *(float *)(v9 + 1112),
    v9 + 1116,
    *(float *)(v9 + 1128),
    *(float *)(v9 + 1132),
    *(float *)(v9 + 1180),
    *(float *)(v9 + 1184),
    *(unsigned __int8 *)(v9 + 1188),
    *(float *)(v9 + 1192),
    *(float *)(v9 + 1196),
    *(float *)(v9 + 1200),
    *(float *)(v9 + 1204),
    *((_DWORD *)this + 125),
    v7);
  v10 = *((_DWORD *)this + 135);
  *((_DWORD *)this + 114) = *((_DWORD *)this + 134);
  v11 = *(_DWORD *)(v10 + 516);
  if ( v11 >= 0 )
  {
    v12 = *((_DWORD *)this + 49);
    v13 = v12 ? (*((_DWORD *)this + 50) - v12) >> 2 : 0;
    if ( v11 < v13 )
    {
      v14 = *(_DWORD *)(v10 + 1264);
      *(_DWORD *)(*(_DWORD *)sub_10010839(*(_DWORD *)(v10 + 516)) + 92) = v14;
    }
  }
  v15 = *((_DWORD *)this + 134);
  if ( v19 )
    operator delete(v19);
  v19 = 0;
  v20 = 0;
  v21 = 0;
  if ( v23 )
    operator delete(v23);
  return (struct GameClient::NxRaycastVehicle *)v15;
}
