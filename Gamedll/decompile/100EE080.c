/*
 * func-name: sub_100EE080
 * func-address: 0x100ee080
 * callers: 0x100147f9
 * callees: 0x10001de3, 0x1000d3cd
 */

int __thiscall sub_100EE080(struct HUDBase *this)
{
  int v3; // [esp+0h] [ebp-18h]
  int v4; // [esp+0h] [ebp-18h]
  int v5; // [esp+0h] [ebp-18h]
  int v6; // [esp+0h] [ebp-18h]
  int v7; // [esp+0h] [ebp-18h]
  int v8; // [esp+4h] [ebp-14h]
  int v9; // [esp+4h] [ebp-14h]
  int v10; // [esp+4h] [ebp-14h]
  int v11; // [esp+4h] [ebp-14h]
  int v12; // [esp+4h] [ebp-14h]

  *(_DWORD *)this = &GameClient::HUDEquip::`vftable';
  sub_10001DE3(v3, v8);
  sub_10001DE3(v4, v9);
  sub_10001DE3(v5, v10);
  sub_10001DE3(v6, v11);
  sub_10001DE3(v7, v12);
  return sub_1000D3CD(this);
}
