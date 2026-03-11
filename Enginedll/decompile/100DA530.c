/*
 * func-name: ??0IndoorVolume@@QAE@PAVWorld@@@Z
 * func-address: 0x100da530
 * callers: 0x1009b340
 * callees: 0x10001440, 0x10009550, 0x10012c20, 0x10017220, 0x10017310, 0x10050b80, 0x100dacc0
 */

IndoorVolume *__thiscall IndoorVolume::IndoorVolume(IndoorVolume *this, struct World *a2)
{
  float v3; // ecx
  struct EditorVar *v4; // eax
  struct EditorVar *v5; // eax
  struct EditorVar *v6; // eax
  struct EditorVar *v7; // eax
  struct EditorVar *v8; // eax
  struct EditorVar *v9; // eax
  struct EditorVar *v10; // eax
  struct EditorVar *v11; // eax
  char v13; // [esp-60h] [ebp-F8h] BYREF
  int v14; // [esp-5Ch] [ebp-F4h]
  int v15; // [esp-58h] [ebp-F0h]
  int v16; // [esp-54h] [ebp-ECh]
  int v17; // [esp-50h] [ebp-E8h]
  int v18; // [esp-4Ch] [ebp-E4h]
  int v19; // [esp-48h] [ebp-E0h]
  int v20; // [esp-44h] [ebp-DCh]
  char v21; // [esp-40h] [ebp-D8h] BYREF
  int v22; // [esp-3Ch] [ebp-D4h]
  int v23; // [esp-38h] [ebp-D0h]
  int v24; // [esp-34h] [ebp-CCh]
  int v25; // [esp-30h] [ebp-C8h]
  int v26; // [esp-2Ch] [ebp-C4h]
  const char *v27; // [esp-28h] [ebp-C0h]
  char v28; // [esp-24h] [ebp-BCh] BYREF
  int v29; // [esp-20h] [ebp-B8h]
  int v30; // [esp-1Ch] [ebp-B4h]
  int v31; // [esp-18h] [ebp-B0h]
  int v32; // [esp-14h] [ebp-ACh]
  int v33; // [esp-10h] [ebp-A8h]
  int v34; // [esp-Ch] [ebp-A4h]
  int v35; // [esp-8h] [ebp-A0h]
  int v36; // [esp-4h] [ebp-9Ch]
  int v37[2]; // [esp+10h] [ebp-88h] BYREF
  char *v38; // [esp+18h] [ebp-80h]
  char *v39; // [esp+1Ch] [ebp-7Ch]
  float v40; // [esp+20h] [ebp-78h]
  float v41; // [esp+24h] [ebp-74h]
  float v42; // [esp+28h] [ebp-70h]
  _DWORD v43[24]; // [esp+2Ch] [ebp-6Ch] BYREF
  int v44; // [esp+94h] [ebp-4h]

  v37[1] = (int)this;
  Actor::Actor(this, a2);
  v44 = 0;
  *(_DWORD *)this = &IndoorVolume::`vftable';
  sub_10001440((float *)this + 263);
  *((float *)this + 277) = 0.0;
  *((float *)this + 278) = 0.0;
  *((float *)this + 279) = 0.0;
  v36 = 0;
  v35 = 1;
  *((float *)this + 276) = 10.0;
  v40 = 10.0;
  *((_DWORD *)this + 179) = 0;
  v3 = v40;
  v41 = 10.0;
  v42 = 10.0;
  *((float *)this + 280) = 10.0;
  *((float *)this + 277) = v3;
  *((float *)this + 281) = 10.0;
  v37[0] = (int)&v28;
  *((float *)this + 278) = 10.0;
  v27 = "Determines the functionality of this IndoorVolume. \n"
        "0: activates Indoor lighting. \n"
        "2: activates Indoor lighting and collides outdoor weather effects. \n"
        "3: only collides outdoor weather effects.";
  LOBYTE(v44) = 1;
  *((_BYTE *)this + 724) = 1;
  *((_BYTE *)this + 725) = 1;
  *((_BYTE *)this + 1092) = 0;
  *((_DWORD *)this + 274) = 0;
  *((_DWORD *)this + 275) = 1;
  *((float *)this + 279) = 10.0;
  std::string::string(&v28, v27);
  v38 = &v21;
  LOBYTE(v44) = 2;
  std::string::string(&v21, "Volume Parameters");
  v20 = (int)this + 1096;
  v39 = &v13;
  LOBYTE(v44) = 3;
  std::string::string(&v13, "IndoorVolumeType");
  LOBYTE(v44) = 1;
  v4 = (struct EditorVar *)EditorVar::EditorVar(
                             v43,
                             v13,
                             v14,
                             v15,
                             v16,
                             v17,
                             v18,
                             v19,
                             v20,
                             v21,
                             v22,
                             v23,
                             v24,
                             v25,
                             v26,
                             (int)v27,
                             v28,
                             v29,
                             v30,
                             v31,
                             v32,
                             v33,
                             v34,
                             v35,
                             v36);
  LOBYTE(v44) = 4;
  std::vector<EditorVar>::push_back((_DWORD *)this + 106, v4);
  LOBYTE(v44) = 1;
  EditorVar::~EditorVar((EditorVar *)v43);
  v36 = 0;
  v35 = 1;
  v39 = &v28;
  std::string::string(&v28, &unk_101C64DC);
  v38 = &v21;
  LOBYTE(v44) = 5;
  std::string::string(&v21, "Volume Parameters");
  v20 = (int)this + 1100;
  v37[0] = (int)&v13;
  LOBYTE(v44) = 6;
  std::string::string(&v13, "DetectType");
  LOBYTE(v44) = 1;
  v5 = (struct EditorVar *)EditorVar::EditorVar(
                             v43,
                             v13,
                             v14,
                             v15,
                             v16,
                             v17,
                             v18,
                             v19,
                             v20,
                             v21,
                             v22,
                             v23,
                             v24,
                             v25,
                             v26,
                             (int)v27,
                             v28,
                             v29,
                             v30,
                             v31,
                             v32,
                             v33,
                             v34,
                             v35,
                             v36);
  LOBYTE(v44) = 7;
  std::vector<EditorVar>::push_back((_DWORD *)this + 106, v5);
  LOBYTE(v44) = 1;
  EditorVar::~EditorVar((EditorVar *)v43);
  v36 = 0;
  v35 = 1;
  v39 = &v28;
  std::string::string(&v28, &unk_101C6528);
  v38 = &v21;
  LOBYTE(v44) = 8;
  std::string::string(&v21, "Volume Parameters");
  v20 = (int)this + 1108;
  v37[0] = (int)&v13;
  LOBYTE(v44) = 9;
  std::string::string(&v13, "BoxRadioX");
  LOBYTE(v44) = 1;
  v6 = (struct EditorVar *)EditorVar::EditorVar(
                             v43,
                             v13,
                             v14,
                             v15,
                             v16,
                             v17,
                             v18,
                             v19,
                             v20,
                             v21,
                             v22,
                             v23,
                             v24,
                             v25,
                             v26,
                             (int)v27,
                             v28,
                             v29,
                             v30,
                             v31,
                             v32,
                             v33,
                             v34,
                             v35,
                             v36);
  LOBYTE(v44) = 10;
  std::vector<EditorVar>::push_back((_DWORD *)this + 106, v6);
  LOBYTE(v44) = 1;
  EditorVar::~EditorVar((EditorVar *)v43);
  v36 = 0;
  v35 = 1;
  v39 = &v28;
  std::string::string(&v28, &unk_101C6554);
  v38 = &v21;
  LOBYTE(v44) = 11;
  std::string::string(&v21, "Volume Parameters");
  LOBYTE(v44) = 12;
  v20 = (int)this + 1112;
  v37[0] = (int)&v13;
  std::string::string(&v13, "BoxRadioY");
  LOBYTE(v44) = 1;
  v7 = (struct EditorVar *)EditorVar::EditorVar(
                             v43,
                             v13,
                             v14,
                             v15,
                             v16,
                             v17,
                             v18,
                             v19,
                             v20,
                             v21,
                             v22,
                             v23,
                             v24,
                             v25,
                             v26,
                             (int)v27,
                             v28,
                             v29,
                             v30,
                             v31,
                             v32,
                             v33,
                             v34,
                             v35,
                             v36);
  LOBYTE(v44) = 13;
  std::vector<EditorVar>::push_back((_DWORD *)this + 106, v7);
  LOBYTE(v44) = 1;
  EditorVar::~EditorVar((EditorVar *)v43);
  v36 = 0;
  v35 = 1;
  v39 = &v28;
  std::string::string(&v28, &unk_101C6580);
  v38 = &v21;
  LOBYTE(v44) = 14;
  std::string::string(&v21, "Volume Parameters");
  v20 = (int)this + 1116;
  v37[0] = (int)&v13;
  LOBYTE(v44) = 15;
  std::string::string(&v13, "BoxRadioZ");
  LOBYTE(v44) = 1;
  v8 = (struct EditorVar *)EditorVar::EditorVar(
                             v43,
                             v13,
                             v14,
                             v15,
                             v16,
                             v17,
                             v18,
                             v19,
                             v20,
                             v21,
                             v22,
                             v23,
                             v24,
                             v25,
                             v26,
                             (int)v27,
                             v28,
                             v29,
                             v30,
                             v31,
                             v32,
                             v33,
                             v34,
                             v35,
                             v36);
  LOBYTE(v44) = 16;
  std::vector<EditorVar>::push_back((_DWORD *)this + 106, v8);
  LOBYTE(v44) = 1;
  EditorVar::~EditorVar((EditorVar *)v43);
  v36 = 0;
  v35 = 1;
  v39 = &v28;
  std::string::string(&v28, &unk_101C65AC);
  v38 = &v21;
  LOBYTE(v44) = 17;
  std::string::string(&v21, "Volume Parameters");
  v20 = (int)this + 1104;
  v37[0] = (int)&v13;
  LOBYTE(v44) = 18;
  std::string::string(&v13, "SphereRadio");
  LOBYTE(v44) = 1;
  v9 = (struct EditorVar *)EditorVar::EditorVar(
                             v43,
                             v13,
                             v14,
                             v15,
                             v16,
                             v17,
                             v18,
                             v19,
                             v20,
                             v21,
                             v22,
                             v23,
                             v24,
                             v25,
                             v26,
                             (int)v27,
                             v28,
                             v29,
                             v30,
                             v31,
                             v32,
                             v33,
                             v34,
                             v35,
                             v36);
  LOBYTE(v44) = 19;
  std::vector<EditorVar>::push_back((_DWORD *)this + 106, v9);
  LOBYTE(v44) = 1;
  EditorVar::~EditorVar((EditorVar *)v43);
  v36 = 0;
  v35 = 1;
  v39 = &v28;
  std::string::string(&v28, &unk_101C65D8);
  v38 = &v21;
  LOBYTE(v44) = 20;
  std::string::string(&v21, "Volume Parameters");
  v20 = (int)this + 1120;
  v37[0] = (int)&v13;
  LOBYTE(v44) = 21;
  std::string::string(&v13, "CylinderRadio");
  LOBYTE(v44) = 1;
  v10 = (struct EditorVar *)EditorVar::EditorVar(
                              v43,
                              v13,
                              v14,
                              v15,
                              v16,
                              v17,
                              v18,
                              v19,
                              v20,
                              v21,
                              v22,
                              v23,
                              v24,
                              v25,
                              v26,
                              (int)v27,
                              v28,
                              v29,
                              v30,
                              v31,
                              v32,
                              v33,
                              v34,
                              v35,
                              v36);
  LOBYTE(v44) = 22;
  std::vector<EditorVar>::push_back((_DWORD *)this + 106, v10);
  LOBYTE(v44) = 1;
  EditorVar::~EditorVar((EditorVar *)v43);
  v36 = 0;
  v35 = 1;
  v39 = &v28;
  std::string::string(&v28, &unk_101C6608);
  v38 = &v21;
  LOBYTE(v44) = 23;
  std::string::string(&v21, "Volume Parameters");
  v20 = (int)this + 1124;
  v37[0] = (int)&v13;
  LOBYTE(v44) = 24;
  std::string::string(&v13, "CylinderHeight");
  LOBYTE(v44) = 1;
  v11 = (struct EditorVar *)EditorVar::EditorVar(
                              v43,
                              v13,
                              v14,
                              v15,
                              v16,
                              v17,
                              v18,
                              v19,
                              v20,
                              v21,
                              v22,
                              v23,
                              v24,
                              v25,
                              v26,
                              (int)v27,
                              v28,
                              v29,
                              v30,
                              v31,
                              v32,
                              v33,
                              v34,
                              v35,
                              v36);
  LOBYTE(v44) = 25;
  std::vector<EditorVar>::push_back((_DWORD *)this + 106, v11);
  LOBYTE(v44) = 1;
  EditorVar::~EditorVar((EditorVar *)v43);
  v37[0] = (int)this;
  sub_100DACC0((int)&IndoorVolume::IndoorVolumes, (int)v37);
  return this;
}
