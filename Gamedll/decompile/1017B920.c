/*
 * func-name: ?updateTimeCount@Robot@GameClient@@IAEXXZ_0
 * func-address: 0x1017b920
 * callers: 0x10005aec
 * callees: 0x10002275, 0x10006a19, 0x10009d13, 0x1000cf86, 0x100195e7, 0x102c9d62, 0x102c9fe0
 */

void __thiscall GameClient::Robot::updateTimeCount(GameClient::Robot *this)
{
  int v2; // ecx
  double v3; // st7
  double v4; // st6
  double v5; // st7
  double v6; // st5
  double v7; // st5
  int v8; // eax
  double v9; // st5
  double v10; // st5
  double v11; // st5
  int v12; // eax
  double v13; // rt2
  double v14; // st6
  double v15; // st7
  double v16; // st5
  double v17; // rtt
  double v18; // st6
  double v19; // st6
  int v20; // eax
  double v21; // rt0
  double v22; // st6
  double v23; // st5
  double v24; // st6
  double v25; // st6
  char v26; // [esp-2Ch] [ebp-E0h] BYREF
  int v27; // [esp-28h] [ebp-DCh]
  int v28; // [esp-24h] [ebp-D8h]
  int v29; // [esp-20h] [ebp-D4h]
  int v30; // [esp-1Ch] [ebp-D0h]
  int v31; // [esp-18h] [ebp-CCh]
  int v32; // [esp-14h] [ebp-C8h]
  int v33; // [esp-10h] [ebp-C4h]
  int v34; // [esp-Ch] [ebp-C0h]
  int v35; // [esp-8h] [ebp-BCh]
  int v36; // [esp-4h] [ebp-B8h]
  float v37; // [esp+0h] [ebp-B4h]
  int v38; // [esp+4h] [ebp-B0h]
  float v39; // [esp+8h] [ebp-ACh]
  int v40; // [esp+Ch] [ebp-A8h]
  float v41; // [esp+20h] [ebp-94h]
  float v42; // [esp+24h] [ebp-90h]
  float v43; // [esp+28h] [ebp-8Ch]
  float v44; // [esp+2Ch] [ebp-88h]
  float v45; // [esp+30h] [ebp-84h]
  _BYTE v46[28]; // [esp+34h] [ebp-80h] BYREF
  _BYTE v47[28]; // [esp+50h] [ebp-64h] BYREF
  int v48[7]; // [esp+6Ch] [ebp-48h] BYREF
  int v49[7]; // [esp+88h] [ebp-2Ch] BYREF
  int v50; // [esp+B0h] [ebp-4h]

  if ( GameClient::WorldObject::IsLocal(this) )
  {
    v2 = *((_DWORD *)this + 90);
    v3 = 0.0;
    if ( v2 )
    {
      if ( *((float *)this + 100) >= 0.0 )
        *((float *)this + 100) = *((float *)this + 100) - GDeltaTime;
      if ( v2 == 1 && *((float *)this + 101) >= 0.0 )
      {
        v41 = *((float *)this + 101) - GDeltaTime;
        v24 = v41;
        *((float *)this + 101) = v41;
        if ( v24 < 0.0 )
        {
          v40 = 1;
          GameClient::Robot::Dead(this, *((float *)this + 100));
          v3 = 0.0;
        }
      }
    }
    else
    {
      if ( (*((_BYTE *)this + 368) & 1) != 0 )
      {
        v4 = 0.0;
        v5 = 10.0;
        if ( *((float *)this + 95) > 0.0 )
        {
          v41 = *((float *)this + 95) - GDeltaTime;
          v6 = v41;
          *((float *)this + 95) = v41;
          if ( v6 <= 0.0 )
            *((float *)this + 95) = 0.0;
        }
        v7 = *((float *)this + 95);
        if ( dword_103B613C != (int)v7 )
        {
          dword_103B613C = (int)v7;
          v8 = sub_100195E7((int)v46, (int)v7);
          v50 = 0;
          std::operator+<char>(v48, &unk_10314DF4, v8);
          LOBYTE(v50) = 2;
          std::string::~string(v46);
          v40 = 0;
          v39 = 0.40000001;
          v38 = 1;
          v37 = 0.80000001;
          v42 = 1.0;
          v41 = COERCE_FLOAT(&v26);
          *(float *)&v33 = 1.0;
          v43 = 0.0;
          v44 = 0.0;
          *(float *)&v34 = 0.0;
          *(float *)&v35 = 0.0;
          v45 = 1.0;
          *(float *)&v36 = 1.0;
          std::string::string(&v26, v48);
          LOBYTE(v50) = 3;
          sub_10009D13();
          LOBYTE(v50) = 2;
          sub_10002275(v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40);
          v50 = -1;
          std::string::~string(v48);
          v5 = 10.0;
          v4 = 0.0;
        }
      }
      else
      {
        if ( *((float *)this + 95) < 10.0 )
        {
          v41 = *((float *)this + 95) + GDeltaTime;
          v9 = v41;
          *((float *)this + 95) = v41;
          if ( v9 > 10.0 )
            *((float *)this + 95) = 10.0;
        }
        v4 = 0.0;
        v5 = 10.0;
      }
      if ( (*((_DWORD *)this + 92) & 0x10) != 0 )
      {
        if ( v4 < *((float *)this + 96) )
        {
          v41 = *((float *)this + 96) - GDeltaTime;
          v10 = v41;
          *((float *)this + 96) = v41;
          if ( v10 <= v4 )
            *((float *)this + 96) = v4;
        }
        v11 = *((float *)this + 96);
        if ( dword_103B6138 != (int)v11 )
        {
          dword_103B6138 = (int)v11;
          v12 = sub_100195E7((int)v46, (int)v11);
          v50 = 4;
          std::operator+<char>(v48, &unk_10314E08, v12);
          LOBYTE(v50) = 6;
          std::string::~string(v46);
          v40 = 0;
          v39 = 0.40000001;
          v38 = 1;
          v37 = 0.80000001;
          v42 = 1.0;
          v41 = COERCE_FLOAT(&v26);
          *(float *)&v33 = 1.0;
          v43 = 0.0;
          v44 = 0.0;
          *(float *)&v34 = 0.0;
          *(float *)&v35 = 0.0;
          v45 = 1.0;
          *(float *)&v36 = 1.0;
          std::string::string(&v26, v48);
          LOBYTE(v50) = 7;
          sub_10009D13();
          LOBYTE(v50) = 6;
          sub_10002275(v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40);
          v50 = -1;
          std::string::~string(v48);
          v5 = 10.0;
          v4 = 0.0;
        }
      }
      else
      {
        v13 = v4;
        v14 = v5;
        v15 = v13;
        if ( v14 > *((float *)this + 96) )
        {
          v41 = *((float *)this + 96) + GDeltaTime;
          v16 = v41;
          *((float *)this + 96) = v41;
          if ( v16 > v14 )
            *((float *)this + 96) = v14;
        }
        v17 = v14;
        v4 = v15;
        v5 = v17;
      }
      if ( (*((_DWORD *)this + 92) & 8) == 0 || (*((_DWORD *)this + 27) & *((_DWORD *)this + 93)) != 0 )
      {
        v21 = v4;
        v22 = v5;
        v3 = v21;
        if ( v22 > *((float *)this + 94) )
        {
          v41 = *((float *)this + 94) + GDeltaTime;
          v23 = v41;
          *((float *)this + 94) = v41;
          if ( v23 > v22 )
            *((float *)this + 94) = v22;
        }
      }
      else
      {
        v3 = v4;
        if ( v4 < *((float *)this + 94) )
        {
          v41 = *((float *)this + 94) - GDeltaTime;
          v18 = v41;
          *((float *)this + 94) = v41;
          if ( v18 <= v3 )
            *((float *)this + 94) = v3;
        }
        v19 = *((float *)this + 94);
        if ( dword_103B6134 != (int)v19 )
        {
          dword_103B6134 = (int)v19;
          v20 = sub_100195E7((int)v47, (int)v19);
          v50 = 8;
          std::operator+<char>(v49, &unk_10314E1C, v20);
          LOBYTE(v50) = 10;
          std::string::~string(v47);
          v40 = 0;
          v39 = 0.40000001;
          v38 = 1;
          v37 = 0.80000001;
          v42 = 1.0;
          v41 = COERCE_FLOAT(&v26);
          *(float *)&v33 = 1.0;
          v43 = 0.0;
          v44 = 0.0;
          *(float *)&v34 = 0.0;
          *(float *)&v35 = 0.0;
          v45 = 1.0;
          *(float *)&v36 = 1.0;
          std::string::string(&v26, v49);
          LOBYTE(v50) = 11;
          sub_10009D13();
          LOBYTE(v50) = 10;
          sub_10002275(v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40);
          v50 = -1;
          std::string::~string(v49);
          v3 = 0.0;
        }
      }
      if ( (*((_DWORD *)this + 92) & 4) != 0 && v3 <= *((float *)this + 102) )
        *((float *)this + 102) = *((float *)this + 102) - GDeltaTime;
    }
    if ( v3 < *((float *)this + 103) )
    {
      v41 = *((float *)this + 103) - GDeltaTime;
      v25 = v41;
      *((float *)this + 103) = v41;
      if ( v25 <= v3 )
        *((float *)this + 103) = v3;
    }
  }
}
