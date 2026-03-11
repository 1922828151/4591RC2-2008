/*
 * func-name: ?OnLoadModelComplete@PedrailVehicle@GameClient@@UAEXHPAVModel@@@Z_0
 * func-address: 0x101b8630
 * callers: 0x1000cf81
 * callees: 0x10001794, 0x100044ee, 0x1000516e, 0x10007bc1, 0x1000b3a7, 0x100145c9, 0x1001640a, 0x10019484
 */

void __thiscall GameClient::PedrailVehicle::OnLoadModelComplete(
        GameClient::AdapterActor **this,
        int a2,
        struct Model *a3)
{
  GameClient::AdapterActor *v4; // eax
  int v5; // edx
  char *v6; // eax
  int v7; // esi
  unsigned int v8; // edx
  unsigned int v9; // edi
  GameClient::AdapterActor *v10; // esi
  int v11; // eax
  int v12; // eax
  GameClient::AdapterActor *v13; // esi
  int v14; // eax
  char *v15; // esi
  GameClient::AdapterActor *v16; // eax
  char *v17; // esi
  GameClient::AdapterActor *v18; // eax
  struct Game *v19; // eax
  int v20; // [esp-78h] [ebp-8Ch]
  int v21; // [esp-74h] [ebp-88h]
  int v22; // [esp-70h] [ebp-84h]
  int v23; // [esp-6Ch] [ebp-80h]
  int v24; // [esp-68h] [ebp-7Ch]
  int v25; // [esp-64h] [ebp-78h]
  int v26; // [esp-60h] [ebp-74h]
  int v27; // [esp-5Ch] [ebp-70h]
  int v28; // [esp-58h] [ebp-6Ch]
  int v29; // [esp-54h] [ebp-68h]
  int v30; // [esp-50h] [ebp-64h]
  int v31; // [esp-4Ch] [ebp-60h]
  int v32; // [esp-48h] [ebp-5Ch]
  int v33; // [esp-44h] [ebp-58h]
  int v34; // [esp-40h] [ebp-54h]
  int v35; // [esp-3Ch] [ebp-50h]
  int v36; // [esp-38h] [ebp-4Ch]
  int v37; // [esp-34h] [ebp-48h]
  int v38; // [esp-30h] [ebp-44h]
  int v39; // [esp-2Ch] [ebp-40h]
  int v40; // [esp-28h] [ebp-3Ch]
  int v41; // [esp-24h] [ebp-38h]
  int v42; // [esp-20h] [ebp-34h]
  int v43; // [esp-1Ch] [ebp-30h]
  int v44; // [esp-18h] [ebp-2Ch]
  int v45; // [esp-14h] [ebp-28h]
  int v46; // [esp-10h] [ebp-24h]
  int v47; // [esp-Ch] [ebp-20h]
  int v48; // [esp-8h] [ebp-1Ch]
  int v49; // [esp-4h] [ebp-18h]
  int v50; // [esp+10h] [ebp-4h] BYREF
  int v51; // [esp+18h] [ebp+4h]
  struct Model *i; // [esp+1Ch] [ebp+8h]

  GameClient::ControlledEstab::OnLoadModelComplete((GameClient::ControlledEstab *)this, a2, a3);
  GameClient::AdapterActor::GetLastHandle(this[75], &v50);
  if ( a2 == v50 )
  {
    v4 = this[135];
    v5 = *((_DWORD *)v4 + 306);
    v6 = (char *)v4 + 1220;
    if ( v5 )
    {
      v8 = (int)((unsigned __int64)(2454267027LL * (*((_DWORD *)v6 + 2) - v5)) >> 32) >> 4;
      v7 = v8 + (v8 >> 31);
    }
    else
    {
      v7 = 0;
    }
    sub_100145C9(v20, v21);
    sub_10001794(
      v7,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26,
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
      v49);
    v9 = 0;
    v51 = 0;
    for ( i = 0; ; i = (struct Model *)((char *)i + 28) )
    {
      v10 = this[135];
      v11 = *((_DWORD *)v10 + 306);
      if ( !v11 || v9 >= (*((_DWORD *)v10 + 307) - v11) / 28 )
        break;
      v12 = *((_DWORD *)v10 + 306);
      if ( !v12 || v9 >= (*((_DWORD *)v10 + 307) - v12) / 28 )
        _invalid_parameter_noinfo();
      if ( !(unsigned __int8)std::operator==<char>((char *)i + *((_DWORD *)v10 + 306), &unk_10315D87) )
      {
        v13 = this[135];
        v14 = *((_DWORD *)v13 + 306);
        v15 = (char *)v13 + 1220;
        if ( !v14 || v9 >= (*((_DWORD *)v15 + 2) - v14) / 28 )
          _invalid_parameter_noinfo();
        v16 = this[140];
        v17 = (char *)i + *((_DWORD *)v15 + 1);
        if ( !v16 || v9 >= (this[141] - v16) / 120 )
          _invalid_parameter_noinfo();
        std::string::operator=((char *)this[140] + v51, v17);
        v18 = this[140];
        if ( !v18 || v9 >= (this[141] - v18) / 120 )
          _invalid_parameter_noinfo();
        v49 = 0;
        v19 = Game::Instance();
        sub_10019484(*((_DWORD *)v19 + 25), v49);
      }
      ++v9;
      v51 += 120;
    }
    if ( (unsigned __int8)std::operator!=<char>((char *)this[135] + 1236, &unk_10315D88)
      || (unsigned __int8)std::operator!=<char>((char *)this[135] + 1292, &unk_10315D89) )
    {
      *((_BYTE *)this[75] + 727) = 1;
    }
    this[144] = (GameClient::AdapterActor *)GameClient::AdapterActor::AddFxMaterial(
                                              (char *)this[135] + 1236,
                                              (char *)this[135] + 1264);
    this[145] = (GameClient::AdapterActor *)GameClient::AdapterActor::AddFxMaterial(
                                              (char *)this[135] + 1292,
                                              (char *)this[135] + 1320);
  }
  GameClient::PedrailVehicle::BindWheelFrames((GameClient::PedrailVehicle *)this);
}
