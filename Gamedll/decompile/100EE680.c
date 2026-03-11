/*
 * func-name: sub_100EE680
 * func-address: 0x100ee680
 * callers: 0x10001d34
 * callees: 0x10012742, 0x1001a221
 */

int __thiscall sub_100EE680(int this)
{
  int v3; // [esp+0h] [ebp-1Ch]
  int v4; // [esp+0h] [ebp-1Ch]
  int v5; // [esp+0h] [ebp-1Ch]
  int v6; // [esp+0h] [ebp-1Ch]
  int v7; // [esp+0h] [ebp-1Ch]
  int v8; // [esp+4h] [ebp-18h]
  int v9; // [esp+4h] [ebp-18h]
  int v10; // [esp+4h] [ebp-18h]
  int v11; // [esp+4h] [ebp-18h]
  int v12; // [esp+4h] [ebp-18h]

  sub_10012742((struct HUDBase *)this);
  *(_DWORD *)this = &GameClient::HUDEquip::`vftable';
  *(float *)(this + 44) = 0.0;
  *(float *)(this + 48) = 0.0;
  *(float *)(this + 52) = 0.0;
  sub_1001A221(v3, v8);
  sub_1001A221(v4, v9);
  sub_1001A221(v5, v10);
  sub_1001A221(v6, v11);
  sub_1001A221(v7, v12);
  *(float *)(this + 8) = 0.0;
  *(_DWORD *)(this + 40) = -926365496;
  *(float *)(this + 12) = 1.0;
  *(_DWORD *)(this + 24) = -926365496;
  *(_BYTE *)(this + 4) = 0;
  *(_BYTE *)(this + 5) = 0;
  *(_BYTE *)(this + 6) = 0;
  *(float *)(this + 56) = 0.0;
  *(_BYTE *)(this + 60) = 0;
  *(float *)(this + 16) = 0.0;
  *(_DWORD *)(this + 20) = 1;
  *(_DWORD *)(this + 36) = -939472696;
  *(_DWORD *)(this + 28) = -926416896;
  *(_DWORD *)(this + 32) = -939472896;
  return this;
}
