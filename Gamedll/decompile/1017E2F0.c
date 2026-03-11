/*
 * func-name: ?AddTempEquip@Robot@GameClient@@QAEXPAVEquip@2@H@Z_0
 * func-address: 0x1017e2f0
 * callers: 0x10018890
 * callees: 0x1000b96f, 0x1000dd7d, 0x100124ae, 0x100189d0, 0x102c71e0, 0x102c9d62, 0x102c9e3e
 */

void __thiscall GameClient::Robot::AddTempEquip(GameClient::Robot *this, struct GameClient::Equip *a2, int a3)
{
  int v4; // edx
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  unsigned int v8; // ebx
  char *v9; // esi
  int v10; // ebx
  int AnimationFileName; // eax
  int v12; // eax
  int v13; // eax
  _DWORD *AnimHandle; // ebp
  void (__thiscall *v15)(char *, _DWORD *); // edx
  char *v16; // esi
  int v17; // ebx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  _DWORD *v21; // ebp
  void (__thiscall *v22)(char *, _DWORD *); // edx
  int v23; // [esp-4h] [ebp-47Ch]
  int v24; // [esp-4h] [ebp-47Ch]
  int v25; // [esp+0h] [ebp-478h]
  int v26; // [esp+4h] [ebp-474h]
  int v27; // [esp+14h] [ebp-464h]
  int v28; // [esp+14h] [ebp-464h]
  int v29; // [esp+18h] [ebp-460h]
  _BYTE v30[28]; // [esp+1Ch] [ebp-45Ch] BYREF
  _BYTE v31[28]; // [esp+38h] [ebp-440h] BYREF
  _BYTE v32[4]; // [esp+54h] [ebp-424h] BYREF
  _BYTE v33[48]; // [esp+58h] [ebp-420h] BYREF
  _BYTE v34[28]; // [esp+88h] [ebp-3F0h] BYREF
  _BYTE v35[28]; // [esp+A4h] [ebp-3D4h] BYREF
  _BYTE v36[4]; // [esp+C0h] [ebp-3B8h] BYREF
  char v37; // [esp+C4h] [ebp-3B4h] BYREF
  _BYTE v38[4]; // [esp+294h] [ebp-1E4h] BYREF
  char v39; // [esp+298h] [ebp-1E0h] BYREF
  int v40; // [esp+474h] [ebp-4h]

  if ( a2 )
  {
    v4 = *((_DWORD *)this + 63);
    if ( v4 )
      v5 = (*((_DWORD *)this + 64) - v4) >> 2;
    else
      v5 = 0;
    v6 = *((_DWORD *)a2 + 62) - v5;
    v7 = *((_DWORD *)this + 67);
    v8 = v6 - 1;
    if ( !v7 || v8 >= (*((_DWORD *)this + 68) - v7) >> 2 )
      _invalid_parameter_noinfo();
    *(_DWORD *)(*((_DWORD *)this + 67) + 4 * v8) = a2;
    *((_DWORD *)a2 + 37) = this;
    sub_100189D0(v25, v26);
    v29 = *((_DWORD *)a2 + 2);
    v40 = 0;
    v9 = &v37;
    v10 = v29 + 1124;
    v27 = 9;
    do
    {
      v23 = sub_102C71E0(v31, v10);
      LOBYTE(v40) = 1;
      AnimationFileName = GameClient::FRobotFramework::GetAnimationFileName();
      std::operator+<char>(v34, AnimationFileName, v23);
      LOBYTE(v40) = 3;
      std::string::~string(v31);
      v12 = std::string::length(v34);
      std::string::substr(v34, v35, 0, v12 - 2);
      LOBYTE(v40) = 4;
      v13 = std::operator+<char>(v30, "U", v35);
      LOBYTE(v40) = 5;
      AnimHandle = (_DWORD *)GameClient::CombinRobot::GetAnimHandle((int)v32, v13);
      v15 = *(void (__thiscall **)(char *, _DWORD *))(*(_DWORD *)v9 + 4);
      *((_DWORD *)v9 - 1) = *AnimHandle;
      LOBYTE(v40) = 6;
      v15(v9, AnimHandle + 1);
      *((_DWORD *)v9 + 11) = AnimHandle[12];
      LOBYTE(v40) = 5;
      AnimationSet::~AnimationSet((AnimationSet *)v33);
      LOBYTE(v40) = 4;
      std::string::~string(v30);
      LOBYTE(v40) = 3;
      std::string::~string(v35);
      LOBYTE(v40) = 0;
      std::string::~string(v34);
      v10 += 28;
      v9 += 52;
      --v27;
    }
    while ( v27 );
    if ( *(_BYTE *)(v29 + 1628) )
    {
      v16 = &v39;
      v17 = v29 + 1376;
      v28 = 3;
      do
      {
        v24 = sub_102C71E0(v30, v17);
        LOBYTE(v40) = 7;
        v18 = GameClient::FRobotFramework::GetAnimationFileName();
        std::operator+<char>(v34, v18, v24);
        LOBYTE(v40) = 9;
        std::string::~string(v30);
        v19 = std::string::length(v34);
        std::string::substr(v34, v35, 0, v19 - 2);
        LOBYTE(v40) = 10;
        v20 = std::operator+<char>(v31, "D", v35);
        LOBYTE(v40) = 11;
        v21 = (_DWORD *)GameClient::CombinRobot::GetAnimHandle((int)v32, v20);
        v22 = *(void (__thiscall **)(char *, _DWORD *))(*(_DWORD *)v16 + 4);
        *((_DWORD *)v16 - 1) = *v21;
        LOBYTE(v40) = 12;
        v22(v16, v21 + 1);
        *((_DWORD *)v16 + 11) = v21[12];
        LOBYTE(v40) = 11;
        AnimationSet::~AnimationSet((AnimationSet *)v33);
        LOBYTE(v40) = 10;
        std::string::~string(v31);
        LOBYTE(v40) = 9;
        std::string::~string(v35);
        LOBYTE(v40) = 0;
        std::string::~string(v34);
        v17 += 28;
        v16 += 52;
        --v28;
      }
      while ( v28 );
    }
    sub_1000B96F(v36);
    v40 = 13;
    `eh vector destructor iterator'(v38, 0x34u, 9, (void (__thiscall *)(void *))sub_1000B451);
    v40 = -1;
    `eh vector destructor iterator'(v36, 0x34u, 9, (void (__thiscall *)(void *))sub_1000B451);
  }
}
