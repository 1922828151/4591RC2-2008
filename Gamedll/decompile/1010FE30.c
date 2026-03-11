/*
 * func-name: ?LoadFPVHandModel@CombinRobot@GameClient@@QAE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z_0
 * func-address: 0x1010fe30
 * callers: 0x10014655
 * callees: 0x102c71e0, 0x102c7220, 0x102c7580
 */

char __thiscall GameClient::CombinRobot::LoadFPVHandModel(int *this, _DWORD *a2)
{
  int v3; // ebx
  int *v4; // edi
  int v5; // ebp
  void *v6; // ecx
  int v7; // eax
  int v8; // eax
  void (__thiscall *v9)(int *, _BYTE *, _BYTE *, int); // edx
  int v10; // eax
  void (__thiscall *v11)(int *, _BYTE *, _BYTE *, int); // edx
  int v12; // eax
  int (__thiscall *v13)(int *, _BYTE *, _BYTE *, int); // edx
  int v14; // eax
  int (__thiscall *v15)(int *, _BYTE *, _BYTE *, int); // edx
  int v17; // eax
  void (__thiscall *v18)(int *, _BYTE *, _BYTE *, int); // edx
  struct Model *v19; // eax
  void (__thiscall *v20)(int *, _BYTE *, _BYTE *, int); // edx
  struct Model *v21; // eax
  int (__thiscall *v22)(int *, _BYTE *, _BYTE *, int); // edx
  struct Model *v23; // eax
  int (__thiscall *v24)(int *, _BYTE *, _BYTE *, int); // edx
  _DWORD v25[8]; // [esp-14h] [ebp-DCh] BYREF
  _BYTE *v26; // [esp+Ch] [ebp-BCh]
  int v27; // [esp+10h] [ebp-B8h]
  char v28; // [esp+2Bh] [ebp-9Dh]
  int v29; // [esp+2Ch] [ebp-9Ch]
  _BYTE v30[28]; // [esp+30h] [ebp-98h] BYREF
  _BYTE v31[28]; // [esp+4Ch] [ebp-7Ch] BYREF
  _BYTE v32[28]; // [esp+68h] [ebp-60h] BYREF
  _BYTE v33[28]; // [esp+84h] [ebp-44h] BYREF
  _DWORD v34[7]; // [esp+A0h] [ebp-28h] BYREF
  int v35; // [esp+C4h] [ebp-4h]

  v3 = 0;
  v29 = 0;
  if ( !a2[5] )
    return 0;
  v4 = this + 349;
  if ( !this[349] )
    goto LABEL_4;
  v5 = sub_102C7580(v34, a2);
  v6 = (void *)(*v4 + 320);
  v35 = 0;
  v7 = sub_102C7220(v31, v6);
  v35 = 1;
  v8 = sub_102C71E0(v30, v7);
  v3 = 7;
  v35 = 2;
  v29 = 7;
  v28 = 1;
  if ( !(unsigned __int8)std::operator==<char>(v8, v5) )
LABEL_4:
    v28 = 0;
  v35 = 1;
  if ( (v3 & 4) != 0 )
  {
    v3 &= ~4u;
    v29 = v3;
    std::string::~string(v30);
  }
  v35 = 0;
  if ( (v3 & 2) != 0 )
  {
    v3 &= ~2u;
    v29 = v3;
    std::string::~string(v31);
  }
  v35 = -1;
  if ( (v3 & 1) != 0 )
    std::string::~string(v34);
  if ( v28 )
  {
    std::string::string(v30, "Weapon_Point_L");
    v35 = 3;
    std::string::string(v31, "WeaponPointLFPV");
    v9 = *(void (__thiscall **)(int *, _BYTE *, _BYTE *, int))(*this + 124);
    v27 = *v4;
    LOBYTE(v35) = 4;
    v9(this, v31, v30, v27);
    LOBYTE(v35) = 3;
    std::string::~string(v31);
    v35 = -1;
    std::string::~string(v30);
    std::string::string(v31, "Weapon_Point_R");
    v35 = 5;
    std::string::string(v30, "WeaponPointRFPV");
    v10 = *this;
    v27 = *v4;
    v26 = v31;
    v11 = *(void (__thiscall **)(int *, _BYTE *, _BYTE *, int))(v10 + 124);
    LOBYTE(v35) = 6;
    v11(this, v30, v31, v27);
    LOBYTE(v35) = 5;
    std::string::~string(v30);
    v35 = -1;
    std::string::~string(v31);
    std::string::string(v31, "Hand1FPV_LeftArm_b");
    v35 = 7;
    std::string::string(v30, "RightHandBase");
    v12 = *this;
    v27 = *v4;
    v26 = v31;
    v13 = *(int (__thiscall **)(int *, _BYTE *, _BYTE *, int))(v12 + 124);
    LOBYTE(v35) = 8;
    this[451] = v13(this, v30, v31, v27);
    LOBYTE(v35) = 7;
    std::string::~string(v30);
    v35 = -1;
    std::string::~string(v31);
    std::string::string(v31, "Hand1FPV_RightArm_b");
    v35 = 9;
    std::string::string(v30, "RightHandBase");
    v14 = *this;
    v27 = *v4;
    v26 = v31;
    v15 = *(int (__thiscall **)(int *, _BYTE *, _BYTE *, int))(v14 + 124);
    LOBYTE(v35) = 10;
    this[452] = v15(this, v30, v31, v27);
    LOBYTE(v35) = 9;
    std::string::~string(v30);
    v35 = -1;
    std::string::~string(v31);
    return 0;
  }
  if ( *v4 )
    Precacher::PurgeModel((struct Model **)this + 349);
  v27 = 1;
  v26 = 0;
  v25[7] = 0;
  v29 = (int)v25;
  this[452] = 0;
  this[451] = 0;
  std::operator+<char>(v25, a2, ".reb");
  v17 = Precacher::CacheModel();
  *v4 = v17;
  if ( !v17 )
    return 0;
  std::string::string(v31, "Weapon_Point_L");
  v35 = 11;
  std::string::string(v30, "WeaponPointLFPV");
  v18 = *(void (__thiscall **)(int *, _BYTE *, _BYTE *, int))(*this + 124);
  v27 = *v4;
  LOBYTE(v35) = 12;
  v18(this, v30, v31, v27);
  LOBYTE(v35) = 11;
  std::string::~string(v30);
  v35 = -1;
  std::string::~string(v31);
  std::string::string(v31, "Weapon_Point_R");
  v35 = 13;
  std::string::string(v30, "WeaponPointRFPV");
  v19 = (struct Model *)*this;
  v27 = *v4;
  v26 = v31;
  v20 = (void (__thiscall *)(int *, _BYTE *, _BYTE *, int))*((_DWORD *)v19 + 31);
  LOBYTE(v35) = 14;
  v20(this, v30, v31, v27);
  LOBYTE(v35) = 13;
  std::string::~string(v30);
  v35 = -1;
  std::string::~string(v31);
  std::string::string(v31, "Hand1FPV_LeftArm_b");
  v35 = 15;
  std::string::string(v30, "RightHandBase");
  v21 = (struct Model *)*this;
  v27 = *v4;
  v26 = v31;
  v22 = (int (__thiscall *)(int *, _BYTE *, _BYTE *, int))*((_DWORD *)v21 + 31);
  LOBYTE(v35) = 16;
  this[451] = v22(this, v30, v31, v27);
  LOBYTE(v35) = 15;
  std::string::~string(v30);
  v35 = -1;
  std::string::~string(v31);
  std::string::string(v33, "Hand1FPV_RightArm_b");
  v35 = 17;
  std::string::string(v32, "RightHandBase");
  v23 = (struct Model *)*this;
  v27 = *v4;
  v26 = v33;
  v24 = (int (__thiscall *)(int *, _BYTE *, _BYTE *, int))*((_DWORD *)v23 + 31);
  LOBYTE(v35) = 18;
  this[452] = v24(this, v32, v33, v27);
  LOBYTE(v35) = 17;
  std::string::~string(v32);
  v35 = -1;
  std::string::~string(v33);
  return 1;
}
