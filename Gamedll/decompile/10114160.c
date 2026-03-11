/*
 * func-name: ?LoadFPVHandAnim@CombinRobot@GameClient@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z_0
 * func-address: 0x10114160
 * callers: 0x1000cc84
 * callees: 0x10006ca8, 0x1000e845, 0x10014d3a, 0x102c71e0, 0x102c7580, 0x102c7980, 0x102c8190, 0x102c9d50, 0x102c9d62
 */

void __thiscall GameClient::CombinRobot::LoadFPVHandAnim(_DWORD *this, int a2)
{
  _DWORD *v2; // ebx
  _DWORD *v3; // edi
  _DWORD *v4; // esi
  int v5; // eax
  int i; // ebp
  void *v7; // ecx
  void *v8; // eax
  int v9; // esi
  int v10; // eax
  int v11; // eax
  int v12; // esi
  char *v13; // ecx
  int v14; // esi
  const char *v15; // eax
  int v16; // edx
  int v17; // eax
  int v18; // eax
  Model *v19; // ecx
  struct AnimationSet *v20; // eax
  int v21; // esi
  char *v22; // edi
  char *v23; // esi
  int v24; // [esp-Ch] [ebp-F8h]
  int v25; // [esp+0h] [ebp-ECh]
  int v26; // [esp+0h] [ebp-ECh]
  int v27; // [esp+4h] [ebp-E8h]
  int v28; // [esp+4h] [ebp-E8h]
  _DWORD v29[2]; // [esp+14h] [ebp-D8h] BYREF
  _BYTE v30[4]; // [esp+1Ch] [ebp-D0h] BYREF
  void *v31; // [esp+20h] [ebp-CCh]
  char *v32; // [esp+24h] [ebp-C8h]
  int v33; // [esp+28h] [ebp-C4h]
  _DWORD *v34; // [esp+2Ch] [ebp-C0h]
  int v35; // [esp+30h] [ebp-BCh]
  _BYTE v36[28]; // [esp+34h] [ebp-B8h] BYREF
  _BYTE v37[28]; // [esp+50h] [ebp-9Ch] BYREF
  _BYTE v38[28]; // [esp+6Ch] [ebp-80h] BYREF
  _BYTE v39[28]; // [esp+88h] [ebp-64h] BYREF
  _BYTE v40[28]; // [esp+A4h] [ebp-48h] BYREF
  _BYTE v41[28]; // [esp+C0h] [ebp-2Ch] BYREF
  int v42; // [esp+E8h] [ebp-4h]

  v2 = this;
  v3 = this + 440;
  v4 = this + 441;
  v34 = this;
  v35 = a2;
  this[350] = -1;
  this[351] = -1;
  sub_1000E845(v25, v27);
  v29[1] = v4[1];
  v29[0] = v4;
  sub_10006CA8(9, (int)v29);
  v3[8] = 1;
  v3[9] = 1;
  if ( v2[349] )
  {
    sub_102C7980(v26, v28);
    v31 = 0;
    v32 = 0;
    v33 = 0;
    v42 = 0;
    v5 = std::string::c_str(a2);
    sub_102C8190(v5, v30, 0, ".x", 0);
    v29[0] = 0;
    for ( i = 0; ; i += 28 )
    {
      v7 = v31;
      if ( !v31 || v29[0] >= (unsigned int)((v32 - (_BYTE *)v31) / 28) )
        break;
      v8 = (void *)sub_102C71E0(v37, (char *)v31 + i);
      LOBYTE(v42) = 1;
      sub_102C7580(v39, v8);
      LOBYTE(v42) = 3;
      std::string::~string(v37);
      v9 = std::string::length(v39);
      std::string::string(v40);
      LOBYTE(v42) = 4;
      std::string::string(v41);
      LOBYTE(v42) = 5;
      v10 = std::string::substr(v39, v36, v9 - 1, 1);
      LOBYTE(v42) = 6;
      std::string::operator=(v41, v10);
      LOBYTE(v42) = 5;
      std::string::~string(v36);
      v11 = std::string::substr(v39, v36, 0, v9 - 3);
      LOBYTE(v42) = 7;
      std::string::operator=(v40, v11);
      LOBYTE(v42) = 5;
      std::string::~string(v36);
      v12 = std::operator+<char>(v38, v35, "\\");
      v13 = (char *)v31;
      LOBYTE(v42) = 8;
      if ( !v31 || (v2 = v34, v29[0] >= (unsigned int)((v32 - (_BYTE *)v31) / 28)) )
      {
        _invalid_parameter_noinfo();
        v13 = (char *)v31;
      }
      v14 = std::operator+<char>(v36, v12, &v13[i]);
      LOBYTE(v42) = 9;
      v15 = (const char *)std::string::c_str(v41);
      LOBYTE(v16) = atoi(v15) != 0;
      v24 = v16;
      v17 = sub_10014D3A((int)v39);
      AnimationSet::Load(v17 + 4, v40, v14, v24, 0, 0);
      LOBYTE(v42) = 8;
      std::string::~string(v36);
      LOBYTE(v42) = 5;
      std::string::~string(v38);
      v18 = sub_10014D3A((int)v39);
      v19 = (Model *)v2[349];
      v20 = (struct AnimationSet *)(v18 + 4);
      if ( v19 )
        v21 = Model::AttachAnimSet(v19, v20);
      else
        v21 = -1;
      *(_DWORD *)(sub_10014D3A((int)v39) + 48) = v21;
      LOBYTE(v42) = 4;
      std::string::~string(v41);
      LOBYTE(v42) = 3;
      std::string::~string(v40);
      LOBYTE(v42) = 0;
      std::string::~string(v39);
      ++v29[0];
    }
    v42 = -1;
    if ( v31 )
    {
      v22 = v32;
      v23 = (char *)v31;
      if ( v31 != v32 )
      {
        do
        {
          std::string::~string(v23);
          v23 += 28;
        }
        while ( v23 != v22 );
        v7 = v31;
      }
      operator delete(v7);
    }
  }
}
