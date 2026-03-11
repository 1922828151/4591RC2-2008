/*
 * func-name: ?OnLoadModelComplete@AircraftVehicle@GameClient@@UAEXHPAVModel@@@Z_0
 * func-address: 0x101b6c90
 * callers: 0x10015e6f
 * callees: 0x10001794, 0x1000516e, 0x10007bc1, 0x100145c9, 0x10019484
 */

void __thiscall GameClient::AircraftVehicle::OnLoadModelComplete(
        GameClient::AircraftVehicle *this,
        int a2,
        struct Model *a3)
{
  int v4; // eax
  int v5; // eax
  int v6; // edx
  int v7; // eax
  int v8; // edi
  unsigned int v9; // edx
  unsigned int v10; // ebx
  int v11; // edi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // edi
  int v16; // edi
  int v17; // eax
  int v18; // edi
  int v19; // eax
  int v20; // edi
  int v21; // eax
  struct Game *v22; // eax
  int v23; // [esp-78h] [ebp-88h]
  int v24; // [esp-74h] [ebp-84h]
  int v25; // [esp-70h] [ebp-80h]
  int v26; // [esp-6Ch] [ebp-7Ch]
  int v27; // [esp-68h] [ebp-78h]
  int v28; // [esp-64h] [ebp-74h]
  int v29; // [esp-60h] [ebp-70h]
  int v30; // [esp-5Ch] [ebp-6Ch]
  int v31; // [esp-58h] [ebp-68h]
  int v32; // [esp-54h] [ebp-64h]
  int v33; // [esp-50h] [ebp-60h]
  int v34; // [esp-4Ch] [ebp-5Ch]
  int v35; // [esp-48h] [ebp-58h]
  int v36; // [esp-44h] [ebp-54h]
  int v37; // [esp-40h] [ebp-50h]
  int v38; // [esp-3Ch] [ebp-4Ch]
  int v39; // [esp-38h] [ebp-48h]
  int v40; // [esp-34h] [ebp-44h]
  int v41; // [esp-30h] [ebp-40h]
  int v42; // [esp-2Ch] [ebp-3Ch]
  int v43; // [esp-28h] [ebp-38h]
  int v44; // [esp-24h] [ebp-34h]
  int v45; // [esp-20h] [ebp-30h]
  int v46; // [esp-1Ch] [ebp-2Ch]
  int v47; // [esp-18h] [ebp-28h]
  int v48; // [esp-14h] [ebp-24h]
  int v49; // [esp-10h] [ebp-20h]
  int v50; // [esp-Ch] [ebp-1Ch]
  int v51; // [esp-8h] [ebp-18h]
  int v52; // [esp-4h] [ebp-14h]
  int i; // [esp+14h] [ebp+4h]
  struct Model *v54; // [esp+18h] [ebp+8h]

  GameClient::ControlledEstab::OnLoadModelComplete(this, a2, a3);
  v4 = *((_DWORD *)this + 75);
  if ( v4 && *(_DWORD *)(v4 + 716) )
  {
    v5 = *((_DWORD *)this + 135);
    v6 = *(_DWORD *)(v5 + 624);
    v7 = v5 + 620;
    if ( v6 )
    {
      v9 = (int)((unsigned __int64)(2454267027LL * (*(_DWORD *)(v7 + 8) - v6)) >> 32) >> 4;
      v8 = v9 + (v9 >> 31);
    }
    else
    {
      v8 = 0;
    }
    sub_100145C9(v23, v24);
    sub_10001794(
      v8,
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
      v49,
      v50,
      v51,
      v52);
    v10 = 0;
    v54 = 0;
    for ( i = 0; ; i += 28 )
    {
      v11 = *((_DWORD *)this + 135);
      v12 = *(_DWORD *)(v11 + 624);
      if ( !v12 || v10 >= (*(_DWORD *)(v11 + 628) - v12) / 28 )
        break;
      v13 = *(_DWORD *)(v11 + 624);
      if ( !v13 || v10 >= (*(_DWORD *)(v11 + 628) - v13) / 28 )
        _invalid_parameter_noinfo();
      v14 = *((_DWORD *)this + 129);
      v15 = i + *(_DWORD *)(v11 + 624);
      if ( !v14 || v10 >= (*((_DWORD *)this + 130) - v14) / 120 )
        _invalid_parameter_noinfo();
      std::string::operator=((char *)v54 + *((_DWORD *)this + 129), v15);
      v16 = *((_DWORD *)this + 135);
      v17 = *(_DWORD *)(v16 + 640);
      v18 = v16 + 636;
      if ( !v17 || v10 >= (*(_DWORD *)(v18 + 8) - v17) / 28 )
        _invalid_parameter_noinfo();
      v19 = *((_DWORD *)this + 129);
      v20 = i + *(_DWORD *)(v18 + 4);
      if ( !v19 || v10 >= (*((_DWORD *)this + 130) - v19) / 120 )
        _invalid_parameter_noinfo();
      std::string::operator=((char *)v54 + *((_DWORD *)this + 129) + 56, v20);
      v21 = *((_DWORD *)this + 129);
      if ( !v21 || v10 >= (*((_DWORD *)this + 130) - v21) / 120 )
        _invalid_parameter_noinfo();
      v52 = *(_DWORD *)(*((_DWORD *)this + 75) + 716);
      v22 = Game::Instance();
      sub_10019484(*((_DWORD *)v22 + 25), v52);
      ++v10;
      v54 = (struct Model *)((char *)v54 + 120);
    }
    if ( AnimationSet::GetDXSet((GameClient::AircraftVehicle *)((char *)this + 560)) )
      *((_DWORD *)this + 151) = Model::AttachAnimSet(
                                  *(Model **)(*((_DWORD *)this + 75) + 716),
                                  (GameClient::AircraftVehicle *)((char *)this + 560));
    if ( AnimationSet::GetDXSet((GameClient::AircraftVehicle *)((char *)this + 608)) )
      *((_DWORD *)this + 163) = Model::AttachAnimSet(
                                  *(Model **)(*((_DWORD *)this + 75) + 716),
                                  (GameClient::AircraftVehicle *)((char *)this + 608));
  }
}
