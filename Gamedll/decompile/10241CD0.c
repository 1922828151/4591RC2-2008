/*
 * func-name: ??0FTransformItem@GameClient@@QAE@XZ_0
 * func-address: 0x10241cd0
 * callers: 0x10009c7d
 * callees: 0x100076e9, 0x102c3c40
 */

GameClient::FTransformItem *__thiscall GameClient::FTransformItem::FTransformItem(GameClient::FTransformItem *this)
{
  _BYTE v3[28]; // [esp+10h] [ebp-44h] BYREF
  _BYTE v4[28]; // [esp+2Ch] [ebp-28h] BYREF
  int v5; // [esp+50h] [ebp-4h]

  GameClient::FItem::FItem(this);
  v5 = 0;
  *(_DWORD *)this = &GameClient::FTransformItem::`vftable';
  std::string::string((char *)this + 2200);
  LOBYTE(v5) = 1;
  std::string::operator=((char *)this + 2200, &unk_1031E538);
  std::string::string(v4, &unk_1031E53C);
  LOBYTE(v5) = 2;
  std::string::string(v3, "TransformItemName");
  LOBYTE(v5) = 3;
  sub_102C3C40(this, v3, (char *)this + 2200, v4);
  LOBYTE(v5) = 2;
  std::string::~string(v3);
  LOBYTE(v5) = 1;
  std::string::~string(v4);
  return this;
}
