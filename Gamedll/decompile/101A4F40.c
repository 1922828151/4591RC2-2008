/*
 * func-name: ?OnLoadModelComplete@Establishment@GameClient@@UAEXHPAVModel@@@Z_0
 * func-address: 0x101a4f40
 * callers: 0x10009c0a
 * callees: 0x10002a3b, 0x1000516e, 0x10011577, 0x100145c9, 0x10014b6e, 0x10019484, 0x102c1be0, 0x102c23d0, 0x102c9d98
 */

void __thiscall GameClient::Establishment::OnLoadModelComplete(
        GameClient::Establishment *this,
        int a2,
        struct Model *a3)
{
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  _DWORD *v7; // esi
  unsigned int v8; // edi
  int i; // ebx
  int v10; // eax
  int v11; // eax
  void *v12; // eax
  unsigned int v13; // edi
  int j; // ebx
  int v15; // eax
  int v16; // eax
  void *v17; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // edx
  int v21; // eax
  int v22; // eax
  int v23; // ecx
  int v24; // edx
  int v25; // eax
  unsigned int v26; // esi
  int v27; // ecx
  int v28; // ecx
  int v29; // edi
  int v30; // ecx
  _DWORD *v31; // ebx
  const void *v32; // esi
  _DWORD *v33; // eax
  int v34; // ecx
  _DWORD *v35; // esi
  int v36; // edi
  struct Game *v37; // eax
  unsigned int v38; // eax
  unsigned int v39; // edx
  int *v40; // eax
  void *v41; // edi
  double v42; // st7
  _DWORD *v43; // eax
  int v44; // ecx
  int v45; // ecx
  double v46; // st7
  int v47; // eax
  int v48; // eax
  int v49; // ecx
  int v50; // edx
  int v51; // eax
  int v52; // ecx
  int v53; // ecx
  int v54; // ecx
  int v55; // [esp+0h] [ebp-120h] BYREF
  int v56; // [esp+4h] [ebp-11Ch]
  float v57; // [esp+8h] [ebp-118h]
  float *v58; // [esp+Ch] [ebp-114h]
  int v59; // [esp+10h] [ebp-110h]
  int v60; // [esp+14h] [ebp-10Ch]
  _DWORD *v61; // [esp+18h] [ebp-108h]
  int v62; // [esp+1Ch] [ebp-104h]
  int v63; // [esp+20h] [ebp-100h]
  int v64; // [esp+24h] [ebp-FCh]
  int NodeHandle; // [esp+34h] [ebp-ECh] BYREF
  int v66; // [esp+38h] [ebp-E8h] BYREF
  int v67; // [esp+3Ch] [ebp-E4h] BYREF
  float v68; // [esp+40h] [ebp-E0h]
  float v69; // [esp+44h] [ebp-DCh]
  float v70[3]; // [esp+48h] [ebp-D8h] BYREF
  _DWORD v71[16]; // [esp+54h] [ebp-CCh] BYREF
  _DWORD v72[16]; // [esp+94h] [ebp-8Ch] BYREF
  _BYTE v73[64]; // [esp+D4h] [ebp-4Ch] BYREF
  int v74; // [esp+11Ch] [ebp-4h]

