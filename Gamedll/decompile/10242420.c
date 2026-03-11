/*
 * func-name: ??0FWeapon@GameClient@@QAE@XZ_0
 * func-address: 0x10242420
 * callers: 0x10016f2c
 * callees: 0x100057f4, 0x10005a4c, 0x102c3880, 0x102c3a00, 0x102c3b80, 0x102c3c40, 0x102c4240, 0x102ca0d8
 */

GameClient::FWeapon *__thiscall GameClient::FWeapon::FWeapon(GameClient::FWeapon *this)
{
  int v3; // [esp+0h] [ebp-44Ch]
  int v4; // [esp+0h] [ebp-44Ch]
  int v5; // [esp+0h] [ebp-44Ch]
  int v6; // [esp+0h] [ebp-44Ch]
  int v7; // [esp+0h] [ebp-44Ch]
  int v8; // [esp+4h] [ebp-448h]
  int v9; // [esp+4h] [ebp-448h]
  int v10; // [esp+4h] [ebp-448h]
  int v11; // [esp+4h] [ebp-448h]
  int v12; // [esp+4h] [ebp-448h]
  float v13[7]; // [esp+14h] [ebp-438h] BYREF
  _BYTE v14[28]; // [esp+30h] [ebp-41Ch] BYREF
  GameClient::FWeapon *v15; // [esp+4Ch] [ebp-400h]
  _BYTE v16[28]; // [esp+50h] [ebp-3FCh] BYREF
  _BYTE v17[28]; // [esp+6Ch] [ebp-3E0h] BYREF
  _BYTE v18[28]; // [esp+88h] [ebp-3C4h] BYREF
  _BYTE v19[28]; // [esp+A4h] [ebp-3A8h] BYREF
  _BYTE v20[28]; // [esp+C0h] [ebp-38Ch] BYREF
  _BYTE v21[28]; // [esp+DCh] [ebp-370h] BYREF
  _BYTE v22[28]; // [esp+F8h] [ebp-354h] BYREF
  _BYTE v23[28]; // [esp+114h] [ebp-338h] BYREF
  _BYTE v24[28]; // [esp+130h] [ebp-31Ch] BYREF
  _BYTE v25[28]; // [esp+14Ch] [ebp-300h] BYREF
  _BYTE v26[28]; // [esp+168h] [ebp-2E4h] BYREF
  _BYTE v27[28]; // [esp+184h] [ebp-2C8h] BYREF
  _BYTE v28[28]; // [esp+1A0h] [ebp-2ACh] BYREF
  _BYTE v29[28]; // [esp+1BCh] [ebp-290h] BYREF
  _BYTE v30[28]; // [esp+1D8h] [ebp-274h] BYREF
  _BYTE v31[28]; // [esp+1F4h] [ebp-258h] BYREF
  _BYTE v32[28]; // [esp+210h] [ebp-23Ch] BYREF
  _BYTE v33[28]; // [esp+22Ch] [ebp-220h] BYREF
  _BYTE v34[28]; // [esp+248h] [ebp-204h] BYREF
  _BYTE v35[28]; // [esp+264h] [ebp-1E8h] BYREF
  _BYTE v36[28]; // [esp+280h] [ebp-1CCh] BYREF
  _BYTE v37[28]; // [esp+29Ch] [ebp-1B0h] BYREF
  _BYTE v38[28]; // [esp+2B8h] [ebp-194h] BYREF
  _BYTE v39[28]; // [esp+2D4h] [ebp-178h] BYREF
  _BYTE v40[28]; // [esp+2F0h] [ebp-15Ch] BYREF
  _BYTE v41[28]; // [esp+30Ch] [ebp-140h] BYREF
  _BYTE v42[28]; // [esp+328h] [ebp-124h] BYREF
  _BYTE v43[28]; // [esp+344h] [ebp-108h] BYREF
  _BYTE v44[28]; // [esp+360h] [ebp-ECh] BYREF
  _BYTE v45[28]; // [esp+37Ch] [ebp-D0h] BYREF
  _BYTE v46[28]; // [esp+398h] [ebp-B4h] BYREF
  _BYTE v47[28]; // [esp+3B4h] [ebp-98h] BYREF
  _BYTE v48[28]; // [esp+3D0h] [ebp-7Ch] BYREF
  _BYTE v49[28]; // [esp+3ECh] [ebp-60h] BYREF
  _BYTE v50[28]; // [esp+408h] [ebp-44h] BYREF
  _BYTE v51[28]; // [esp+424h] [ebp-28h] BYREF
  int v52; // [esp+448h] [ebp-4h]

  v15 = this;
  GameClient::FEquip::FEquip(this);
  v52 = 0;
  *(_DWORD *)this = &GameClient::FWeapon::`vftable';
  `eh vector constructor iterator'(
    (char *)this + 2084,
    0xA0u,
    2,
    (void (__thiscall *)(void *))GameClient::WeaponPattern::WeaponPattern,
    (void (__thiscall *)(void *))GameClient::WeaponPattern::~WeaponPattern);
  std::string::string((char *)this + 2412);
  std::string::string((char *)this + 2440);
  *((float *)this + 617) = 0.0;
  *((float *)this + 618) = 0.0;
  *((float *)this + 619) = 0.0;
  *((float *)this + 620) = 0.0;
  sub_100057F4(v3, v8);
  sub_100057F4(v4, v9);
  sub_100057F4(v5, v10);
  sub_100057F4(v6, v11);
  sub_100057F4(v7, v12);
  LOBYTE(v52) = 8;
  *((_DWORD *)this + 79) = 0;
  *((_DWORD *)this + 602) = 1;
  *((_BYTE *)this + 2404) = 1;
  std::string::operator=((char *)this + 2412, &unk_1031E59B);
  v13[0] = 200.0;
  v13[1] = 200.0;
  v13[2] = 200.0;
  *((float *)this + 617) = 200.0;
  *((float *)this + 618) = 200.0;
  v13[3] = 1.0;
  *((float *)this + 619) = 200.0;
  *((float *)this + 620) = 1.0;
  std::string::string(v14, &unk_1031E59C);
  LOBYTE(v52) = 9;
  std::string::string(v13, "WeaponSubFlag");
  LOBYTE(v52) = 10;
  sub_102C3880(this, v13, (char *)this + 2408, v14);
  LOBYTE(v52) = 9;
  std::string::~string(v13);
  LOBYTE(v52) = 8;
  std::string::~string(v14);
  std::string::string(v13, &unk_1031E5CC);
  LOBYTE(v52) = 11;
  std::string::string(v14, "OnlyPatternOne");
  LOBYTE(v52) = 12;
  sub_102C3B80(this, v14, (char *)this + 2404, v13);
  LOBYTE(v52) = 11;
  std::string::~string(v14);
  LOBYTE(v52) = 8;
  std::string::~string(v13);
  std::string::string(v13, &unk_1031E5F0);
  LOBYTE(v52) = 13;
  std::string::string(v14, "WP1Range");
  LOBYTE(v52) = 14;
  sub_102C3880(this, v14, (char *)this + 2196, v13);
  LOBYTE(v52) = 13;
  std::string::~string(v14);
  LOBYTE(v52) = 8;
  std::string::~string(v13);
  std::string::string(v13, &unk_1031E604);
  LOBYTE(v52) = 15;
  std::string::string(v14, "WP1BulletName");
  LOBYTE(v52) = 16;
  sub_102C3C40(this, v14, (char *)this + 2084, v13);
  LOBYTE(v52) = 15;
  std::string::~string(v14);
  LOBYTE(v52) = 8;
  std::string::~string(v13);
  std::string::string(v13, &unk_1031E620);
  LOBYTE(v52) = 17;
  std::string::string(v14, "WP1FireMode");
  LOBYTE(v52) = 18;
  sub_102C3880(this, v14, (char *)this + 2116, v13);
  LOBYTE(v52) = 17;
  std::string::~string(v14);
  LOBYTE(v52) = 8;
  std::string::~string(v13);
  std::string::string(v13, &unk_1031E64C);
  LOBYTE(v52) = 19;
  std::string::string(v14, "WP1Alternation");
  LOBYTE(v52) = 20;
  sub_102C3B80(this, v14, (char *)this + 2120, v13);
  LOBYTE(v52) = 19;
  std::string::~string(v14);
  LOBYTE(v52) = 8;
  std::string::~string(v13);
  std::string::string(v13, &unk_1031E680);
  LOBYTE(v52) = 21;
  std::string::string(v14, "WP1HorizontalShoot");
  LOBYTE(v52) = 22;
  sub_102C3B80(this, v14, (char *)this + 2121, v13);
  LOBYTE(v52) = 21;
  std::string::~string(v14);
  LOBYTE(v52) = 8;
  std::string::~string(v13);
  std::string::string(v13, &unk_1031E6A8);
  LOBYTE(v52) = 23;
  std::string::string(v14, "WP1ShootOnAnimPoint");
  LOBYTE(v52) = 24;
  sub_102C3B80(this, v14, (char *)this + 2122, v13);
  LOBYTE(v52) = 23;
  std::string::~string(v14);
  LOBYTE(v52) = 8;
  std::string::~string(v13);
  std::string::string(v13, &unk_1031E708);
  LOBYTE(v52) = 25;
  std::string::string(v14, "WP1DaltaShootTime");
  LOBYTE(v52) = 26;
  sub_102C3A00(this, v14, (char *)this + 2124, v13);
  LOBYTE(v52) = 25;
  std::string::~string(v14);
  LOBYTE(v52) = 8;
  std::string::~string(v13);
  std::string::string(v13, &unk_1031E72C);
  LOBYTE(v52) = 27;
  std::string::string(v14, "WP1Capacitance");
  LOBYTE(v52) = 28;
  sub_102C3880(this, v14, (char *)this + 2128, v13);
  LOBYTE(v52) = 27;
  std::string::~string(v14);
  LOBYTE(v52) = 8;
  std::string::~string(v13);
  std::string::string(v13, &unk_1031E74C);
  LOBYTE(v52) = 29;
  std::string::string(v14, "WP1BurstCount");
  LOBYTE(v52) = 30;
  sub_102C3880(this, v14, (char *)this + 2132, v13);
  LOBYTE(v52) = 29;
  std::string::~string(v14);
  LOBYTE(v52) = 8;
  std::string::~string(v13);
  std::string::string(v13, &unk_1031E768);
  LOBYTE(v52) = 31;
  std::string::string(v14, "WP1BurstInterval");
  LOBYTE(v52) = 32;
  sub_102C3A00(this, v14, (char *)this + 2136, v13);
  LOBYTE(v52) = 31;
  std::string::~string(v14);
  LOBYTE(v52) = 8;
  std::string::~string(v13);
  std::string::string(v13, &unk_1031E78C);
  LOBYTE(v52) = 33;
  std::string::string(v14, "WP1MultiBulletCount");
  LOBYTE(v52) = 34;
  sub_102C3880(this, v14, (char *)this + 2140, v13);
  LOBYTE(v52) = 33;
  std::string::~string(v14);
  LOBYTE(v52) = 8;
  std::string::~string(v13);
  std::string::string(v13, &unk_1031E7AC);
  LOBYTE(v52) = 35;
  std::string::string(v14, "WP1Rand");
  LOBYTE(v52) = 36;
  sub_102C3B80(this, v14, (char *)this + 2144, v13);
  LOBYTE(v52) = 35;
  std::string::~string(v14);
  LOBYTE(v52) = 8;
  std::string::~string(v13);
  std::string::string(v13, &unk_1031E7C4);
  LOBYTE(v52) = 37;
  std::string::string(v14, "WP1SubBulletOffsetLoc");
  LOBYTE(v52) = 38;
  sub_102C4240(this, v14, (char *)this + 2148, v13);
  LOBYTE(v52) = 37;
  std::string::~string(v14);
  LOBYTE(v52) = 8;
  std::string::~string(v13);
  std::string::string(v13, &unk_1031E7EC);
  LOBYTE(v52) = 39;
  std::string::string(v14, "WP1SubBulletOffsetAngle");
  LOBYTE(v52) = 40;
  sub_102C4240(this, v14, (char *)this + 2164, v13);
  LOBYTE(v52) = 39;
  std::string::~string(v14);
  LOBYTE(v52) = 8;
  std::string::~string(v13);
  std::string::string(v13, &unk_1031E814);
  LOBYTE(v52) = 41;
  std::string::string(v14, "WP1CumulationTime");
  LOBYTE(v52) = 42;
  sub_102C3A00(this, v14, (char *)this + 2180, v13);
  LOBYTE(v52) = 41;
  std::string::~string(v14);
  LOBYTE(v52) = 8;
  std::string::~string(v13);
  std::string::string(v13, &unk_1031E834);
  LOBYTE(v52) = 43;
  std::string::string(v14, "WP1CumulationTimeMin");
  LOBYTE(v52) = 44;
  sub_102C3A00(this, v14, (char *)this + 2184, v13);
  LOBYTE(v52) = 43;
  std::string::~string(v14);
  LOBYTE(v52) = 8;
  std::string::~string(v13);
  std::string::string(v13, &unk_1031E85C);
  LOBYTE(v52) = 45;
  std::string::string(v14, "WP1CumulationCapacitance");
  LOBYTE(v52) = 46;
  sub_102C3880(this, v14, (char *)this + 2192, v13);
  LOBYTE(v52) = 45;
  std::string::~string(v14);
  LOBYTE(v52) = 8;
  std::string::~string(v13);
  std::string::string(v13, &unk_1031E890);
  LOBYTE(v52) = 47;
  std::string::string(v14, "WP1Recoil");
  LOBYTE(v52) = 48;
  sub_102C3A00(this, v14, (char *)this + 2200, v13);
  LOBYTE(v52) = 47;
  std::string::~string(v14);
  LOBYTE(v52) = 8;
  std::string::~string(v13);
  std::string::string(v13, &unk_1031E8A8);
  LOBYTE(v52) = 49;
  std::string::string(v14, "WP1RecoilRange");
  LOBYTE(v52) = 50;
  sub_102C3A00(this, v14, (char *)this + 2204, v13);
  LOBYTE(v52) = 49;
  std::string::~string(v14);
  LOBYTE(v52) = 8;
  std::string::~string(v13);
  std::string::string(v13, &unk_1031E8C4);
  LOBYTE(v52) = 51;
  std::string::string(v14, "WP1RecoilRecover");
  LOBYTE(v52) = 52;
  sub_102C3A00(this, v14, (char *)this + 2208, v13);
  LOBYTE(v52) = 51;
  std::string::~string(v14);
  LOBYTE(v52) = 8;
  std::string::~string(v13);
  std::string::string(v13, &unk_1031E8E8);
  LOBYTE(v52) = 53;
  std::string::string(v14, "WP1OffsetMax");
  LOBYTE(v52) = 54;
  sub_102C3A00(this, v14, (char *)this + 2216, v13);
  LOBYTE(v52) = 53;
  std::string::~string(v14);
  LOBYTE(v52) = 8;
  std::string::~string(v13);
  std::string::string(v13, &unk_1031E904);
  LOBYTE(v52) = 55;
  std::string::string(v14, "WP1OffsetRangeMove");
  LOBYTE(v52) = 56;
  sub_102C3A00(this, v14, (char *)this + 2212, v13);
  LOBYTE(v52) = 55;
  std::string::~string(v14);
  LOBYTE(v52) = 8;
  std::string::~string(v13);
  std::string::string(v13, &unk_1031E928);
  LOBYTE(v52) = 57;
  std::string::string(v14, "WP1OffsetRecover");
  LOBYTE(v52) = 58;
  sub_102C3A00(this, v14, (char *)this + 2220, v13);
  LOBYTE(v52) = 57;
  std::string::~string(v14);
  LOBYTE(v52) = 8;
  std::string::~string(v13);
  std::string::string(v42, &unk_1031E950);
  LOBYTE(v52) = 59;
  std::string::string(v14, "WP1OffsetCoefLinear");
  LOBYTE(v52) = 60;
  sub_102C3A00(this, v14, (char *)this + 2224, v42);
  LOBYTE(v52) = 59;
  std::string::~string(v14);
  LOBYTE(v52) = 8;
  std::string::~string(v42);
  std::string::string(v18, &unk_1031E978);
  LOBYTE(v52) = 61;
  std::string::string(v42, "WP1OffsetCoefAngle");
  LOBYTE(v52) = 62;
  sub_102C3A00(this, v42, (char *)this + 2228, v18);
  LOBYTE(v52) = 61;
  std::string::~string(v42);
  LOBYTE(v52) = 8;
  std::string::~string(v18);
  std::string::string(v50, &unk_1031E9A0);
  LOBYTE(v52) = 63;
  std::string::string(v18, "WP1DelayShootTime");
  LOBYTE(v52) = 64;
  sub_102C3A00(this, v18, (char *)this + 2240, v50);
  LOBYTE(v52) = 63;
  std::string::~string(v18);
  LOBYTE(v52) = 8;
  std::string::~string(v50);
  std::string::string(v20, &unk_1031E9C4);
  LOBYTE(v52) = 65;
  std::string::string(v50, "WP2Range");
  LOBYTE(v52) = 66;
  sub_102C3880(this, v50, (char *)this + 2356, v20);
  LOBYTE(v52) = 65;
  std::string::~string(v50);
  LOBYTE(v52) = 8;
  std::string::~string(v20);
  std::string::string(v36, &unk_1031E9D8);
  LOBYTE(v52) = 67;
  std::string::string(v20, "WP2BulletName");
  LOBYTE(v52) = 68;
  sub_102C3C40(this, v20, (char *)this + 2244, v36);
  LOBYTE(v52) = 67;
  std::string::~string(v20);
  LOBYTE(v52) = 8;
  std::string::~string(v36);
  std::string::string(v22, &unk_1031E9F4);
  LOBYTE(v52) = 69;
  std::string::string(v36, "WP2FireMode");
  LOBYTE(v52) = 70;
  sub_102C3880(this, v36, (char *)this + 2276, v22);
  LOBYTE(v52) = 69;
  std::string::~string(v36);
  LOBYTE(v52) = 8;
  std::string::~string(v22);
  std::string::string(v44, &unk_1031EA20);
  LOBYTE(v52) = 71;
  std::string::string(v22, "WP2Alternation");
  LOBYTE(v52) = 72;
  sub_102C3B80(this, v22, (char *)this + 2280, v44);
  LOBYTE(v52) = 71;
  std::string::~string(v22);
  LOBYTE(v52) = 8;
  std::string::~string(v44);
  std::string::string(v24, &unk_1031EA54);
  LOBYTE(v52) = 73;
  std::string::string(v44, "WP2HorizontalShoot");
  LOBYTE(v52) = 74;
  sub_102C3B80(this, v44, (char *)this + 2281, v24);
  LOBYTE(v52) = 73;
  std::string::~string(v44);
  LOBYTE(v52) = 8;
  std::string::~string(v24);
  std::string::string(v38, &unk_1031EA78);
  LOBYTE(v52) = 75;
  std::string::string(v24, "WP2ShootOnAnimPoint");
  LOBYTE(v52) = 76;
  sub_102C3B80(this, v24, (char *)this + 2282, v38);
  LOBYTE(v52) = 75;
  std::string::~string(v24);
  LOBYTE(v52) = 8;
  std::string::~string(v38);
  std::string::string(v26, &unk_1031EAD8);
  LOBYTE(v52) = 77;
  std::string::string(v38, "WP2DaltaShootTime");
  LOBYTE(v52) = 78;
  sub_102C3A00(this, v38, (char *)this + 2284, v26);
  LOBYTE(v52) = 77;
  std::string::~string(v38);
  LOBYTE(v52) = 8;
  std::string::~string(v26);
  std::string::string(v48, &unk_1031EAFC);
  LOBYTE(v52) = 79;
  std::string::string(v26, "WP2Capacitance");
  LOBYTE(v52) = 80;
  sub_102C3880(this, v26, (char *)this + 2288, v48);
  LOBYTE(v52) = 79;
  std::string::~string(v26);
  LOBYTE(v52) = 8;
  std::string::~string(v48);
  std::string::string(v28, &unk_1031EB1C);
  LOBYTE(v52) = 81;
  std::string::string(v48, "WP2BurstCount");
  LOBYTE(v52) = 82;
  sub_102C3880(this, v48, (char *)this + 2292, v28);
  LOBYTE(v52) = 81;
  std::string::~string(v48);
  LOBYTE(v52) = 8;
  std::string::~string(v28);
  std::string::string(v40, &unk_1031EB38);
  LOBYTE(v52) = 83;
  std::string::string(v28, "WP2BurstInterval");
  LOBYTE(v52) = 84;
  sub_102C3A00(this, v28, (char *)this + 2296, v40);
  LOBYTE(v52) = 83;
  std::string::~string(v28);
  LOBYTE(v52) = 8;
  std::string::~string(v40);
  std::string::string(v30, &unk_1031EB5C);
  LOBYTE(v52) = 85;
  std::string::string(v40, "WP2MultiBulletCount");
  LOBYTE(v52) = 86;
  sub_102C3880(this, v40, (char *)this + 2300, v30);
  LOBYTE(v52) = 85;
  std::string::~string(v40);
  LOBYTE(v52) = 8;
  std::string::~string(v30);
  std::string::string(v46, &unk_1031EB7C);
  LOBYTE(v52) = 87;
  std::string::string(v30, "WP2Rand");
  LOBYTE(v52) = 88;
  sub_102C3B80(this, v30, (char *)this + 2304, v46);
  LOBYTE(v52) = 87;
  std::string::~string(v30);
  LOBYTE(v52) = 8;
  std::string::~string(v46);
  std::string::string(v32, &unk_1031EB94);
  LOBYTE(v52) = 89;
  std::string::string(v46, "WP2SubBulletOffsetLoc");
  LOBYTE(v52) = 90;
  sub_102C4240(this, v46, (char *)this + 2308, v32);
  LOBYTE(v52) = 89;
  std::string::~string(v46);
  LOBYTE(v52) = 8;
  std::string::~string(v32);
  std::string::string(v16, &unk_1031EBBC);
  LOBYTE(v52) = 91;
  std::string::string(v32, "WP2SubBulletOffsetAngle");
  LOBYTE(v52) = 92;
  sub_102C4240(this, v32, (char *)this + 2324, v16);
  LOBYTE(v52) = 91;
  std::string::~string(v32);
  LOBYTE(v52) = 8;
  std::string::~string(v16);
  std::string::string(v34, &unk_1031EBE4);
  LOBYTE(v52) = 93;
  std::string::string(v16, "WP2CumulationTime");
  LOBYTE(v52) = 94;
  sub_102C3A00(this, v16, (char *)this + 2340, v34);
  LOBYTE(v52) = 93;
  std::string::~string(v16);
  LOBYTE(v52) = 8;
  std::string::~string(v34);
  std::string::string(v17, &unk_1031EC04);
  LOBYTE(v52) = 95;
  std::string::string(v34, "WP2CumulationTimeMin");
  LOBYTE(v52) = 96;
  sub_102C3A00(this, v34, (char *)this + 2344, v17);
  LOBYTE(v52) = 95;
  std::string::~string(v34);
  LOBYTE(v52) = 8;
  std::string::~string(v17);
  std::string::string(v19, &unk_1031EC2C);
  LOBYTE(v52) = 97;
  std::string::string(v17, "WP2CumulationCapacitance");
  LOBYTE(v52) = 98;
  sub_102C3880(this, v17, (char *)this + 2352, v19);
  LOBYTE(v52) = 97;
  std::string::~string(v17);
  LOBYTE(v52) = 8;
  std::string::~string(v19);
  std::string::string(v21, &unk_1031EC60);
  LOBYTE(v52) = 99;
  std::string::string(v19, "WP2Recoil");
  LOBYTE(v52) = 100;
  sub_102C3A00(this, v19, (char *)this + 2360, v21);
  LOBYTE(v52) = 99;
  std::string::~string(v19);
  LOBYTE(v52) = 8;
  std::string::~string(v21);
  std::string::string(v23, &unk_1031EC78);
  LOBYTE(v52) = 101;
  std::string::string(v21, "WP2RecoilRange");
  LOBYTE(v52) = 102;
  sub_102C3A00(this, v21, (char *)this + 2364, v23);
  LOBYTE(v52) = 101;
  std::string::~string(v21);
  LOBYTE(v52) = 8;
  std::string::~string(v23);
  std::string::string(v25, &unk_1031EC94);
  LOBYTE(v52) = 103;
  std::string::string(v23, "WP2RecoilRecover");
  LOBYTE(v52) = 104;
  sub_102C3A00(this, v23, (char *)this + 2368, v25);
  LOBYTE(v52) = 103;
  std::string::~string(v23);
  LOBYTE(v52) = 8;
  std::string::~string(v25);
  std::string::string(v27, &unk_1031ECB8);
  LOBYTE(v52) = 105;
  std::string::string(v25, "WP2OffsetMax");
  LOBYTE(v52) = 106;
  sub_102C3A00(this, v25, (char *)this + 2376, v27);
  LOBYTE(v52) = 105;
  std::string::~string(v25);
  LOBYTE(v52) = 8;
  std::string::~string(v27);
  std::string::string(v29, &unk_1031ECD4);
  LOBYTE(v52) = 107;
  std::string::string(v27, "WP2OffsetRangeMove");
  LOBYTE(v52) = 108;
  sub_102C3A00(this, v27, (char *)this + 2372, v29);
  LOBYTE(v52) = 107;
  std::string::~string(v27);
  LOBYTE(v52) = 8;
  std::string::~string(v29);
  std::string::string(v31, &unk_1031ECF8);
  LOBYTE(v52) = 109;
  std::string::string(v29, "WP2OffsetRecover");
  LOBYTE(v52) = 110;
  sub_102C3A00(this, v29, (char *)this + 2380, v31);
  LOBYTE(v52) = 109;
  std::string::~string(v29);
  LOBYTE(v52) = 8;
  std::string::~string(v31);
  std::string::string(v33, &unk_1031ED20);
  LOBYTE(v52) = 111;
  std::string::string(v31, "WP2OffsetCoefLinear");
  LOBYTE(v52) = 112;
  sub_102C3A00(this, v31, (char *)this + 2384, v33);
  LOBYTE(v52) = 111;
  std::string::~string(v31);
  LOBYTE(v52) = 8;
  std::string::~string(v33);
  std::string::string(v35, &unk_1031ED48);
  LOBYTE(v52) = 113;
  std::string::string(v33, "WP2OffsetCoefAngle");
  LOBYTE(v52) = 114;
  sub_102C3A00(this, v33, (char *)this + 2388, v35);
  LOBYTE(v52) = 113;
  std::string::~string(v33);
  LOBYTE(v52) = 8;
  std::string::~string(v35);
  std::string::string(v37, &unk_1031ED70);
  LOBYTE(v52) = 115;
  std::string::string(v35, "WP2DelayShootTime");
  LOBYTE(v52) = 116;
  sub_102C3A00(this, v35, (char *)this + 2400, v37);
  LOBYTE(v52) = 115;
  std::string::~string(v35);
  LOBYTE(v52) = 8;
  std::string::~string(v37);
  std::string::string(v39, &unk_1031ED94);
  LOBYTE(v52) = 117;
  std::string::string(v37, "FxCumulationName");
  LOBYTE(v52) = 118;
  sub_102C3C40(this, v37, (char *)this + 2412, v39);
  LOBYTE(v52) = 117;
  std::string::~string(v37);
  LOBYTE(v52) = 8;
  std::string::~string(v39);
  std::string::string(v41, &unk_1031EDB8);
  LOBYTE(v52) = 119;
  std::string::string(v39, "FxCumulationBoneName");
  LOBYTE(v52) = 120;
  sub_102C3C40(this, v39, (char *)this + 2440, v41);
  LOBYTE(v52) = 119;
  std::string::~string(v39);
  LOBYTE(v52) = 8;
  std::string::~string(v41);
  std::string::string(v43, &unk_1031EDE8);
  LOBYTE(v52) = 121;
  std::string::string(v41, "SDCumulationName");
  LOBYTE(v52) = 122;
  sub_102C3C40(this, v41, (char *)this + 2484, v43);
  LOBYTE(v52) = 121;
  std::string::~string(v41);
  LOBYTE(v52) = 8;
  std::string::~string(v43);
  std::string::string(v45, &unk_1031EE10);
  LOBYTE(v52) = 123;
  std::string::string(v43, "SDCumulationFinishName");
  LOBYTE(v52) = 124;
  sub_102C3C40(this, v43, (char *)this + 2564, v45);
  LOBYTE(v52) = 123;
  std::string::~string(v43);
  LOBYTE(v52) = 8;
  std::string::~string(v45);
  std::string::string(v47, &unk_1031EE40);
  LOBYTE(v52) = 125;
  std::string::string(v45, "SDRecruitName");
  LOBYTE(v52) = 126;
  sub_102C3C40(this, v45, (char *)this + 2644, v47);
  LOBYTE(v52) = 125;
  std::string::~string(v45);
  LOBYTE(v52) = 8;
  std::string::~string(v47);
  std::string::string(v49, &unk_1031EE64);
  LOBYTE(v52) = 127;
  std::string::string(v47, "SDRecruitFinishName");
  LOBYTE(v52) = 0x80;
  sub_102C3C40(this, v47, (char *)this + 2724, v49);
  LOBYTE(v52) = 127;
  std::string::~string(v47);
  LOBYTE(v52) = 8;
  std::string::~string(v49);
  std::string::string(v51, &unk_1031EE90);
  LOBYTE(v52) = -127;
  std::string::string(v49, "SDChangeModeName");
  LOBYTE(v52) = -126;
  sub_102C3C40(this, v49, (char *)this + 2804, v51);
  LOBYTE(v52) = -127;
  std::string::~string(v49);
  LOBYTE(v52) = 8;
  std::string::~string(v51);
  return this;
}
