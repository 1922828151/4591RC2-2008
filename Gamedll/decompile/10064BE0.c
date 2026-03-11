/*
 * func-name: ??4Weapon@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x10064be0
 * callers: 0x1000fcdb
 * callees: 0x10009345, 0x10018836
 */

int __thiscall GameClient::Weapon::operator=(int this, int a2)
{
  int v4; // eax
  int v5; // ebp
  int v6; // ebx
  float *v7; // ebx
  int v8; // edi
  int result; // eax
  int v10; // [esp+10h] [ebp-4h]
  int v11; // [esp+18h] [ebp+4h]

  GameClient::Equip::operator=(a2);
  *(_DWORD *)(this + 740) = *(_DWORD *)(a2 + 740);
  *(_DWORD *)(this + 744) = *(_DWORD *)(a2 + 744);
  *(_BYTE *)(this + 748) = *(_BYTE *)(a2 + 748);
  *(float *)(this + 752) = *(float *)(a2 + 752);
  *(_DWORD *)(this + 756) = *(_DWORD *)(a2 + 756);
  v4 = a2 - this;
  v5 = a2 + 772;
  v6 = this + 764;
  v10 = a2 - this;
  v11 = 2;
  while ( 1 )
  {
    *(float *)(v6 - 4) = *(float *)(v5 - 12);
    *(float *)v6 = *(float *)(v4 + v6);
    *(_DWORD *)(v6 + 4) = *(_DWORD *)(v5 - 4);
    *(float *)(v6 + 8) = *(float *)v5;
    *(_DWORD *)(v6 + 12) = *(_DWORD *)(v5 + 4);
    sub_10018836(v5 + 8);
    sub_10018836(v5 + 24);
    *(float *)(v6 + 48) = *(float *)(v5 + 40);
    *(_DWORD *)(v6 + 52) = *(_DWORD *)(v5 + 44);
    *(_DWORD *)(v6 + 56) = *(_DWORD *)(v5 + 48);
    *(float *)(v6 + 60) = *(float *)(v5 + 52);
    *(_DWORD *)(v6 + 64) = *(_DWORD *)(v5 + 56);
    v5 += 72;
    v6 += 72;
    if ( !--v11 )
      break;
    v4 = v10;
  }
  *(_DWORD *)(this + 904) = *(_DWORD *)(a2 + 904);
  *(float *)(this + 908) = *(float *)(a2 + 908);
  *(float *)(this + 912) = *(float *)(a2 + 912);
  *(float *)(this + 916) = *(float *)(a2 + 916);
  *(float *)(this + 920) = *(float *)(a2 + 920);
  *(float *)(this + 924) = *(float *)(a2 + 924);
  *(float *)(this + 928) = *(float *)(a2 + 928);
  *(_DWORD *)(this + 932) = *(_DWORD *)(a2 + 932);
  *(_DWORD *)(this + 936) = *(_DWORD *)(a2 + 936);
  *(_DWORD *)(this + 940) = *(_DWORD *)(a2 + 940);
  *(_DWORD *)(this + 944) = *(_DWORD *)(a2 + 944);
  *(_DWORD *)(this + 948) = *(_DWORD *)(a2 + 948);
  *(_DWORD *)(this + 952) = *(_DWORD *)(a2 + 952);
  *(float *)(this + 956) = *(float *)(a2 + 956);
  *(float *)(this + 960) = *(float *)(a2 + 960);
  std::string::operator=(this + 964, a2 + 964);
  std::string::operator=(this + 992, a2 + 992);
  std::string::operator=(this + 1020, a2 + 1020);
  std::string::operator=(this + 1048, a2 + 1048);
  *(_DWORD *)(this + 1076) = *(_DWORD *)(a2 + 1076);
  *(_DWORD *)(this + 1080) = *(_DWORD *)(a2 + 1080);
  std::string::operator=(this + 1084, a2 + 1084);
  std::string::operator=(this + 1112, a2 + 1112);
  *(_DWORD *)(this + 1140) = *(_DWORD *)(a2 + 1140);
  *(float *)(this + 1144) = *(float *)(a2 + 1144);
  *(_BYTE *)(this + 1148) = *(_BYTE *)(a2 + 1148);
  *(float *)(this + 1152) = *(float *)(a2 + 1152);
  *(float *)(this + 1156) = *(float *)(a2 + 1156);
  *(float *)(this + 1160) = *(float *)(a2 + 1160);
  std::string::operator=(this + 1164, a2 + 1164);
  std::string::operator=(this + 1192, a2 + 1192);
  *(_DWORD *)(this + 1220) = *(_DWORD *)(a2 + 1220);
  *(float *)(this + 1224) = *(float *)(a2 + 1224);
  *(_BYTE *)(this + 1228) = *(_BYTE *)(a2 + 1228);
  *(float *)(this + 1232) = *(float *)(a2 + 1232);
  *(float *)(this + 1236) = *(float *)(a2 + 1236);
  *(float *)(this + 1240) = *(float *)(a2 + 1240);
  std::string::operator=(this + 1244, a2 + 1244);
  std::string::operator=(this + 1272, a2 + 1272);
  *(_DWORD *)(this + 1300) = *(_DWORD *)(a2 + 1300);
  *(float *)(this + 1304) = *(float *)(a2 + 1304);
  *(_BYTE *)(this + 1308) = *(_BYTE *)(a2 + 1308);
  *(float *)(this + 1312) = *(float *)(a2 + 1312);
  *(float *)(this + 1316) = *(float *)(a2 + 1316);
  v7 = (float *)(a2 + 1324);
  *(float *)(this + 1320) = *(float *)(a2 + 1320);
  std::string::operator=(this + 1324, a2 + 1324);
  std::string::operator=(this + 1352, a2 + 1352);
  *(_DWORD *)(this + 1380) = *(_DWORD *)(a2 + 1380);
  *(float *)(this + 1384) = *(float *)(a2 + 1384);
  *(_BYTE *)(this + 1388) = *(_BYTE *)(a2 + 1388);
  v8 = a2 + 1404;
  *(float *)(this + 1392) = v7[17];
  *(float *)(this + 1396) = v7[18];
  *(float *)(this + 1400) = v7[19];
  std::string::operator=(this + 1404, v8);
  std::string::operator=(this + 1432, v8 + 28);
  *(_DWORD *)(this + 1460) = *(_DWORD *)(v8 + 56);
  *(float *)(this + 1464) = *(float *)(v8 + 60);
  *(_BYTE *)(this + 1468) = *(_BYTE *)(v8 + 64);
  result = this;
  *(float *)(this + 1472) = *(float *)(v8 + 68);
  *(float *)(this + 1476) = *(float *)(v8 + 72);
  *(float *)(this + 1480) = *(float *)(v8 + 76);
  return result;
}
