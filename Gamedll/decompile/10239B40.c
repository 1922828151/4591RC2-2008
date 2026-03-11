/*
 * func-name: ??1FRobotBody@GameClient@@UAE@XZ_0
 * func-address: 0x10239b40
 * callers: 0x10017cd3
 * callees: 0x10003fe9, 0x10006127, 0x10008f8f, 0x10013a6b, 0x10014c90, 0x102c9d50
 */

void __thiscall GameClient::FRobotBody::~FRobotBody(GameClient::FRobotBody *this)
{
  void *v2; // eax
  void *v3; // eax
  int v4; // [esp+0h] [ebp-20h]
  int v5; // [esp+0h] [ebp-20h]
  int v6; // [esp+0h] [ebp-20h]
  int v7; // [esp+0h] [ebp-20h]
  int v8; // [esp+0h] [ebp-20h]
  int v9; // [esp+4h] [ebp-1Ch]
  int v10; // [esp+4h] [ebp-1Ch]
  int v11; // [esp+4h] [ebp-1Ch]
  int v12; // [esp+4h] [ebp-1Ch]
  int v13; // [esp+4h] [ebp-1Ch]

  *(_DWORD *)this = &GameClient::FRobotBody::`vftable';
  std::string::~string((char *)this + 988);
  std::string::~string((char *)this + 960);
  sub_10014C90(v4, v9);
  sub_10014C90(v5, v10);
  sub_10014C90(v6, v11);
  sub_10014C90(v7, v12);
  sub_10014C90(v8, v13);
  std::string::~string((char *)this + 520);
  sub_10003FE9();
  sub_10003FE9();
  v2 = (void *)*((_DWORD *)this + 119);
  if ( v2 )
  {
    sub_10006127(v2, *((_DWORD *)this + 120));
    operator delete(*((void **)this + 119));
  }
  *((_DWORD *)this + 119) = 0;
  *((_DWORD *)this + 120) = 0;
  *((_DWORD *)this + 121) = 0;
  sub_10003FE9();
  sub_10003FE9();
  v3 = (void *)*((_DWORD *)this + 107);
  if ( v3 )
  {
    sub_10008F8F(v3, *((_DWORD *)this + 108));
    operator delete(*((void **)this + 107));
  }
  *((_DWORD *)this + 107) = 0;
  *((_DWORD *)this + 108) = 0;
  *((_DWORD *)this + 109) = 0;
  std::string::~string((char *)this + 396);
  std::string::~string((char *)this + 276);
  GameClient::FSystemPart::~FSystemPart(this);
}
