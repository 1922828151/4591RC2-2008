/*
 * func-name: ?PlaySoundA@SoundMgr@@QAE_NPAUSOUND_OPTION@@AAVVector@@1W4SoundFlags@@M@Z_0
 * func-address: 0x100e9b40
 * callers: 0x10018fc0
 * callees: 0x10003f58, 0x1000447b, 0x1000a097, 0x102c71e0, 0x102c7580, 0x102c9d62, 0x102c9dbc
 */

char __thiscall SoundMgr::PlaySoundA(int this, int a2, float *a3, _DWORD *a4, int a5, int a6)
{
  CameraHandler *v8; // eax
  float *Camera; // eax
  double v10; // st7
  _DWORD *v11; // ebx
  int v12; // edi
  double v13; // st7
  int v14; // edx
  double v15; // st7
  int v16; // edx
  int v17; // eax
  double v18; // st7
  int v19; // ecx
  int (__thiscall *v20)(int, _BYTE *); // edx
  int v21; // eax
  void *v22; // eax
  int v23; // eax
  int v24; // eax
  float v26; // [esp+14h] [ebp-B0h]
  float v27; // [esp+14h] [ebp-B0h]
  float v28; // [esp+18h] [ebp-ACh]
  float v29; // [esp+1Ch] [ebp-A8h]
  float v30; // [esp+1Ch] [ebp-A8h]
  float v31; // [esp+1Ch] [ebp-A8h]
  float v32; // [esp+1Ch] [ebp-A8h]
  float v33; // [esp+24h] [ebp-A0h]
  _DWORD *v34; // [esp+28h] [ebp-9Ch] BYREF
  _DWORD v35[11]; // [esp+30h] [ebp-94h] BYREF
  char v36; // [esp+5Ch] [ebp-68h]
  char v37; // [esp+5Dh] [ebp-67h]
  _BYTE v38[28]; // [esp+60h] [ebp-64h] BYREF
  _BYTE v39[28]; // [esp+7Ch] [ebp-48h] BYREF
  _BYTE v40[28]; // [esp+98h] [ebp-2Ch] BYREF
  int v41; // [esp+C0h] [ebp-4h]

  v34 = a4;
  if ( !a2 )
    return 0;
  if ( !*(_DWORD *)(a2 + 56) )
    return 0;
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 56) + 40))(*(_DWORD *)(a2 + 56)) )
    return 0;
  v8 = CameraHandler::Instance();
  Camera = (float *)CameraHandler::GetCamera(v8, 0);
  v10 = Camera[88] - *a3;
  Camera += 88;
  v33 = v10;
  v28 = Camera[1] - a3[1];
  v29 = Camera[2] - a3[2];
  v30 = v28 * v28 + v33 * v33 + v29 * v29;
  v31 = sqrt(v30);
  if ( *(float *)(a2 + 60) * 5.0 < v31 )
    return 0;
  v11 = **(_DWORD ***)(this + 8);
  v12 = this + 4;
  while ( v11 != *(_DWORD **)(v12 + 4) )
  {
    if ( v11[2] == *(_DWORD *)(a2 + 56) )
      return 0;
    if ( v11 == *(_DWORD **)(v12 + 4) )
      _invalid_parameter_noinfo();
    v11 = (_DWORD *)*v11;
  }
  v13 = *(float *)(this + 60) * v31;
  v14 = *((_DWORD *)a3 + 1);
  *(float *)&v35[3] = *a3;
  v35[4] = v14;
  v32 = v13;
  v15 = *(float *)(this + 64) * *(float *)(a2 + 60);
  v35[0] = *(_DWORD *)(a2 + 56);
  *(float *)&v35[5] = a3[2];
  v26 = v15;
  v16 = v34[1];
  v17 = v34[2];
  v35[6] = *v34;
  v27 = v26 + v32;
  v18 = *(float *)(a2 + 60);
  v35[9] = a5;
  v19 = *(_DWORD *)(a2 + 56);
  *(float *)&v35[1] = v18;
  v35[7] = v16;
  v20 = *(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v19 + 56);
  v35[8] = v17;
  v21 = v20(v19, v39);
  v41 = 0;
  v22 = (void *)sub_102C71E0(v38, v21);
  LOBYTE(v41) = 1;
  sub_102C7580(v40, v22);
  LOBYTE(v41) = 3;
  std::string::~string(v38);
  LOBYTE(v41) = 4;
  std::string::~string(v39);
  v23 = std::string::length(v40);
  std::string::operator[](v40, v23 - 1);
  v24 = *(_DWORD *)(v12 + 4);
  v35[10] = a6;
  *(float *)&v35[2] = v27;
  v36 = 1;
  v37 = 0;
  sub_1000447B((int)&v34, v12, v24, (int)v35);
  v41 = -1;
  std::string::~string(v40);
  return 1;
}
