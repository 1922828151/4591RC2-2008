/*
 * func-name: ?OnLoadModelComplete@SuspendVehicle@GameClient@@UAEXHPAVModel@@@Z_0
 * func-address: 0x101ba070
 * callers: 0x10018bc9
 * callees: 0x10001794, 0x100044ee, 0x10004ef3, 0x1000516e, 0x10007bc1, 0x100145c9, 0x10019484
 */

void __thiscall GameClient::SuspendVehicle::OnLoadModelComplete(
        GameClient::AdapterActor **this,
        int a2,
        struct Model *a3)
{
  GameClient::AdapterActor *v4; // eax
  int v5; // edx
  char *v6; // eax
  int v7; // edi
  unsigned int v8; // edx
  char *v9; // esi
  unsigned int v10; // ebx
  int v11; // ebp
  GameClient::AdapterActor *v12; // edi
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // edi
  GameClient::AdapterActor *v17; // edi
  int v18; // eax
  char *v19; // edi
  int v20; // eax
  int v21; // edi
  int v22; // eax
  struct Game *v23; // eax
  int v24; // [esp-78h] [ebp-90h]
  int v25; // [esp-78h] [ebp-90h]
  int v26; // [esp-74h] [ebp-8Ch]
  int v27; // [esp-74h] [ebp-8Ch]
  int v28; // [esp-70h] [ebp-88h]
  int v29; // [esp-6Ch] [ebp-84h]
  int v30; // [esp-68h] [ebp-80h]
  int v31; // [esp-64h] [ebp-7Ch]
  int v32; // [esp-60h] [ebp-78h]
  int v33; // [esp-5Ch] [ebp-74h]
  int v34; // [esp-58h] [ebp-70h]
  int v35; // [esp-54h] [ebp-6Ch]
  int v36; // [esp-50h] [ebp-68h]
  int v37; // [esp-4Ch] [ebp-64h]
  int v38; // [esp-48h] [ebp-60h]
  int v39; // [esp-44h] [ebp-5Ch]
  int v40; // [esp-40h] [ebp-58h]
  int v41; // [esp-3Ch] [ebp-54h]
  int v42; // [esp-38h] [ebp-50h]
  int v43; // [esp-34h] [ebp-4Ch]
  int v44; // [esp-30h] [ebp-48h]
  int v45; // [esp-2Ch] [ebp-44h]
  int v46; // [esp-28h] [ebp-40h]
  int v47; // [esp-24h] [ebp-3Ch]
  int v48; // [esp-20h] [ebp-38h]
  int v49; // [esp-1Ch] [ebp-34h]
  int v50; // [esp-18h] [ebp-30h]
  int v51; // [esp-14h] [ebp-2Ch]
  int v52; // [esp-10h] [ebp-28h]
  int v53; // [esp-Ch] [ebp-24h]
  int v54; // [esp-8h] [ebp-20h]
  int v55; // [esp-4h] [ebp-1Ch]
  int v57; // [esp+14h] [ebp-4h] BYREF
  int i; // [esp+1Ch] [ebp+4h]

  GameClient::ControlledEstab::OnLoadModelComplete((GameClient::ControlledEstab *)this, a2, a3);
  GameClient::AdapterActor::GetLastHandle(this[75], &v57);
  if ( a2 == v57 )
  {
    GameClient::SuspendVehicle::BindWheelFrames((GameClient::SuspendVehicle *)this);
    v4 = this[135];
    v5 = *((_DWORD *)v4 + 310);
    v6 = (char *)v4 + 1236;
    if ( v5 )
    {
      v8 = (int)((unsigned __int64)(2454267027LL * (*((_DWORD *)v6 + 2) - v5)) >> 32) >> 4;
      v7 = v8 + (v8 >> 31);
    }
    else
    {
      v7 = 0;
    }
    sub_100145C9(v24, v26);
    v9 = (char *)(this + 139);
    sub_10001794(
      v7,
      v25,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
    v10 = 0;
    v11 = 0;
    for ( i = 0; ; i += 28 )
    {
      v12 = this[135];
      v13 = *((_DWORD *)v12 + 310);
      if ( !v13 || v10 >= (*((_DWORD *)v12 + 311) - v13) / 28 )
        break;
      v14 = *((_DWORD *)v12 + 310);
      if ( !v14 || v10 >= (*((_DWORD *)v12 + 311) - v14) / 28 )
        _invalid_parameter_noinfo();
      v15 = *((_DWORD *)v9 + 1);
      v16 = i + *((_DWORD *)v12 + 310);
      if ( !v15 || v10 >= (*((_DWORD *)v9 + 2) - v15) / 120 )
        _invalid_parameter_noinfo();
      std::string::operator=(v11 + *((_DWORD *)v9 + 1), v16);
      v17 = this[135];
      v18 = *((_DWORD *)v17 + 314);
      v19 = (char *)v17 + 1252;
      if ( !v18 || v10 >= (*((_DWORD *)v19 + 2) - v18) / 28 )
        _invalid_parameter_noinfo();
      v20 = *((_DWORD *)v9 + 1);
      v21 = i + *((_DWORD *)v19 + 1);
      if ( !v20 || v10 >= (*((_DWORD *)v9 + 2) - v20) / 120 )
        _invalid_parameter_noinfo();
      std::string::operator=(*((_DWORD *)v9 + 1) + v11 + 56, v21);
      v22 = *((_DWORD *)v9 + 1);
      if ( !v22 || v10 >= (*((_DWORD *)v9 + 2) - v22) / 120 )
        _invalid_parameter_noinfo();
      v23 = Game::Instance();
      sub_10019484(*((_DWORD *)v23 + 25), (int)a3);
      ++v10;
      v11 += 120;
    }
  }
}
