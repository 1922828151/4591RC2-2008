/*
 * func-name: sub_100EFB10
 * func-address: 0x100efb10
 * callers: 0x1000dcba
 * callees: 0x10012742, 0x10018593, 0x1001a221
 */

int __thiscall sub_100EFB10(int this)
{
  int v3; // [esp+0h] [ebp-20h]
  int v4; // [esp+0h] [ebp-20h]
  int v5; // [esp+0h] [ebp-20h]
  int v6; // [esp+0h] [ebp-20h]
  int v7; // [esp+0h] [ebp-20h]
  int v8; // [esp+0h] [ebp-20h]
  int v9; // [esp+0h] [ebp-20h]
  int v10; // [esp+0h] [ebp-20h]
  int v11; // [esp+0h] [ebp-20h]
  int v12; // [esp+4h] [ebp-1Ch]
  int v13; // [esp+4h] [ebp-1Ch]
  int v14; // [esp+4h] [ebp-1Ch]
  int v15; // [esp+4h] [ebp-1Ch]
  int v16; // [esp+4h] [ebp-1Ch]
  int v17; // [esp+4h] [ebp-1Ch]
  int v18; // [esp+4h] [ebp-1Ch]
  int v19; // [esp+4h] [ebp-1Ch]
  int v20; // [esp+4h] [ebp-1Ch]

  sub_10012742((struct HUDBase *)this);
  *(_DWORD *)this = &GameClient::HUDRobot::`vftable';
  *(_DWORD *)(this + 48) = sub_10018593();
  *(_DWORD *)(this + 52) = 0;
  sub_1001A221(v3, v12);
  sub_1001A221(v4, v13);
  sub_1001A221(v5, v14);
  sub_1001A221(v6, v15);
  sub_1001A221(v7, v16);
  sub_1001A221(v8, v17);
  sub_1001A221(v9, v18);
  sub_1001A221(v10, v19);
  sub_1001A221(v11, v20);
  *(float *)(this + 16) = 0.0;
  *(_BYTE *)(this + 4) = 1;
  *(_BYTE *)(this + 5) = 0;
  *(float *)(this + 20) = 1.0;
  *(_BYTE *)(this + 6) = 0;
  *(_BYTE *)(this + 7) = 0;
  *(_BYTE *)(this + 8) = 0;
  *(_BYTE *)(this + 9) = 0;
  *(float *)(this + 24) = 0.0;
  *(_BYTE *)(this + 10) = 0;
  *(float *)(this + 32) = 0.0;
  *(_DWORD *)(this + 12) = 1;
  *(float *)(this + 36) = 0.0;
  *(_DWORD *)(this + 28) = -922746881;
  *(float *)(this + 40) = 0.0;
  return this;
}
