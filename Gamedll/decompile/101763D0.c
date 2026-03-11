/*
 * func-name: ?AddEquip@Robot@GameClient@@QAEPAVEquip@2@PAV32@H@Z_0
 * func-address: 0x101763d0
 * callers: 0x10010c85
 * callees: 0x10007dc9, 0x1000dd7d, 0x100124ae, 0x100189d0, 0x102c71e0, 0x102c9d62, 0x102c9e3e
 */

struct GameClient::Equip *__thiscall GameClient::Robot::AddEquip(
        GameClient::Robot *this,
        struct GameClient::Equip *a2,
        unsigned int a3)
{
  int v4; // ecx
  unsigned int i; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // edi
  int v9; // ecx
  char *v10; // edi
  int v11; // ebx
  int AnimationFileName; // eax
  int v13; // eax
  int v14; // eax
  _DWORD *AnimHandle; // ebp
  void (__thiscall *v16)(char *, _DWORD *); // edx
  char *v17; // edi
  int v18; // ebx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  _DWORD *v22; // ebp
  void (__thiscall *v23)(char *, _DWORD *); // edx
  int v24; // edi
  int v25; // eax
  int v26; // edi
  int v27; // eax
  int v29; // [esp-4h] [ebp-480h]
  int v30; // [esp-4h] [ebp-480h]
  int v31; // [esp+0h] [ebp-47Ch]
  int v32; // [esp+4h] [ebp-478h]
  int v33; // [esp+14h] [ebp-468h]
  int v34; // [esp+14h] [ebp-468h]
  int v35; // [esp+18h] [ebp-464h]
  int v36; // [esp+1Ch] [ebp-460h]
  _BYTE v37[28]; // [esp+20h] [ebp-45Ch] BYREF
  _BYTE v38[28]; // [esp+3Ch] [ebp-440h] BYREF
  _BYTE v39[4]; // [esp+58h] [ebp-424h] BYREF
  _BYTE v40[48]; // [esp+5Ch] [ebp-420h] BYREF
  _BYTE v41[28]; // [esp+8Ch] [ebp-3F0h] BYREF
  _BYTE v42[28]; // [esp+A8h] [ebp-3D4h] BYREF
  _BYTE v43[4]; // [esp+C4h] [ebp-3B8h] BYREF
  char v44; // [esp+C8h] [ebp-3B4h] BYREF
  _BYTE v45[4]; // [esp+298h] [ebp-1E4h] BYREF
  char v46; // [esp+29Ch] [ebp-1E0h] BYREF
  int v47; // [esp+478h] [ebp-4h]

  if ( (a3 & 0x80000000) != 0 )
    return 0;
  v4 = *((_DWORD *)this + 63);
  if ( !v4 || a3 >= (*((_DWORD *)this + 64) - v4) >> 2 )
    return 0;
  for ( i = 0; ; ++i )
  {
    v6 = *((_DWORD *)this + 63);
    if ( !v6 )
      break;
    if ( i >= (*((_DWORD *)this + 64) - v6) >> 2 )
    {
      if ( a3 < (*((_DWORD *)this + 64) - v6) >> 2 )
        goto LABEL_15;
      break;
    }
    v7 = *((_DWORD *)this + 63);
    if ( *(_DWORD *)(v7 + 4 * i) )
    {
      if ( !v7 || i >= (*((_DWORD *)this + 64) - v7) >> 2 )
        _invalid_parameter_noinfo();
      if ( *(struct GameClient::Equip **)(*((_DWORD *)this + 63) + 4 * i) == a2 )
        return 0;
    }
  }
  _invalid_parameter_noinfo();
LABEL_15:
  v8 = *(_DWORD *)(*((_DWORD *)this + 63) + 4 * a3);
  v9 = *((_DWORD *)this + 63);
  v35 = v8;
  if ( !v9 || a3 >= (*((_DWORD *)this + 64) - v9) >> 2 )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*((_DWORD *)this + 63) + 4 * a3) = a2;
  if ( a2 )
  {
    *((_DWORD *)a2 + 37) = this;
    sub_100189D0(v31, v32);
    v36 = *((_DWORD *)a2 + 2);
    v47 = 0;
    v10 = &v44;
    v11 = v36 + 1124;
    v33 = 9;
    do
    {
      v29 = sub_102C71E0(v38, v11);
      LOBYTE(v47) = 1;
      AnimationFileName = GameClient::FRobotFramework::GetAnimationFileName();
      std::operator+<char>(v41, AnimationFileName, v29);
      LOBYTE(v47) = 3;
      std::string::~string(v38);
      v13 = std::string::length(v41);
      std::string::substr(v41, v42, 0, v13 - 2);
      LOBYTE(v47) = 4;
      v14 = std::operator+<char>(v37, "U", v42);
      LOBYTE(v47) = 5;
      AnimHandle = (_DWORD *)GameClient::CombinRobot::GetAnimHandle((int)v39, v14);
      v16 = *(void (__thiscall **)(char *, _DWORD *))(*(_DWORD *)v10 + 4);
      *((_DWORD *)v10 - 1) = *AnimHandle;
      LOBYTE(v47) = 6;
      v16(v10, AnimHandle + 1);
      *((_DWORD *)v10 + 11) = AnimHandle[12];
      LOBYTE(v47) = 5;
      AnimationSet::~AnimationSet((AnimationSet *)v40);
      LOBYTE(v47) = 4;
      std::string::~string(v37);
      LOBYTE(v47) = 3;
      std::string::~string(v42);
      LOBYTE(v47) = 0;
      std::string::~string(v41);
      v11 += 28;
      v10 += 52;
      --v33;
    }
    while ( v33 );
    if ( *(_BYTE *)(v36 + 1628) )
    {
      v17 = &v46;
      v18 = v36 + 1376;
      v34 = 3;
      do
      {
        v30 = sub_102C71E0(v37, v18);
        LOBYTE(v47) = 7;
        v19 = GameClient::FRobotFramework::GetAnimationFileName();
        std::operator+<char>(v41, v19, v30);
        LOBYTE(v47) = 9;
        std::string::~string(v37);
        v20 = std::string::length(v41);
        std::string::substr(v41, v42, 0, v20 - 2);
        LOBYTE(v47) = 10;
        v21 = std::operator+<char>(v38, "D", v42);
        LOBYTE(v47) = 11;
        v22 = (_DWORD *)GameClient::CombinRobot::GetAnimHandle((int)v39, v21);
        v23 = *(void (__thiscall **)(char *, _DWORD *))(*(_DWORD *)v17 + 4);
        *((_DWORD *)v17 - 1) = *v22;
        LOBYTE(v47) = 12;
        v23(v17, v22 + 1);
        *((_DWORD *)v17 + 11) = v22[12];
        LOBYTE(v47) = 11;
        AnimationSet::~AnimationSet((AnimationSet *)v40);
        LOBYTE(v47) = 10;
        std::string::~string(v38);
        LOBYTE(v47) = 9;
        std::string::~string(v42);
        LOBYTE(v47) = 0;
        std::string::~string(v41);
        v18 += 28;
        v17 += 52;
        --v34;
      }
      while ( v34 );
    }
    v24 = *((_DWORD *)this + 43);
    v25 = *(_DWORD *)(v24 + 1748);
    v26 = v24 + 1744;
    if ( !v25 || a3 >= (*(_DWORD *)(v26 + 8) - v25) / 936 )
      _invalid_parameter_noinfo();
    sub_10007DC9((int)v43);
    v47 = 13;
    `eh vector destructor iterator'(v45, 0x34u, 9, (void (__thiscall *)(void *))sub_1000B451);
    v47 = -1;
    `eh vector destructor iterator'(v43, 0x34u, 9, (void (__thiscall *)(void *))sub_1000B451);
    v8 = v35;
  }
  v27 = *((_DWORD *)this + 57);
  if ( v27 && v27 == v8 )
    *((_DWORD *)this + 57) = 0;
  if ( v8 )
    *(_DWORD *)(v8 + 148) = 0;
  return (struct GameClient::Equip *)v8;
}
