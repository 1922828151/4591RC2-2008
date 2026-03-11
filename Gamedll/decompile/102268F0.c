/*
 * func-name: ??0FEquip@GameClient@@QAE@XZ_0
 * func-address: 0x102268f0
 * callers: 0x10005a4c
 * callees: 0x100057f4, 0x1000fb91, 0x1001018b, 0x102c3880, 0x102c3940, 0x102c3a00, 0x102c3b80, 0x102c3c40, 0x102c3d00, 0x102c4180, 0x102ca0d8
 */

GameClient::FEquip *__thiscall GameClient::FEquip::FEquip(GameClient::FEquip *this)
{
  float v2; // edx
  int v4; // [esp+0h] [ebp-620h]
  int v5; // [esp+0h] [ebp-620h]
  int v6; // [esp+0h] [ebp-620h]
  int v7; // [esp+0h] [ebp-620h]
  int v8; // [esp+0h] [ebp-620h]
  int v9; // [esp+0h] [ebp-620h]
  int v10; // [esp+4h] [ebp-61Ch]
  int v11; // [esp+4h] [ebp-61Ch]
  int v12; // [esp+4h] [ebp-61Ch]
  int v13; // [esp+4h] [ebp-61Ch]
  int v14; // [esp+4h] [ebp-61Ch]
  int v15; // [esp+4h] [ebp-61Ch]
  char *v16; // [esp+14h] [ebp-60Ch]
  char *v17; // [esp+14h] [ebp-60Ch]
  char *v18; // [esp+14h] [ebp-60Ch]
  int v19; // [esp+18h] [ebp-608h]
  int v20; // [esp+18h] [ebp-608h]
  int v21; // [esp+18h] [ebp-608h]
  _BYTE v22[28]; // [esp+1Ch] [ebp-604h] BYREF
  _BYTE v23[28]; // [esp+38h] [ebp-5E8h] BYREF
  float v24; // [esp+54h] [ebp-5CCh]
  float v25; // [esp+58h] [ebp-5C8h]
  float v26; // [esp+5Ch] [ebp-5C4h]
  GameClient::FEquip *v27; // [esp+60h] [ebp-5C0h]
  _BYTE v28[28]; // [esp+64h] [ebp-5BCh] BYREF
  _BYTE v29[28]; // [esp+80h] [ebp-5A0h] BYREF
  _BYTE v30[28]; // [esp+9Ch] [ebp-584h] BYREF
  _BYTE v31[28]; // [esp+B8h] [ebp-568h] BYREF
  _BYTE v32[28]; // [esp+D4h] [ebp-54Ch] BYREF
  _BYTE v33[28]; // [esp+F0h] [ebp-530h] BYREF
  _BYTE v34[28]; // [esp+10Ch] [ebp-514h] BYREF
  _BYTE v35[28]; // [esp+128h] [ebp-4F8h] BYREF
  _BYTE v36[28]; // [esp+144h] [ebp-4DCh] BYREF
  _BYTE v37[28]; // [esp+160h] [ebp-4C0h] BYREF
  _BYTE v38[28]; // [esp+17Ch] [ebp-4A4h] BYREF
  _BYTE v39[28]; // [esp+198h] [ebp-488h] BYREF
  _BYTE v40[28]; // [esp+1B4h] [ebp-46Ch] BYREF
  _BYTE v41[28]; // [esp+1D0h] [ebp-450h] BYREF
  _BYTE v42[28]; // [esp+1ECh] [ebp-434h] BYREF
  _BYTE v43[28]; // [esp+208h] [ebp-418h] BYREF
  _BYTE v44[28]; // [esp+224h] [ebp-3FCh] BYREF
  _BYTE v45[28]; // [esp+240h] [ebp-3E0h] BYREF
  _BYTE v46[28]; // [esp+25Ch] [ebp-3C4h] BYREF
  _BYTE v47[28]; // [esp+278h] [ebp-3A8h] BYREF
  _BYTE v48[28]; // [esp+294h] [ebp-38Ch] BYREF
  _BYTE v49[28]; // [esp+2B0h] [ebp-370h] BYREF
  _BYTE v50[28]; // [esp+2CCh] [ebp-354h] BYREF
  _BYTE v51[28]; // [esp+2E8h] [ebp-338h] BYREF
  _BYTE v52[28]; // [esp+304h] [ebp-31Ch] BYREF
  _BYTE v53[28]; // [esp+320h] [ebp-300h] BYREF
  _BYTE v54[28]; // [esp+33Ch] [ebp-2E4h] BYREF
  _BYTE v55[28]; // [esp+358h] [ebp-2C8h] BYREF
  _BYTE v56[28]; // [esp+374h] [ebp-2ACh] BYREF
  _BYTE v57[28]; // [esp+390h] [ebp-290h] BYREF
  _BYTE v58[28]; // [esp+3ACh] [ebp-274h] BYREF
  _BYTE v59[28]; // [esp+3C8h] [ebp-258h] BYREF
  _BYTE v60[28]; // [esp+3E4h] [ebp-23Ch] BYREF
  _BYTE v61[28]; // [esp+400h] [ebp-220h] BYREF
  _BYTE v62[28]; // [esp+41Ch] [ebp-204h] BYREF
  _BYTE v63[28]; // [esp+438h] [ebp-1E8h] BYREF
  _BYTE v64[28]; // [esp+454h] [ebp-1CCh] BYREF
  _BYTE v65[28]; // [esp+470h] [ebp-1B0h] BYREF
  _BYTE v66[28]; // [esp+48Ch] [ebp-194h] BYREF
  _BYTE v67[28]; // [esp+4A8h] [ebp-178h] BYREF
  _BYTE v68[28]; // [esp+4C4h] [ebp-15Ch] BYREF
  _BYTE v69[28]; // [esp+4E0h] [ebp-140h] BYREF
  _BYTE v70[28]; // [esp+4FCh] [ebp-124h] BYREF
  _BYTE v71[28]; // [esp+518h] [ebp-108h] BYREF
  _BYTE v72[28]; // [esp+534h] [ebp-ECh] BYREF
  _BYTE v73[28]; // [esp+550h] [ebp-D0h] BYREF
  _BYTE v74[28]; // [esp+56Ch] [ebp-B4h] BYREF
  _BYTE v75[28]; // [esp+588h] [ebp-98h] BYREF
  _BYTE v76[28]; // [esp+5A4h] [ebp-7Ch] BYREF
  _BYTE v77[28]; // [esp+5C0h] [ebp-60h] BYREF
  _BYTE v78[28]; // [esp+5DCh] [ebp-44h] BYREF
  _BYTE v79[28]; // [esp+5F8h] [ebp-28h] BYREF
  int v80; // [esp+61Ch] [ebp-4h]

  v27 = this;
  GameClient::FSystemPart::FSystemPart(this);
  v80 = 0;
  *(_DWORD *)this = &GameClient::FEquip::`vftable';
  std::string::string((char *)this + 272);
  *((float *)this + 85) = 0.0;
  *((float *)this + 86) = 0.0;
  *((float *)this + 87) = 0.0;
  std::string::string((char *)this + 360);
  std::string::string((char *)this + 388);
  std::string::string((char *)this + 416);
  *((_DWORD *)this + 112) = 0;
  *((_DWORD *)this + 113) = 0;
  *((_DWORD *)this + 114) = 0;
  *((_DWORD *)this + 116) = 0;
  *((_DWORD *)this + 117) = 0;
  *((_DWORD *)this + 118) = 0;
  std::string::string((char *)this + 476);
  std::string::string((char *)this + 504);
  std::string::string((char *)this + 540);
  std::string::string((char *)this + 568);
  std::string::string((char *)this + 596);
  *((_DWORD *)this + 157) = 0;
  *((_DWORD *)this + 158) = 0;
  *((_DWORD *)this + 159) = 0;
  *((_DWORD *)this + 161) = 0;
  *((_DWORD *)this + 162) = 0;
  *((_DWORD *)this + 163) = 0;
  *((_DWORD *)this + 165) = 0;
  *((_DWORD *)this + 166) = 0;
  *((_DWORD *)this + 167) = 0;
  *((_DWORD *)this + 169) = 0;
  *((_DWORD *)this + 170) = 0;
  *((_DWORD *)this + 171) = 0;
  *((_DWORD *)this + 173) = 0;
  *((_DWORD *)this + 174) = 0;
  *((_DWORD *)this + 175) = 0;
  `eh vector constructor iterator'((char *)this + 704, 0x1Cu, 5, std::string::string, std::string::~string);
  `eh vector constructor iterator'((char *)this + 844, 0x1Cu, 5, std::string::string, std::string::~string);
  `eh vector constructor iterator'((char *)this + 984, 0x1Cu, 5, std::string::string, std::string::~string);
  `eh vector constructor iterator'((char *)this + 1124, 0x1Cu, 9, std::string::string, std::string::~string);
  `eh vector constructor iterator'((char *)this + 1376, 0x1Cu, 9, std::string::string, std::string::~string);
  *((_DWORD *)this + 409) = 0;
  *((_DWORD *)this + 410) = 0;
  *((_DWORD *)this + 411) = 0;
  sub_100057F4(v4, v10);
  sub_100057F4(v5, v11);
  sub_100057F4(v6, v12);
  sub_100057F4(v7, v13);
  sub_100057F4(v8, v14);
  sub_1000FB91(v9, v15);
  LOBYTE(v80) = 28;
  std::string::operator=((char *)this + 272, &unk_1031ABFC);
  *((_DWORD *)this + 75) = 1;
  *((_DWORD *)this + 77) = 0;
  *((float *)this + 81) = 1.0;
  *((_DWORD *)this + 79) = 0;
  *((_DWORD *)this + 84) = 0;
  v24 = 0.15000001;
  v25 = -0.28;
  *((float *)this + 85) = 0.15000001;
  v26 = 0.44999999;
  *((float *)this + 86) = v25;
  v2 = v26;
  *((float *)this + 88) = 0.80000001;
  *((float *)this + 89) = 0.050000001;
  *((_DWORD *)this + 76) = 1;
  *((_DWORD *)this + 78) = 1;
  *((_DWORD *)this + 49) = 3;
  *((_DWORD *)this + 80) = 100;
  *((_DWORD *)this + 82) = 10;
  *((_BYTE *)this + 332) = 1;
  *((_BYTE *)this + 333) = 0;
  *((float *)this + 87) = v2;
  std::string::operator=((char *)this + 388, &unk_1031ABFD);
  std::string::operator=((char *)this + 416, &unk_1031ABFE);
  std::string::operator=((char *)this + 476, &unk_1031ABFF);
  std::string::operator=((char *)this + 504, &unk_1031AC00);
  *((float *)this + 133) = 1.0;
  *((_DWORD *)this + 134) = 1;
  std::string::operator=((char *)this + 540, &unk_1031AC01);
  std::string::operator=((char *)this + 568, &unk_1031AC02);
  std::string::operator=((char *)this + 596, &unk_1031AC03);
  v16 = (char *)this + 844;
  v19 = 5;
  do
  {
    std::string::operator=(v16 - 140, &unk_1031AC04);
    std::string::operator=(v16, &unk_1031AC05);
    std::string::operator=(v16 + 140, &unk_1031AC06);
    v16 += 28;
    --v19;
  }
  while ( v19 );
  *((_BYTE *)this + 1628) = 0;
  v17 = (char *)this + 1124;
  v20 = 9;
  do
  {
    std::string::operator=(v17, &unk_1031AC07);
    v17 += 28;
    --v20;
  }
  while ( v20 );
  v18 = (char *)this + 1376;
  v21 = 9;
  do
  {
    std::string::operator=(v18, &unk_1031AC08);
    v18 += 28;
    --v21;
  }
  while ( v21 );
  std::string::string(v22, &unk_1031AC0C);
  LOBYTE(v80) = 29;
  std::string::string(v23, "MatchBodyName");
  LOBYTE(v80) = 30;
  sub_102C3C40(this, v23, (char *)this + 272, v22);
  LOBYTE(v80) = 29;
  std::string::~string(v23);
  LOBYTE(v80) = 28;
  std::string::~string(v22);
  std::string::string(v23, &unk_1031AC30);
  LOBYTE(v80) = 31;
  std::string::string(v22, "RobotTypeCanUse");
  LOBYTE(v80) = 32;
  sub_102C3940(this, v22, (char *)this + 300, v23);
  LOBYTE(v80) = 31;
  std::string::~string(v22);
  LOBYTE(v80) = 28;
  std::string::~string(v23);
  std::string::string(v23, &unk_1031AC70);
  LOBYTE(v80) = 33;
  std::string::string(v22, "SystemPartType");
  LOBYTE(v80) = 34;
  sub_102C3880(this, v22, (char *)this + 196, v23);
  LOBYTE(v80) = 33;
  std::string::~string(v22);
  LOBYTE(v80) = 28;
  std::string::~string(v23);
  std::string::string(v23, &unk_1031ACB8);
  LOBYTE(v80) = 35;
  std::string::string(v22, "EquipAnimType");
  LOBYTE(v80) = 36;
  sub_102C3880(this, v22, (char *)this + 304, v23);
  LOBYTE(v80) = 35;
  std::string::~string(v22);
  LOBYTE(v80) = 28;
  std::string::~string(v23);
  std::string::string(v23, &unk_1031ACE0);
  LOBYTE(v80) = 37;
  std::string::string(v22, "FPVHandleType");
  LOBYTE(v80) = 38;
  sub_102C3880(this, v22, (char *)this + 308, v23);
  LOBYTE(v80) = 37;
  std::string::~string(v22);
  LOBYTE(v80) = 28;
  std::string::~string(v23);
  std::string::string(v23, &unk_1031AD20);
  LOBYTE(v80) = 39;
  std::string::string(v22, "HandleType");
  LOBYTE(v80) = 40;
  sub_102C3880(this, v22, (char *)this + 312, v23);
  LOBYTE(v80) = 39;
  std::string::~string(v22);
  LOBYTE(v80) = 28;
  std::string::~string(v23);
  std::string::string(v23, &unk_1031AD54);
  LOBYTE(v80) = 41;
  std::string::string(v22, "Unique");
  LOBYTE(v80) = 42;
  sub_102C3B80(this, v22, (char *)this + 332, v23);
  LOBYTE(v80) = 41;
  std::string::~string(v22);
  LOBYTE(v80) = 28;
  std::string::~string(v23);
  std::string::string(v23, &unk_1031AD68);
  LOBYTE(v80) = 43;
  std::string::string(v22, "MaxCapacitance");
  LOBYTE(v80) = 44;
  sub_102C3880(this, v22, (char *)this + 320, v23);
  LOBYTE(v80) = 43;
  std::string::~string(v22);
  LOBYTE(v80) = 28;
  std::string::~string(v23);
  std::string::string(v23, &unk_1031AD84);
  LOBYTE(v80) = 45;
  std::string::string(v22, "RecruitDeltaTime");
  LOBYTE(v80) = 46;
  sub_102C3A00(this, v22, (char *)this + 324, v23);
  LOBYTE(v80) = 45;
  std::string::~string(v22);
  LOBYTE(v80) = 28;
  std::string::~string(v23);
  std::string::string(v23, &unk_1031ADA8);
  LOBYTE(v80) = 47;
  std::string::string(v22, "RecruitCapacitance");
  LOBYTE(v80) = 48;
  sub_102C3880(this, v22, (char *)this + 328, v23);
  LOBYTE(v80) = 47;
  std::string::~string(v22);
  LOBYTE(v80) = 28;
  std::string::~string(v23);
  std::string::string(v23, &unk_1031ADE8);
  LOBYTE(v80) = 49;
  std::string::string(v22, "EquipLocOffset");
  LOBYTE(v80) = 50;
  sub_102C3D00(this, v22, (char *)this + 340, v23);
  LOBYTE(v80) = 49;
  std::string::~string(v22);
  LOBYTE(v80) = 28;
  std::string::~string(v23);
  std::string::string(v23, &unk_1031AE1C);
  LOBYTE(v80) = 51;
  std::string::string(v22, "ShakeSpeed");
  LOBYTE(v80) = 52;
  sub_102C3A00(this, v22, (char *)this + 352, v23);
  LOBYTE(v80) = 51;
  std::string::~string(v22);
  LOBYTE(v80) = 28;
  std::string::~string(v23);
  std::string::string(v23, &unk_1031AE38);
  LOBYTE(v80) = 53;
  std::string::string(v22, "ShakeRange");
  LOBYTE(v80) = 54;
  sub_102C3A00(this, v22, (char *)this + 356, v23);
  LOBYTE(v80) = 53;
  std::string::~string(v22);
  LOBYTE(v80) = 28;
  std::string::~string(v23);
  std::string::string(v23, &unk_1031AE54);
  LOBYTE(v80) = 55;
  std::string::string(v22, "Path");
  LOBYTE(v80) = 56;
  sub_102C3C40(this, v22, (char *)this + 360, v23);
  LOBYTE(v80) = 55;
  std::string::~string(v22);
  LOBYTE(v80) = 28;
  std::string::~string(v23);
  std::string::string(v23, &unk_1031AE70);
  LOBYTE(v80) = 57;
  std::string::string(v22, "ModelName");
  LOBYTE(v80) = 58;
  sub_102C3C40(this, v22, (char *)this + 388, v23);
  LOBYTE(v80) = 57;
  std::string::~string(v22);
  LOBYTE(v80) = 28;
  std::string::~string(v23);
  std::string::string(v23, &unk_1031AE90);
  LOBYTE(v80) = 59;
  std::string::string(v22, "ModelNameFPV");
  LOBYTE(v80) = 60;
  sub_102C3C40(this, v22, (char *)this + 416, v23);
  LOBYTE(v80) = 59;
  std::string::~string(v22);
  LOBYTE(v80) = 28;
  std::string::~string(v23);
  std::string::string(v23, &unk_1031AEB4);
  LOBYTE(v80) = 61;
  std::string::string(v22, "ShootPointNames");
  LOBYTE(v80) = 62;
  sub_102C4180(this, v22, (char *)this + 444, v23);
  LOBYTE(v80) = 61;
  std::string::~string(v22);
  LOBYTE(v80) = 28;
  std::string::~string(v23);
  std::string::string(v23, &unk_1031AED8);
  LOBYTE(v80) = 63;
  std::string::string(v22, "ShootPointNamesPFV");
  LOBYTE(v80) = 64;
  sub_102C4180(this, v22, (char *)this + 460, v23);
  LOBYTE(v80) = 63;
  std::string::~string(v22);
  LOBYTE(v80) = 28;
  std::string::~string(v23);
  std::string::string(v72, &unk_1031AF00);
  LOBYTE(v80) = 65;
  std::string::string(v22, "FxUseName");
  LOBYTE(v80) = 66;
  sub_102C3C40(this, v22, (char *)this + 476, v72);
  LOBYTE(v80) = 65;
  std::string::~string(v22);
  LOBYTE(v80) = 28;
  std::string::~string(v72);
  std::string::string(v30, &unk_1031AF24);
  LOBYTE(v80) = 67;
  std::string::string(v72, "FxUseFPVName");
  LOBYTE(v80) = 68;
  sub_102C3C40(this, v72, (char *)this + 504, v30);
  LOBYTE(v80) = 67;
  std::string::~string(v72);
  LOBYTE(v80) = 28;
  std::string::~string(v30);
  std::string::string(v76, &unk_1031AF4C);
  LOBYTE(v80) = 69;
  std::string::string(v30, "TexZoomCollimation");
  LOBYTE(v80) = 70;
  sub_102C3A00(this, v30, (char *)this + 532, v76);
  LOBYTE(v80) = 69;
  std::string::~string(v30);
  LOBYTE(v80) = 28;
  std::string::~string(v76);
  std::string::string(v32, &unk_1031AF74);
  LOBYTE(v80) = 71;
  std::string::string(v76, "TexAimDiffuseType");
  LOBYTE(v80) = 72;
  sub_102C3880(this, v76, (char *)this + 536, v32);
  LOBYTE(v80) = 71;
  std::string::~string(v76);
  LOBYTE(v80) = 28;
  std::string::~string(v32);
  std::string::string(v56, &unk_1031AFA8);
  LOBYTE(v80) = 73;
  std::string::string(v32, "TexAimName");
  LOBYTE(v80) = 74;
  sub_102C3C40(this, v32, (char *)this + 540, v56);
  LOBYTE(v80) = 73;
  std::string::~string(v32);
  LOBYTE(v80) = 28;
  std::string::~string(v56);
  std::string::string(v34, &unk_1031AFC4);
  LOBYTE(v80) = 75;
  std::string::string(v56, "TexLockName");
  LOBYTE(v80) = 76;
  sub_102C3C40(this, v56, (char *)this + 568, v34);
  LOBYTE(v80) = 75;
  std::string::~string(v56);
  LOBYTE(v80) = 28;
  std::string::~string(v34);
  std::string::string(v68, &unk_1031AFE4);
  LOBYTE(v80) = 77;
  std::string::string(v34, "TexZoomOutName");
  LOBYTE(v80) = 78;
  sub_102C3C40(this, v34, (char *)this + 596, v68);
  LOBYTE(v80) = 77;
  std::string::~string(v34);
  LOBYTE(v80) = 28;
  std::string::~string(v68);
  std::string::string(v36, &unk_1031B008);
  LOBYTE(v80) = 79;
  std::string::string(v68, "FxAddonNameVec");
  LOBYTE(v80) = 80;
  sub_102C4180(this, v68, (char *)this + 640, v36);
  LOBYTE(v80) = 79;
  std::string::~string(v68);
  LOBYTE(v80) = 28;
  std::string::~string(v36);
  std::string::string(v58, &unk_1031B034);
  LOBYTE(v80) = 81;
  std::string::string(v36, "BoneAddonNameVec");
  LOBYTE(v80) = 82;
  sub_102C4180(this, v36, (char *)this + 656, v58);
  LOBYTE(v80) = 81;
  std::string::~string(v36);
  LOBYTE(v80) = 28;
  std::string::~string(v58);
  std::string::string(v38, &unk_1031B064);
  LOBYTE(v80) = 83;
  std::string::string(v58, "FxAddonNameFPVVec");
  LOBYTE(v80) = 84;
  sub_102C4180(this, v58, (char *)this + 672, v38);
  LOBYTE(v80) = 83;
  std::string::~string(v58);
  LOBYTE(v80) = 28;
  std::string::~string(v38);
  std::string::string(v74, &unk_1031B094);
  LOBYTE(v80) = 85;
  std::string::string(v38, "BoneAddonNameFPVVec");
  LOBYTE(v80) = 86;
  sub_102C4180(this, v38, (char *)this + 688, v74);
  LOBYTE(v80) = 85;
  std::string::~string(v38);
  LOBYTE(v80) = 28;
  std::string::~string(v74);
  std::string::string(v40, &unk_1031B0C4);
  LOBYTE(v80) = 87;
  std::string::string(v74, "AnimIdle");
  LOBYTE(v80) = 88;
  sub_102C3C40(this, v74, (char *)this + 704, v40);
  LOBYTE(v80) = 87;
  std::string::~string(v74);
  LOBYTE(v80) = 28;
  std::string::~string(v40);
  std::string::string(v60, &unk_1031B0EC);
  LOBYTE(v80) = 89;
  std::string::string(v40, "AnimMove");
  LOBYTE(v80) = 90;
  sub_102C3C40(this, v40, (char *)this + 732, v60);
  LOBYTE(v80) = 89;
  std::string::~string(v40);
  LOBYTE(v80) = 28;
  std::string::~string(v60);
  std::string::string(v42, &unk_1031B114);
  LOBYTE(v80) = 91;
  std::string::string(v60, "AnimUse");
  LOBYTE(v80) = 92;
  sub_102C3C40(this, v60, (char *)this + 760, v42);
  LOBYTE(v80) = 91;
  std::string::~string(v60);
  LOBYTE(v80) = 28;
  std::string::~string(v42);
  std::string::string(v70, &unk_1031B138);
  LOBYTE(v80) = 93;
  std::string::string(v42, "AnimTakeOff");
  LOBYTE(v80) = 94;
  sub_102C3C40(this, v42, (char *)this + 788, v70);
  LOBYTE(v80) = 93;
  std::string::~string(v42);
  LOBYTE(v80) = 28;
  std::string::~string(v70);
  std::string::string(v44, &unk_1031B164);
  LOBYTE(v80) = 95;
  std::string::string(v70, "AnimTakeUp");
  LOBYTE(v80) = 96;
  sub_102C3C40(this, v70, (char *)this + 816, v44);
  LOBYTE(v80) = 95;
  std::string::~string(v70);
  LOBYTE(v80) = 28;
  std::string::~string(v44);
  std::string::string(v62, &unk_1031B190);
  LOBYTE(v80) = 97;
  std::string::string(v44, "FPVAnimIdle");
  LOBYTE(v80) = 98;
  sub_102C3C40(this, v44, (char *)this + 844, v62);
  LOBYTE(v80) = 97;
  std::string::~string(v44);
  LOBYTE(v80) = 28;
  std::string::~string(v62);
  std::string::string(v46, &unk_1031B1B8);
  LOBYTE(v80) = 99;
  std::string::string(v62, "FPVAnimMove");
  LOBYTE(v80) = 100;
  sub_102C3C40(this, v62, (char *)this + 872, v46);
  LOBYTE(v80) = 99;
  std::string::~string(v62);
  LOBYTE(v80) = 28;
  std::string::~string(v46);
  std::string::string(v78, &unk_1031B1E0);
  LOBYTE(v80) = 101;
  std::string::string(v46, "FPVAnimUse");
  LOBYTE(v80) = 102;
  sub_102C3C40(this, v46, (char *)this + 900, v78);
  LOBYTE(v80) = 101;
  std::string::~string(v46);
  LOBYTE(v80) = 28;
  std::string::~string(v78);
  std::string::string(v48, &unk_1031B208);
  LOBYTE(v80) = 103;
  std::string::string(v78, "FPVAnimTakeOff");
  LOBYTE(v80) = 104;
  sub_102C3C40(this, v78, (char *)this + 928, v48);
  LOBYTE(v80) = 103;
  std::string::~string(v78);
  LOBYTE(v80) = 28;
  std::string::~string(v48);
  std::string::string(v64, &unk_1031B238);
  LOBYTE(v80) = 105;
  std::string::string(v48, "FPVAnimTakeUp");
  LOBYTE(v80) = 106;
  sub_102C3C40(this, v48, (char *)this + 956, v64);
  LOBYTE(v80) = 105;
  std::string::~string(v48);
  LOBYTE(v80) = 28;
  std::string::~string(v64);
  std::string::string(v50, &unk_1031B268);
  LOBYTE(v80) = 107;
  std::string::string(v64, "HandAnimIdle");
  LOBYTE(v80) = 108;
  sub_102C3C40(this, v64, (char *)this + 984, v50);
  LOBYTE(v80) = 107;
  std::string::~string(v64);
  LOBYTE(v80) = 28;
  std::string::~string(v50);
  std::string::string(v28, &unk_1031B28C);
  LOBYTE(v80) = 109;
  std::string::string(v50, "HandAnimMove");
  LOBYTE(v80) = 110;
  sub_102C3C40(this, v50, (char *)this + 1012, v28);
  LOBYTE(v80) = 109;
  std::string::~string(v50);
  LOBYTE(v80) = 28;
  std::string::~string(v28);
  std::string::string(v52, &unk_1031B2B0);
  LOBYTE(v80) = 111;
  std::string::string(v28, "HandAnimUse");
  LOBYTE(v80) = 112;
  sub_102C3C40(this, v28, (char *)this + 1040, v52);
  LOBYTE(v80) = 111;
  std::string::~string(v28);
  LOBYTE(v80) = 28;
  std::string::~string(v52);
  std::string::string(v66, &unk_1031B2D0);
  LOBYTE(v80) = 113;
  std::string::string(v52, "HandAnimTakeOff");
  LOBYTE(v80) = 114;
  sub_102C3C40(this, v52, (char *)this + 1068, v66);
  LOBYTE(v80) = 113;
  std::string::~string(v52);
  LOBYTE(v80) = 28;
  std::string::~string(v66);
  std::string::string(v54, &unk_1031B2F8);
  LOBYTE(v80) = 115;
  std::string::string(v66, "HandAnimTakeUp");
  LOBYTE(v80) = 116;
  sub_102C3C40(this, v66, (char *)this + 1096, v54);
  LOBYTE(v80) = 115;
  std::string::~string(v66);
  LOBYTE(v80) = 28;
  std::string::~string(v54);
  std::string::string(v29, &unk_1031B320);
  LOBYTE(v80) = 117;
  std::string::string(v54, "UAnimRobotHasEquipIdle");
  LOBYTE(v80) = 118;
  sub_102C3C40(this, v54, (char *)this + 1124, v29);
  LOBYTE(v80) = 117;
  std::string::~string(v54);
  LOBYTE(v80) = 28;
  std::string::~string(v29);
  std::string::string(v31, &unk_1031B360);
  LOBYTE(v80) = 119;
  std::string::string(v29, "UAnimRobotHasEquipMove");
  LOBYTE(v80) = 120;
  sub_102C3C40(this, v29, (char *)this + 1152, v31);
  LOBYTE(v80) = 119;
  std::string::~string(v29);
  LOBYTE(v80) = 28;
  std::string::~string(v31);
  std::string::string(v33, &unk_1031B3A0);
  LOBYTE(v80) = 121;
  std::string::string(v31, "UAnimRobotHasEquipUse");
  LOBYTE(v80) = 122;
  sub_102C3C40(this, v31, (char *)this + 1180, v33);
  LOBYTE(v80) = 121;
  std::string::~string(v31);
  LOBYTE(v80) = 28;
  std::string::~string(v33);
  std::string::string(v35, &unk_1031B3E0);
  LOBYTE(v80) = 123;
  std::string::string(v33, "UAnimRobotHasEquipTakeOff");
  LOBYTE(v80) = 124;
  sub_102C3C40(this, v33, (char *)this + 1208, v35);
  LOBYTE(v80) = 123;
  std::string::~string(v33);
  LOBYTE(v80) = 28;
  std::string::~string(v35);
  std::string::string(v37, &unk_1031B428);
  LOBYTE(v80) = 125;
  std::string::string(v35, "UAnimRobotHasEquipTakeUp");
  LOBYTE(v80) = 126;
  sub_102C3C40(this, v35, (char *)this + 1236, v37);
  LOBYTE(v80) = 125;
  std::string::~string(v35);
  LOBYTE(v80) = 28;
  std::string::~string(v37);
  std::string::string(v39, &unk_1031B470);
  LOBYTE(v80) = 127;
  std::string::string(v37, "UAnimRobotHasEquipLookUp");
  LOBYTE(v80) = 0x80;
  sub_102C3C40(this, v37, (char *)this + 1264, v39);
  LOBYTE(v80) = 127;
  std::string::~string(v37);
  LOBYTE(v80) = 28;
  std::string::~string(v39);
  std::string::string(v41, &unk_1031B4B4);
  LOBYTE(v80) = -127;
  std::string::string(v39, "UAnimRobotHasEquipLookDown");
  LOBYTE(v80) = -126;
  sub_102C3C40(this, v39, (char *)this + 1292, v41);
  LOBYTE(v80) = -127;
  std::string::~string(v39);
  LOBYTE(v80) = 28;
  std::string::~string(v41);
  std::string::string(v43, &unk_1031B4F8);
  LOBYTE(v80) = -125;
  std::string::string(v41, "UAnimRobotHasEquipSquatIdle");
  LOBYTE(v80) = -124;
  sub_102C3C40(this, v41, (char *)this + 1320, v43);
  LOBYTE(v80) = -125;
  std::string::~string(v41);
  LOBYTE(v80) = 28;
  std::string::~string(v43);
  std::string::string(v45, &unk_1031B540);
  LOBYTE(v80) = -123;
  std::string::string(v43, "UAnimRobotHasEquipSquatMove");
  LOBYTE(v80) = -122;
  sub_102C3C40(this, v43, (char *)this + 1348, v45);
  LOBYTE(v80) = -123;
  std::string::~string(v43);
  LOBYTE(v80) = 28;
  std::string::~string(v45);
  std::string::string(v47, &unk_1031B588);
  LOBYTE(v80) = -121;
  std::string::string(v45, "EnableDAnim");
  LOBYTE(v80) = -120;
  sub_102C3B80(this, v45, (char *)this + 1628, v47);
  LOBYTE(v80) = -121;
  std::string::~string(v45);
  LOBYTE(v80) = 28;
  std::string::~string(v47);
  std::string::string(v49, &unk_1031B5AC);
  LOBYTE(v80) = -119;
  std::string::string(v47, "DAnimRobotHasEquipIdle");
  LOBYTE(v80) = -118;
  sub_102C3C40(this, v47, (char *)this + 1376, v49);
  LOBYTE(v80) = -119;
  std::string::~string(v47);
  LOBYTE(v80) = 28;
  std::string::~string(v49);
  std::string::string(v51, &unk_1031B5EC);
  LOBYTE(v80) = -117;
  std::string::string(v49, "DAnimRobotHasEquipMove");
  LOBYTE(v80) = -116;
  sub_102C3C40(this, v49, (char *)this + 1404, v51);
  LOBYTE(v80) = -117;
  std::string::~string(v49);
  LOBYTE(v80) = 28;
  std::string::~string(v51);
  std::string::string(v53, &unk_1031B62C);
  LOBYTE(v80) = -115;
  std::string::string(v51, "DAnimRobotHasEquipUse");
  LOBYTE(v80) = -114;
  sub_102C3C40(this, v51, (char *)this + 1432, v53);
  LOBYTE(v80) = -115;
  std::string::~string(v51);
  LOBYTE(v80) = 28;
  std::string::~string(v53);
  std::string::string(v55, &unk_1031B66C);
  LOBYTE(v80) = -113;
  std::string::string(v53, "DAnimRobotHasEquipSquatIdle");
  LOBYTE(v80) = -112;
  sub_102C3C40(this, v53, (char *)this + 1572, v55);
  LOBYTE(v80) = -113;
  std::string::~string(v53);
  LOBYTE(v80) = 28;
  std::string::~string(v55);
  std::string::string(v57, &unk_1031B6B0);
  LOBYTE(v80) = -111;
  std::string::string(v55, "DAnimRobotHasEquipSquatMove");
  LOBYTE(v80) = -110;
  sub_102C3C40(this, v55, (char *)this + 1600, v57);
  LOBYTE(v80) = -111;
  std::string::~string(v55);
  LOBYTE(v80) = 28;
  std::string::~string(v57);
  std::string::string(v59, &unk_1031B6F4);
  LOBYTE(v80) = -109;
  std::string::string(v57, "OtherAnimNames");
  LOBYTE(v80) = -108;
  sub_102C4180(this, v57, (char *)this + 1632, v59);
  LOBYTE(v80) = -109;
  std::string::~string(v57);
  LOBYTE(v80) = 28;
  std::string::~string(v59);
  std::string::string(v61, &unk_1031B714);
  LOBYTE(v80) = -107;
  std::string::string(v59, "FxBindBoneNames");
  LOBYTE(v80) = -106;
  sub_102C4180(this, v59, (char *)this + 624, v61);
  LOBYTE(v80) = -107;
  std::string::~string(v59);
  LOBYTE(v80) = 28;
  std::string::~string(v61);
  std::string::string(v63, &unk_1031B73C);
  LOBYTE(v80) = -105;
  std::string::string(v61, "SDEquipmentUseName");
  LOBYTE(v80) = -104;
  sub_102C3C40(this, v61, (char *)this + 1728, v63);
  LOBYTE(v80) = -105;
  std::string::~string(v61);
  LOBYTE(v80) = 28;
  std::string::~string(v63);
  std::string::string(v65, &unk_1031B764);
  LOBYTE(v80) = -103;
  std::string::string(v63, "SDEquipmentUseRange");
  LOBYTE(v80) = -102;
  sub_102C3A00(this, v63, (char *)this + 1788, v65);
  LOBYTE(v80) = -103;
  std::string::~string(v63);
  LOBYTE(v80) = 28;
  std::string::~string(v65);
  std::string::string(v67, &unk_1031B78C);
  LOBYTE(v80) = -101;
  std::string::string(v65, "SDEquipmentUse2DName");
  LOBYTE(v80) = -100;
  sub_102C3C40(this, v65, (char *)this + 1648, v67);
  LOBYTE(v80) = -101;
  std::string::~string(v65);
  LOBYTE(v80) = 28;
  std::string::~string(v67);
  std::string::string(v69, &unk_1031B7B8);
  LOBYTE(v80) = -99;
  std::string::string(v67, "SDEquipmentAbateName");
  LOBYTE(v80) = -98;
  sub_102C3C40(this, v67, (char *)this + 1808, v69);
  LOBYTE(v80) = -99;
  std::string::~string(v67);
  LOBYTE(v80) = 28;
  std::string::~string(v69);
  std::string::string(v71, &unk_1031B7E4);
  LOBYTE(v80) = -97;
  std::string::string(v69, "SDEquipmentTakeOffName");
  LOBYTE(v80) = -96;
  sub_102C3C40(this, v69, (char *)this + 1888, v71);
  LOBYTE(v80) = -97;
  std::string::~string(v69);
  LOBYTE(v80) = 28;
  std::string::~string(v71);
  std::string::string(v73, &unk_1031B80C);
  LOBYTE(v80) = -95;
  std::string::string(v71, "SDEquipmentTakeUpName");
  LOBYTE(v80) = -94;
  sub_102C3C40(this, v71, (char *)this + 1968, v73);
  LOBYTE(v80) = -95;
  std::string::~string(v71);
  LOBYTE(v80) = 28;
  std::string::~string(v73);
  std::string::string(v75, &unk_1031B834);
  LOBYTE(v80) = -93;
  std::string::string(v73, "TurnFrameName");
  LOBYTE(v80) = -92;
  sub_102C3C40(this, v73, (char *)this + 2048, v75);
  LOBYTE(v80) = -93;
  std::string::~string(v73);
  LOBYTE(v80) = 28;
  std::string::~string(v75);
  std::string::string(v77, &unk_1031B854);
  LOBYTE(v80) = -91;
  std::string::string(v75, "TurnStartupSpeed");
  LOBYTE(v80) = -90;
  sub_102C3A00(this, v75, (char *)this + 2076, v77);
  LOBYTE(v80) = -91;
  std::string::~string(v75);
  LOBYTE(v80) = 28;
  std::string::~string(v77);
  std::string::string(v79, &unk_1031B878);
  LOBYTE(v80) = -89;
  std::string::string(v77, "TurnMaxSpeed");
  LOBYTE(v80) = -88;
  sub_102C3A00(this, v77, (char *)this + 2080, v79);
  LOBYTE(v80) = -89;
  std::string::~string(v77);
  LOBYTE(v80) = 28;
  std::string::~string(v79);
  return this;
}
