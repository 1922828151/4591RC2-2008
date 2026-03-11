/*
 * func-name: ?OnAnimation@RobotAsyncLoaderReport@GameClient@@UAEXHPAVAnimationSet@@@Z_0
 * func-address: 0x10111b60
 * callers: 0x1001a7f8
 * callees: 0x10014d3a, 0x1001940c, 0x102c9d62
 */

void __thiscall GameClient::RobotAsyncLoaderReport::OnAnimation(
        GameClient::RobotAsyncLoaderReport *this,
        int a2,
        struct AnimationSet *a3)
{
  int Key; // eax
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  void *v8; // eax
  int v9; // ebp
  int v10; // eax
  int v11; // eax
  int v12; // eax
  const char *v13; // eax
  int v14; // esi
  int v15; // eax
  const char *v16; // eax
  int v17; // ebp
  _BYTE *v18; // eax
  bool v19; // zf
  int v20; // eax
  _BYTE v21[28]; // [esp+14h] [ebp-9Ch] BYREF
  _BYTE v22[28]; // [esp+30h] [ebp-80h] BYREF
  _BYTE v23[28]; // [esp+4Ch] [ebp-64h] BYREF
  _BYTE v24[28]; // [esp+68h] [ebp-48h] BYREF
  _BYTE v25[28]; // [esp+84h] [ebp-2Ch] BYREF
  int v26; // [esp+ACh] [ebp-4h]

  if ( *((_DWORD *)this + 1) && a3 )
  {
    Key = AnimationSet::GetKey(a3);
    v5 = sub_10014D3A(Key);
    (*(void (__thiscall **)(int, struct AnimationSet *))(*(_DWORD *)(v5 + 4) + 4))(v5 + 4, a3);
    v6 = (*(int (__thiscall **)(_DWORD, struct AnimationSet *))(**((_DWORD **)this + 1) + 116))(
           *((_DWORD *)this + 1),
           a3);
    v7 = AnimationSet::GetKey(a3);
    *(_DWORD *)(sub_10014D3A(v7) + 48) = v6;
    v8 = (void *)AnimationSet::GetKey(a3);
    std::string::string(v23, v8);
    v26 = 0;
    v9 = std::string::length(v23);
    std::string::string(v24);
    LOBYTE(v26) = 1;
    std::string::string(v25);
    LOBYTE(v26) = 2;
    v10 = std::string::substr(v23, v21, v9 - 2, 1);
    LOBYTE(v26) = 3;
    std::string::operator=(v24, v10);
    LOBYTE(v26) = 2;
    std::string::~string(v21);
    v11 = std::string::substr(v23, v21, 0, 1);
    LOBYTE(v26) = 4;
    std::string::operator=(v25, v11);
    LOBYTE(v26) = 2;
    std::string::~string(v21);
    if ( *(_BYTE *)std::string::operator[](v24, 0) == 49 || *(_BYTE *)std::string::operator[](v24, 0) == 48 )
    {
      v12 = std::string::substr(v23, v21, v9 - 2, 2);
      LOBYTE(v26) = 5;
      v13 = (const char *)std::string::c_str(v12);
      v14 = atoi(v13) - 10;
      LOBYTE(v26) = 2;
      std::string::~string(v21);
      v15 = std::string::substr(v23, v22, v9 - 4, 2);
      LOBYTE(v26) = 6;
      v16 = (const char *)std::string::c_str(v15);
      v17 = atoi(v16) - 10;
      LOBYTE(v26) = 2;
      std::string::~string(v22);
      v18 = (_BYTE *)std::string::operator[](v25, 0);
      if ( v14 >= 0 )
      {
        v19 = *v18 == 117;
        v20 = v17 + 76;
        if ( !v19 )
          v20 = v17 + 79;
        *(_DWORD *)(*((_DWORD *)this + 1) + 4 * (v20 + v14 + 4 * v20)) = v6;
      }
      else if ( *v18 == 117 )
      {
        *(_DWORD *)(*((_DWORD *)this + 1) + 4 * v17 + 1640) = v6;
      }
      else
      {
        *(_DWORD *)(*((_DWORD *)this + 1) + 4 * v17 + 1672) = v6;
      }
    }
    GameClient::AdapterActor::RemoveAsyncHandle(*((GameClient::AdapterActor **)this + 1), a2);
    LOBYTE(v26) = 1;
    std::string::~string(v25);
    LOBYTE(v26) = 0;
    std::string::~string(v24);
    v26 = -1;
    std::string::~string(v23);
  }
}
