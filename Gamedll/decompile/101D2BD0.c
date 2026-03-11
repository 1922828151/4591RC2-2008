/*
 * func-name: ??0Skill@GameClient@@QAE@K@Z_0
 * func-address: 0x101d2bd0
 * callers: 0x10015488
 * callees: 0x100057f4, 0x100081ed, 0x100145c9
 */

GameClient::Skill *__thiscall GameClient::Skill::Skill(GameClient::Skill *this, unsigned int a2)
{
  int v4; // [esp+0h] [ebp-20h]
  int v5; // [esp+0h] [ebp-20h]
  int v6; // [esp+0h] [ebp-20h]
  int v7; // [esp+0h] [ebp-20h]
  int v8; // [esp+0h] [ebp-20h]
  int v9; // [esp+0h] [ebp-20h]
  int v10; // [esp+4h] [ebp-1Ch]
  int v11; // [esp+4h] [ebp-1Ch]
  int v12; // [esp+4h] [ebp-1Ch]
  int v13; // [esp+4h] [ebp-1Ch]
  int v14; // [esp+4h] [ebp-1Ch]
  int v15; // [esp+4h] [ebp-1Ch]

  GameClient::DataObject::DataObject(this);
  *(_DWORD *)this = &GameClient::Skill::`vftable';
  *((_DWORD *)this + 3) = a2;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 0;
  sub_100145C9(v4, v10);
  sub_100145C9(v5, v11);
  sub_100145C9(v6, v12);
  sub_100057F4(v7, v13);
  sub_100057F4(v8, v14);
  sub_100057F4(v9, v15);
  *((float *)this + 14) = 0.0;
  *((float *)this + 15) = 0.0;
  *((float *)this + 16) = 0.0;
  *((_DWORD *)this + 4) = 3;
  std::string::operator=((char *)this + 68, &unk_10316CC4);
  std::string::operator=((char *)this + 96, &unk_10316CC5);
  std::string::operator=((char *)this + 188, &unk_10316CC6);
  std::string::operator=((char *)this + 216, &unk_10316CC7);
  return this;
}
