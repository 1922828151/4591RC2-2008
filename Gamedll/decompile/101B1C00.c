/*
 * func-name: ?LoadResource@Seat@GameClient@@QAEXXZ_0
 * func-address: 0x101b1c00
 * callers: 0x10014b6e
 * callees: 0x100029cd, 0x10004d59, 0x100063b1, 0x1001a09b, 0x102c0c90, 0x102c0ed0, 0x102c9db6, 0x102c9dbc
 */

void __thiscall GameClient::Seat::LoadResource(GameClient::Seat *this)
{
  unsigned int v2; // ebp
  int v3; // ecx
  int j; // edi
  int v5; // esi
  int v6; // ecx
  int v7; // esi
  int v8; // esi
  int v9; // eax
  int v10; // esi
  int v11; // esi
  int v12; // ecx
  float *v13; // eax
  float v14; // eax
  float *v15; // eax
  float v16; // ecx
  float v17; // edx
  double v18; // st7
  float v19; // [esp+14h] [ebp-90h] BYREF
  float i; // [esp+18h] [ebp-8Ch]
  float v21; // [esp+1Ch] [ebp-88h]
  float v22; // [esp+20h] [ebp-84h] BYREF
  float v23; // [esp+24h] [ebp-80h]
  float v24; // [esp+28h] [ebp-7Ch]
  float v25; // [esp+2Ch] [ebp-78h] BYREF
  float v26; // [esp+30h] [ebp-74h]
  float v27; // [esp+34h] [ebp-70h]
  double v28; // [esp+3Ch] [ebp-68h]
  _DWORD v29[5]; // [esp+44h] [ebp-60h] BYREF
  _BYTE v30[64]; // [esp+58h] [ebp-4Ch] BYREF
  int v31; // [esp+A0h] [ebp-4h]

  if ( *((_DWORD *)this + 22) )
  {
    v2 = 0;
    for ( i = 0.0; ; ++LODWORD(i) )
    {
      v3 = *((_DWORD *)this + 8);
      if ( !v3 || LODWORD(i) >= (*((_DWORD *)this + 9) - v3) >> 2 )
        break;
      std::vector<ModelFrame *>::vector<ModelFrame *>(&v25);
      v31 = 0;
      v21 = 0.0;
      for ( j = 28 * v2; ; j += 28 )
      {
        v5 = *((_DWORD *)this + 2);
        v6 = *(_DWORD *)(v5 + 180);
        v7 = v5 + 176;
        if ( !v6 || LODWORD(i) >= (*(_DWORD *)(v7 + 8) - v6) >> 2 )
          _invalid_parameter_noinfo();
        if ( SLODWORD(v21) >= *(_DWORD *)(*(_DWORD *)(v7 + 4) + 4 * LODWORD(i)) )
          break;
        v8 = *((_DWORD *)this + 2);
        v9 = *(_DWORD *)(v8 + 196);
        v10 = v8 + 192;
        if ( !v9 || v2 >= (*(_DWORD *)(v10 + 8) - v9) / 28 )
          _invalid_parameter_noinfo();
        v19 = COERCE_FLOAT(GameClient::Establishment::GetDummyPoint((void *)(j + *(_DWORD *)(v10 + 4))));
        ++v2;
        std::vector<ModelFrame *>::push_back(&v25, &v19);
        ++LODWORD(v21);
      }
      sub_100063B1((char *)this + 60, &v25);
      v11 = *(_DWORD *)(*((_DWORD *)this + 22) + 300);
      if ( v11 )
      {
        v12 = *((_DWORD *)this + 8);
        if ( !v12 || LODWORD(i) >= (*((_DWORD *)this + 9) - v12) >> 2 )
          _invalid_parameter_noinfo();
        GameClient::Equip::AddShootPoint(
          *(GameClient::Equip **)(*((_DWORD *)this + 8) + 4 * LODWORD(i)),
          *(struct Model **)(v11 + 716));
      }
      v31 = -1;
      std::vector<ModelFrame *>::~vector<ModelFrame *>(&v25);
    }
  }
  v22 = 0.0;
  v23 = 0.0;
  v24 = 0.0;
  qmemcpy(v30, (char *)this + 204, sizeof(v30));
  v13 = (float *)sub_102C0ED0(&v25);
  v22 = *v13;
  v23 = v13[1];
  v14 = v13[2];
  v23 = 0.0;
  v24 = v14;
  sub_100029CD();
  *((float *)this + 84) = sub_102C0C90(&v22);
  v15 = (float *)sub_102C0ED0(v29);
  v22 = *v15;
  v16 = v15[1];
  v25 = v22;
  v23 = v16;
  v17 = v15[2];
  v26 = 0.0;
  v24 = v17;
  v27 = v17;
  sub_100029CD();
  i = 0.0;
  v18 = v23;
  v19 = fabs(v23);
  if ( v19 > 0.001 )
  {
    *(double *)&v29[3] = v26;
    v28 = v25;
    *(double *)v29 = v27;
    v19 = v24 * v27 + v18 * v26 + v22 * v25;
    i = v19;
    v19 = v22 * v22 + v18 * v18 + v24 * v24;
    v19 = sqrt(v19);
    v21 = v19;
    v19 = v26 * v26 + v25 * v25 + v27 * v27;
    v19 = sqrt(v19);
    v19 = i / (v19 * v21);
    v19 = acos(v19);
    i = v19;
    if ( v23 > 0.0 )
      i = 6.283185482025146 - i;
    i = i * 57.29577791868205;
  }
  *((float *)this + 83) = i;
}