  if ( a2 == *((_DWORD *)this + 76) )
  {
    *(_DWORD *)(*((_DWORD *)this + 75) + 716) = a3;
    *(_BYTE *)(*((_DWORD *)this + 75) + 816) = *((_BYTE *)this + 372);
    v4 = *((_DWORD *)this + 7);
    v5 = *((_DWORD *)this + 8);
    qmemcpy(v72, (char *)this + 36, sizeof(v72));
    v72[12] = *((_DWORD *)this + 6);
    v6 = *((_DWORD *)this + 75);
    v72[13] = v4;
    v72[14] = v5;
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v6 + 136))(v6, v72);
    v7 = (_DWORD *)*((_DWORD *)this + 2);
    v8 = 0;
    for ( i = 0; ; i += 28 )
    {
      v10 = v7[106];
      if ( !v10 || v8 >= (v7[107] - v10) / 28 )
        break;
      v11 = v7[106];
      v62 = 0;
      if ( !v11 || v8 >= (v7[107] - v11) / 28 )
        _invalid_parameter_noinfo();
      v12 = (void *)(i + v7[106]);
      v66 = (int)&v55;
      std::string::string(&v55, v12);
      NodeHandle = StaticModel::GetNodeHandle(
                     *(_DWORD *)(*((_DWORD *)this + 75) + 716),
                     v55,
                     v56,
                     LODWORD(v57),
                     v58,
                     v59,
                     v60,
                     v61,
                     v62);
      std::vector<ModelFrame *>::push_back((char *)this + 208, &NodeHandle);
      ++v8;
    }
    v13 = 0;
    for ( j = 0; ; j += 28 )
    {
      v15 = v7[110];
      if ( !v15 || v13 >= (v7[111] - v15) / 28 )
        break;
      v16 = v7[110];
      v62 = 0;
      if ( !v16 || v13 >= (v7[111] - v16) / 28 )
        _invalid_parameter_noinfo();
      v17 = (void *)(j + v7[110]);
      v66 = (int)&v55;
      std::string::string(&v55, v17);
      NodeHandle = StaticModel::GetNodeHandle(
                     *(_DWORD *)(*((_DWORD *)this + 75) + 716),
                     v55,
                     v56,
                     LODWORD(v57),
                     v58,
                     v59,
                     v60,
                     v61,
                     v62);
      std::vector<ModelFrame *>::push_back((char *)this + 224, &NodeHandle);
      ++v13;
    }
    v18 = *((_DWORD *)this + 53);
    if ( v18 )
      v19 = (*((_DWORD *)this + 54) - v18) >> 2;
    else
      v19 = 0;
    v20 = *((_DWORD *)this + 49);
    if ( v20 )
      v21 = (*((_DWORD *)this + 50) - v20) >> 2;
    else
      v21 = 0;
    if ( v19 == v21 )
    {
      v22 = *((_DWORD *)this + 57);
      v23 = v22 ? (*((_DWORD *)this + 58) - v22) >> 2 : 0;
      v24 = *((_DWORD *)this + 49);
      v25 = v24 ? (*((_DWORD *)this + 50) - v24) >> 2 : 0;
      if ( v23 == v25 )
      {
        v26 = 0;
        NodeHandle = 0;
        while ( 1 )
        {
          v27 = *((_DWORD *)this + 49);
          if ( !v27 || v26 >= (*((_DWORD *)this + 50) - v27) >> 2 )
            break;
          v28 = *((_DWORD *)this + 53);
          if ( !v28 || v26 >= (*((_DWORD *)this + 54) - v28) >> 2 )
            _invalid_parameter_noinfo();
          v29 = *(_DWORD *)(*((_DWORD *)this + 53) + 4 * v26);
          v30 = *((_DWORD *)this + 49);
          v66 = v29;
          if ( !v30 || v26 >= (*((_DWORD *)this + 50) - v30) >> 2 )
            _invalid_parameter_noinfo();
          v31 = *(_DWORD **)(*((_DWORD *)this + 49) + 4 * v26);
          if ( v29 )
          {
            v32 = (const void *)sub_102C23D0(v73);
            v33 = (_DWORD *)(v66 + 212);
            qmemcpy(v31 + 28, v32, 0x40u);
            v26 = NodeHandle;
            v31[25] = *v33;
            v31[26] = v33[1];
            v31[27] = v33[2];
          }
          v34 = *((_DWORD *)this + 57);
          if ( !v34 || v26 >= (*((_DWORD *)this + 58) - v34) >> 2 )
            _invalid_parameter_noinfo();
          v35 = *(_DWORD **)(*((_DWORD *)this + 57) + 4 * v26);
          if ( v35 )
          {
            v31[48] = v35[53];
            v31[49] = v35[54];
            v31[50] = v35[55];
            qmemcpy(v31 + 51, (const void *)sub_102C23D0(v73), 0x40u);
          }
          v66 = (int)operator new(0x78u);
          v36 = 0;
          v74 = 0;
          if ( v66 )
            v36 = sub_100145C9(v63, v64);
          v62 = v31[2] + 112;
          v74 = -1;
          v66 = v36;
          std::string::operator=(v36, v62);
          v62 = 0;
          v37 = Game::Instance();
          sub_10019484(*((_DWORD *)v37 + 25), v62);
          v38 = *((_DWORD *)this + 61);
          if ( v38 )
            v39 = (int)(*((_DWORD *)this + 62) - v38) >> 2;
          else
            v39 = 0;
          if ( v38 && v39 < (int)(*((_DWORD *)this + 63) - v38) >> 2 )
          {
            v40 = (int *)*((_DWORD *)this + 62);
            *v40 = v36;
            *((_DWORD *)this + 62) = v40 + 1;
            GameClient::Seat::LoadResource((GameClient::Seat *)v31);
            v26 = ++NodeHandle;
          }
          else
          {
            v41 = (void *)*((_DWORD *)this + 62);
            if ( v38 > (unsigned int)v41 )
              _invalid_parameter_noinfo();
            sub_10002A3B((int)&v67, (int)this + 240, v41, (int)&v66);
            GameClient::Seat::LoadResource((GameClient::Seat *)v31);
            v26 = ++NodeHandle;
          }
        }
        if ( !*((_DWORD *)this + 80) && *((_BYTE *)this + 324) )
        {
          *(float *)&v67 = 0.0;
          v68 = 0.0;
          v69 = 0.0;
          sub_102C1BE0((char *)this + 328, &v67);
          v42 = *(float *)&v67 + *((float *)this + 6);
          v62 = 8;
          v70[0] = v42;
          v70[1] = *((float *)this + 7) + v68;
          v70[2] = *((float *)this + 8) + v69;
          v43 = operator new(8u);
          if ( v43 )
          {
            v44 = *((_DWORD *)this + 3);
            *v43 = &GameClient::EnterEstabEffectArea::`vftable';
            v43[1] = v44;
          }
          else
          {
            v43 = 0;
          }
          v45 = *((_DWORD *)this + 3);
          v46 = *((float *)this + 86);
          v62 = 7;
          v61 = v43;
          v60 = 0;
          v59 = v45;
          v58 = v70;
          v57 = v46;
          v47 = NxPhysics::Instance(*((float *)this + 85), LODWORD(v57), v70, v45, 0);
          *((_DWORD *)this + 80) = NxPhysics::CreateTriggerActor(v47);
        }
        v48 = *((_DWORD *)this + 95);
        if ( !v48 || !((*((_DWORD *)this + 96) - v48) >> 2) )
          _invalid_parameter_noinfo();
        (*(void (__thiscall **)(_DWORD, struct Model *))(***((_DWORD ***)this + 95) + 20))(**((_DWORD **)this + 95), a3);
        v49 = *((_DWORD *)this + 95);
        if ( !v49 || (unsigned int)((*((_DWORD *)this + 96) - v49) >> 2) <= 1 )
          _invalid_parameter_noinfo();
        (*(void (__thiscall **)(_DWORD, struct Model *))(**(_DWORD **)(*((_DWORD *)this + 95) + 4) + 20))(
          *(_DWORD *)(*((_DWORD *)this + 95) + 4),
          a3);
        if ( !*((_BYTE *)this + 372) )
        {
          v62 = 2;
LABEL_80:
          GameClient::Establishment::SwitchEstabState(v62);
        }
      }
    }
  }
  else if ( a2 == *((_DWORD *)this + 78) )
  {
    *(_DWORD *)(*((_DWORD *)this + 77) + 716) = a3;
    *(_BYTE *)(*((_DWORD *)this + 77) + 816) = *((_BYTE *)this + 372) == 0;
    v50 = *((_DWORD *)this + 7);
    v51 = *((_DWORD *)this + 8);
    qmemcpy(v71, (char *)this + 36, sizeof(v71));
    v71[12] = *((_DWORD *)this + 6);
    v52 = *((_DWORD *)this + 77);
    v71[13] = v50;
    v71[14] = v51;
    *((_DWORD *)this + 78) = 0;
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v52 + 136))(v52, v71);
    v53 = *((_DWORD *)this + 95);
    if ( !v53 || (unsigned int)((*((_DWORD *)this + 96) - v53) >> 2) <= 2 )
      _invalid_parameter_noinfo();
    (*(void (__thiscall **)(_DWORD, struct Model *))(**(_DWORD **)(*((_DWORD *)this + 95) + 8) + 20))(
      *(_DWORD *)(*((_DWORD *)this + 95) + 8),
      a3);
    v54 = *((_DWORD *)this + 95);
    if ( !v54 || (unsigned int)((*((_DWORD *)this + 96) - v54) >> 2) <= 3 )
      _invalid_parameter_noinfo();
    (*(void (__thiscall **)(_DWORD, struct Model *))(**(_DWORD **)(*((_DWORD *)this + 95) + 12) + 20))(
      *(_DWORD *)(*((_DWORD *)this + 95) + 12),
      a3);
    if ( *((_BYTE *)this + 372) )
    {
      v62 = 4;
      goto LABEL_80;
    }
  }
}
