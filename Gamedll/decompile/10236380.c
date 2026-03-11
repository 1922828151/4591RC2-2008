/*
 * func-name: ?OnReadVarComplete@FRobotArmor@GameClient@@UAEXXZ_0
 * func-address: 0x10236380
 * callers: 0x10005ba5
 * callees: 0x100089db, 0x10008be8, 0x100090a7, 0x10012463
 */

void __thiscall GameClient::FRobotArmor::OnReadVarComplete(GameClient::FRobotArmor *this)
{
  int v2; // eax
  int *v3; // ebx
  int v4; // edi
  unsigned int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  char *v9; // ebx
  int v10; // eax
  int v11; // eax
  char *v12; // ebx
  int v13; // eax
  int *v14; // ebx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // ebx
  unsigned int v20; // ebx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  char *v24; // ebp
  int v25; // eax
  int v26; // eax
  int v27; // ebp
  int v28; // eax
  int v29; // ebp
  int v30; // [esp-38h] [ebp-7Ch] BYREF
  int v31; // [esp-34h] [ebp-78h]
  int v32; // [esp-30h] [ebp-74h]
  int v33; // [esp-2Ch] [ebp-70h]
  int v34; // [esp-28h] [ebp-6Ch]
  int v35; // [esp-24h] [ebp-68h]
  int v36; // [esp-20h] [ebp-64h]
  int v37; // [esp-1Ch] [ebp-60h] BYREF
  int v38; // [esp-18h] [ebp-5Ch]
  int v39; // [esp-14h] [ebp-58h]
  int v40; // [esp-10h] [ebp-54h]
  int v41; // [esp-Ch] [ebp-50h]
  int v42; // [esp-8h] [ebp-4Ch]
  int v43; // [esp-4h] [ebp-48h]
  int v44; // [esp+0h] [ebp-44h]
  int v45; // [esp+14h] [ebp-30h]
  int *v46; // [esp+18h] [ebp-2Ch]
  _BYTE v47[28]; // [esp+1Ch] [ebp-28h] BYREF
  int v48; // [esp+40h] [ebp-4h]

  GameClient::FProduct::OnReadVarComplete(this);
  v2 = *((_DWORD *)this + 99);
  v3 = 0;
  if ( v2 )
    v4 = (*((_DWORD *)this + 100) - v2) / 28;
  else
    v4 = 0;
  v46 = &v30;
  sub_100090A7(v30, v31);
  sub_10008BE8(v4, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43);
  v5 = 0;
  v45 = 0;
  while ( 1 )
  {
    v6 = *((_DWORD *)this + 99);
    v46 = v3;
    if ( !v6 || v5 >= (*((_DWORD *)this + 100) - v6) / 28 )
      break;
    v7 = *((_DWORD *)this + 99);
    if ( !v7 || v5 >= (*((_DWORD *)this + 100) - v7) / 28 )
      _invalid_parameter_noinfo();
    v8 = *((_DWORD *)this + 95);
    v9 = (char *)v46 + *((_DWORD *)this + 99);
    if ( !v8 || v5 >= (*((_DWORD *)this + 96) - v8) / 56 )
      _invalid_parameter_noinfo();
    std::string::operator=(v45 + *((_DWORD *)this + 95), v9);
    v10 = *((_DWORD *)this + 103);
    if ( !v10 || v5 >= (*((_DWORD *)this + 104) - v10) / 28 )
      _invalid_parameter_noinfo();
    v11 = *((_DWORD *)this + 95);
    v12 = (char *)v46 + *((_DWORD *)this + 103);
    if ( !v11 || v5 >= (*((_DWORD *)this + 96) - v11) / 56 )
      _invalid_parameter_noinfo();
    std::string::operator=(v45 + *((_DWORD *)this + 95) + 28, v12);
    v13 = *((_DWORD *)this + 103);
    if ( !v13 || v5 >= (*((_DWORD *)this + 104) - v13) / 28 )
      _invalid_parameter_noinfo();
    v14 = v46;
    if ( *(int *)((char *)v46 + *((_DWORD *)this + 103) + 20) )
    {
      v15 = *((_DWORD *)this + 103);
      if ( !v15 || v5 >= (*((_DWORD *)this + 104) - v15) / 28 )
        _invalid_parameter_noinfo();
      v16 = std::operator+<char>(v47, (char *)v14 + *((_DWORD *)this + 103), ".reb");
      v48 = 0;
      v17 = AsyncLoader::Instance(v16, v44);
      AsyncLoader::CachePacket(v17);
      v48 = -1;
      std::string::~string(v47);
    }
    v45 += 56;
    ++v5;
    v3 = v14 + 7;
  }
  v18 = *((_DWORD *)this + 111);
  if ( v18 )
    v19 = (*((_DWORD *)this + 112) - v18) / 28;
  else
    v19 = 0;
  v46 = &v30;
  std::string::string(&v30);
  v48 = 1;
  std::string::string(&v37);
  v48 = -1;
  sub_100089DB(v19, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43);
  v20 = 0;
  v45 = 0;
  v46 = 0;
  while ( 1 )
  {
    v21 = *((_DWORD *)this + 111);
    if ( !v21 || v20 >= (*((_DWORD *)this + 112) - v21) / 28 )
      break;
    v22 = *((_DWORD *)this + 111);
    if ( !v22 || v20 >= (*((_DWORD *)this + 112) - v22) / 28 )
      _invalid_parameter_noinfo();
    v23 = *((_DWORD *)this + 107);
    v24 = (char *)v46 + *((_DWORD *)this + 111);
    if ( !v23 || v20 >= (*((_DWORD *)this + 108) - v23) / 56 )
      _invalid_parameter_noinfo();
    std::string::operator=(v45 + *((_DWORD *)this + 107), v24);
    v25 = *((_DWORD *)this + 115);
    if ( !v25 || v20 >= (*((_DWORD *)this + 116) - v25) / 28 )
      _invalid_parameter_noinfo();
    v26 = *((_DWORD *)this + 107);
    v27 = (int)v46 + *((_DWORD *)this + 115);
    if ( !v26 || v20 >= (*((_DWORD *)this + 108) - v26) / 56 )
      _invalid_parameter_noinfo();
    v28 = *((_DWORD *)this + 107);
    v43 = v27;
    v29 = v45;
    std::string::operator=(v28 + v45 + 28, v43);
    v46 += 7;
    ++v20;
    v45 = v29 + 56;
  }
}
