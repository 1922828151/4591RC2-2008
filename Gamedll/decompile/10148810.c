/*
 * func-name: sub_10148810
 * func-address: 0x10148810
 * callers: 0x10008918
 * callees: 0x100057f4, 0x100081ed, 0x100145c9, 0x102c1270, 0x102c9ea2
 */

int __thiscall sub_10148810(int this)
{
  int v3; // [esp+4h] [ebp-24h]
  int v4; // [esp+4h] [ebp-24h]
  int v5; // [esp+4h] [ebp-24h]
  int v6; // [esp+4h] [ebp-24h]
  int v7; // [esp+8h] [ebp-20h]
  int v8; // [esp+8h] [ebp-20h]
  int v9; // [esp+8h] [ebp-20h]
  int v10; // [esp+8h] [ebp-20h]

  GameClient::DataObject::DataObject((GameClient::DataObject *)this);
  *(_DWORD *)this = &GameClient::Bullet::`vftable';
  *(float *)(this + 12) = 0.0;
  *(float *)(this + 16) = 0.0;
  *(float *)(this + 20) = 0.0;
  *(float *)(this + 24) = 0.0;
  *(float *)(this + 28) = 0.0;
  *(float *)(this + 32) = 0.0;
  *(float *)(this + 36) = 0.0;
  *(float *)(this + 40) = 0.0;
  *(float *)(this + 44) = 0.0;
  *(float *)(this + 48) = 0.0;
  *(float *)(this + 52) = 0.0;
  *(float *)(this + 56) = 0.0;
  *(float *)(this + 64) = 0.0;
  *(float *)(this + 68) = 0.0;
  *(float *)(this + 72) = 0.0;
  *(float *)(this + 80) = 0.0;
  *(float *)(this + 84) = 0.0;
  *(float *)(this + 88) = 0.0;
  *(float *)(this + 96) = 0.0;
  *(float *)(this + 100) = 0.0;
  *(float *)(this + 104) = 0.0;
  memset((void *)(this + 48), 0, 0x40u);
  sub_102C1270(1.0);
  *(float *)(this + 108) = 1.0;
  *(_BYTE *)(this + 112) = 0;
  *(_DWORD *)(this + 120) = 0;
  *(_DWORD *)(this + 124) = 0;
  *(_DWORD *)(this + 128) = 0;
  *(float *)(this + 140) = 10.0;
  *(float *)(this + 160) = 0.0;
  *(float *)(this + 164) = 0.0;
  *(float *)(this + 168) = 0.0;
  sub_100057F4(v3, v7);
  sub_100057F4(v4, v8);
  sub_100145C9(v5, v9);
  sub_100145C9(v6, v10);
  *(float *)(this + 144) = 0.0;
  *(double *)(this + 152) = 0.0;
  *(_DWORD *)(this + 132) = -1;
  *(_DWORD *)(this + 136) = -1;
  *(_DWORD *)(this + 172) = 0;
  *(_DWORD *)(this + 176) = -1;
  std::string::operator=(this + 180, &unk_10313D40);
  std::string::operator=(this + 208, &unk_10313D41);
  *(_DWORD *)(this + 236) = 0;
  std::string::operator=(this + 260, &unk_10313D42);
  std::string::operator=(this + 288, &unk_10313D43);
  *(_DWORD *)(this + 316) = 0;
  std::string::operator=(this + 460, &unk_10313D44);
  std::string::operator=(this + 488, &unk_10313D45);
  std::string::operator=(this + 340, &unk_10313D46);
  std::string::operator=(this + 368, &unk_10313D47);
  return this;
}
