/*
 * func-name: ?WriteSnapshotToAvatar@Weapon@GameClient@@UAE_NAAVBinStream@@@Z_0
 * func-address: 0x10198060
 * callers: 0x10016374
 * callees: 0x100011ea, 0x10002162, 0x1000aff6, 0x1000b249, 0x1000b5c3, 0x10012940, 0x10012c29, 0x1001436c, 0x100160b8
 */

bool __thiscall GameClient::Weapon::WriteSnapshotToAvatar(GameClient::Weapon *this, struct BinStream *a2)
{
  bool result; // al
  int v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  _DWORD *v17; // eax
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  GameClient::FlyweightManager *v32; // eax
  struct GameClient::Flyweight *Flyweight; // eax
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  int v39; // ecx
  int v40; // ecx
  int v41; // ecx
  int v42; // ecx
  int v43; // ecx
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  _DWORD *v55; // eax
  int v56; // ecx
  int v57; // ecx
  int v58; // ecx
  int v59; // ecx
  int v60; // ecx
  int v61; // ecx
  int v62; // ecx
  int v63; // ecx
  int v64; // ecx
  int v65; // ecx
  int v66; // ecx
  int v67; // ecx
  int v68; // ecx
  int v69; // ecx
  GameClient::FlyweightManager *v70; // eax
  struct GameClient::Flyweight *v71; // eax
  int v72; // [esp-2Ch] [ebp-34h]
  int v73; // [esp-28h] [ebp-30h]
  int v74; // [esp-24h] [ebp-2Ch]
  int v75; // [esp-20h] [ebp-28h]
  int v76; // [esp-1Ch] [ebp-24h]
  int v77; // [esp-18h] [ebp-20h]
  int v78; // [esp-14h] [ebp-1Ch]
  int v79; // [esp-10h] [ebp-18h]
  unsigned int v80; // [esp-Ch] [ebp-14h]
  unsigned int v81; // [esp-Ch] [ebp-14h]
  int v82; // [esp-Ch] [ebp-14h]

  result = GameClient::Equip::WriteSnapshotToAvatar(this, a2);
  if ( result )
  {
    v4 = *((_DWORD *)a2 + 3);
    v5 = *((_DWORD *)this + 2);
    if ( (unsigned int)(v4 + 1) <= *((_DWORD *)a2 + 2) )
    {
      *(_BYTE *)(v5 + 2404) = *(_BYTE *)(v4 + *((_DWORD *)a2 + 1));
      ++*((_DWORD *)a2 + 3);
    }
    v6 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v6 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *(_DWORD *)(v5 + 2112) = *(_DWORD *)(v6 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    v7 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v7 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *(_DWORD *)(v5 + 2116) = *(_DWORD *)(v7 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    v8 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v8 + 1) <= *((_DWORD *)a2 + 2) )
    {
      *(_BYTE *)(v5 + 2120) = *(_BYTE *)(v8 + *((_DWORD *)a2 + 1));
      ++*((_DWORD *)a2 + 3);
    }
    v9 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v9 + 1) <= *((_DWORD *)a2 + 2) )
    {
      *(_BYTE *)(v5 + 2121) = *(_BYTE *)(v9 + *((_DWORD *)a2 + 1));
      ++*((_DWORD *)a2 + 3);
    }
    v10 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v10 + 1) <= *((_DWORD *)a2 + 2) )
    {
      *(_BYTE *)(v5 + 2122) = *(_BYTE *)(v10 + *((_DWORD *)a2 + 1));
      ++*((_DWORD *)a2 + 3);
    }
    v11 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v11 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *(float *)(v5 + 2124) = *(float *)(v11 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    v12 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v12 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *(_DWORD *)(v5 + 2128) = *(_DWORD *)(v12 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    v13 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v13 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *(_DWORD *)(v5 + 2132) = *(_DWORD *)(v13 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    v14 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v14 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *(float *)(v5 + 2136) = *(float *)(v14 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    v15 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v15 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *(_DWORD *)(v5 + 2140) = *(_DWORD *)(v15 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    v16 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v16 + 1) <= *((_DWORD *)a2 + 2) )
    {
      *(_BYTE *)(v5 + 2144) = *(_BYTE *)(v16 + *((_DWORD *)a2 + 1));
      ++*((_DWORD *)a2 + 3);
    }
    sub_100160B8(v5 + 2148);
    v17 = (_DWORD *)sub_100160B8(v5 + 2164);
    v18 = v17[3];
    if ( (unsigned int)(v18 + 4) <= v17[2] )
    {
      *(float *)(v5 + 2180) = *(float *)(v18 + v17[1]);
      v17[3] += 4;
    }
    v19 = v17[3];
    if ( (unsigned int)(v19 + 4) <= v17[2] )
    {
      *(_DWORD *)(v5 + 2236) = *(_DWORD *)(v19 + v17[1]);
      v17[3] += 4;
    }
    v20 = v17[3];
    if ( (unsigned int)(v20 + 4) <= v17[2] )
    {
      *(float *)(v5 + 2232) = *(float *)(v20 + v17[1]);
      v17[3] += 4;
    }
    v21 = v17[3];
    if ( (unsigned int)(v21 + 4) <= v17[2] )
    {
      *(_DWORD *)(v5 + 2236) = *(_DWORD *)(v21 + v17[1]);
      v17[3] += 4;
    }
    v22 = v17[3];
    if ( (unsigned int)(v22 + 4) <= v17[2] )
    {
      *(_DWORD *)(v5 + 2196) = *(_DWORD *)(v22 + v17[1]);
      v17[3] += 4;
    }
    v23 = v17[3];
    if ( (unsigned int)(v23 + 4) <= v17[2] )
    {
      *(float *)(v5 + 2240) = *(float *)(v23 + v17[1]);
      v17[3] += 4;
    }
    v24 = v17[3];
    if ( (unsigned int)(v24 + 4) <= v17[2] )
    {
      *(float *)(v5 + 2200) = *(float *)(v24 + v17[1]);
      v17[3] += 4;
    }
    v25 = v17[3];
    if ( (unsigned int)(v25 + 4) <= v17[2] )
    {
      *(float *)(v5 + 2204) = *(float *)(v25 + v17[1]);
      v17[3] += 4;
    }
    v26 = v17[3];
    if ( (unsigned int)(v26 + 4) <= v17[2] )
    {
      *(float *)(v5 + 2208) = *(float *)(v26 + v17[1]);
      v17[3] += 4;
    }
    v27 = v17[3];
    if ( (unsigned int)(v27 + 4) <= v17[2] )
    {
      *(float *)(v5 + 2212) = *(float *)(v27 + v17[1]);
      v17[3] += 4;
    }
    v28 = v17[3];
    if ( (unsigned int)(v28 + 4) <= v17[2] )
    {
      *(float *)(v5 + 2216) = *(float *)(v28 + v17[1]);
      v17[3] += 4;
    }
    v29 = v17[3];
    if ( (unsigned int)(v29 + 4) <= v17[2] )
    {
      *(float *)(v5 + 2220) = *(float *)(v29 + v17[1]);
      v17[3] += 4;
    }
    v30 = v17[3];
    if ( (unsigned int)(v30 + 4) <= v17[2] )
    {
      *(float *)(v5 + 2224) = *(float *)(v30 + v17[1]);
      v17[3] += 4;
    }
    v31 = v17[3];
    if ( (unsigned int)(v31 + 4) <= v17[2] )
    {
      *(float *)(v5 + 2228) = *(float *)(v31 + v17[1]);
      v17[3] += 4;
    }
    v80 = *(_DWORD *)(v5 + 2112);
    v32 = GameClient::FlyweightManager::Instance();
    Flyweight = GameClient::FlyweightManager::GetFlyweight(v32, v80);
    if ( !Flyweight )
      return 0;
    v34 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v34 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *((_DWORD *)Flyweight + 34) = *(_DWORD *)(v34 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    v35 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v35 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *((_DWORD *)Flyweight + 36) = *(_DWORD *)(v35 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    v36 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v36 + 1) <= *((_DWORD *)a2 + 2) )
    {
      *((_BYTE *)Flyweight + 160) = *(_BYTE *)(v36 + *((_DWORD *)a2 + 1));
      ++*((_DWORD *)a2 + 3);
    }
    v37 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v37 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *((float *)Flyweight + 37) = *(float *)(v37 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    v38 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v38 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *((_DWORD *)Flyweight + 38) = *(_DWORD *)(v38 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    v39 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v39 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *((_DWORD *)Flyweight + 39) = *(_DWORD *)(v39 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    v40 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v40 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *((_DWORD *)Flyweight + 41) = *(_DWORD *)(v40 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    v41 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v41 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *((float *)Flyweight + 42) = *(float *)(v41 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    v42 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v42 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *((float *)Flyweight + 43) = *(float *)(v42 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    v43 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v43 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *((float *)Flyweight + 44) = *(float *)(v43 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    if ( !*(_BYTE *)(v5 + 2404) )
    {
      v44 = *((_DWORD *)a2 + 3);
      if ( (unsigned int)(v44 + 4) <= *((_DWORD *)a2 + 2) )
      {
        *(_DWORD *)(v5 + 2272) = *(_DWORD *)(v44 + *((_DWORD *)a2 + 1));
        *((_DWORD *)a2 + 3) += 4;
      }
      v45 = *((_DWORD *)a2 + 3);
      if ( (unsigned int)(v45 + 4) <= *((_DWORD *)a2 + 2) )
      {
        *(_DWORD *)(v5 + 2276) = *(_DWORD *)(v45 + *((_DWORD *)a2 + 1));
        *((_DWORD *)a2 + 3) += 4;
      }
      v46 = *((_DWORD *)a2 + 3);
      if ( (unsigned int)(v46 + 1) <= *((_DWORD *)a2 + 2) )
      {
        *(_BYTE *)(v5 + 2280) = *(_BYTE *)(v46 + *((_DWORD *)a2 + 1));
        ++*((_DWORD *)a2 + 3);
      }
      v47 = *((_DWORD *)a2 + 3);
      if ( (unsigned int)(v47 + 1) <= *((_DWORD *)a2 + 2) )
      {
        *(_BYTE *)(v5 + 2281) = *(_BYTE *)(v47 + *((_DWORD *)a2 + 1));
        ++*((_DWORD *)a2 + 3);
      }
      v48 = *((_DWORD *)a2 + 3);
      if ( (unsigned int)(v48 + 1) <= *((_DWORD *)a2 + 2) )
      {
        *(_BYTE *)(v5 + 2282) = *(_BYTE *)(v48 + *((_DWORD *)a2 + 1));
        ++*((_DWORD *)a2 + 3);
      }
      v49 = *((_DWORD *)a2 + 3);
      if ( (unsigned int)(v49 + 4) <= *((_DWORD *)a2 + 2) )
      {
        *(float *)(v5 + 2284) = *(float *)(v49 + *((_DWORD *)a2 + 1));
        *((_DWORD *)a2 + 3) += 4;
      }
      v50 = *((_DWORD *)a2 + 3);
      if ( (unsigned int)(v50 + 4) <= *((_DWORD *)a2 + 2) )
      {
        *(_DWORD *)(v5 + 2288) = *(_DWORD *)(v50 + *((_DWORD *)a2 + 1));
        *((_DWORD *)a2 + 3) += 4;
      }
      v51 = *((_DWORD *)a2 + 3);
      if ( (unsigned int)(v51 + 4) <= *((_DWORD *)a2 + 2) )
      {
        *(_DWORD *)(v5 + 2292) = *(_DWORD *)(v51 + *((_DWORD *)a2 + 1));
        *((_DWORD *)a2 + 3) += 4;
      }
      v52 = *((_DWORD *)a2 + 3);
      if ( (unsigned int)(v52 + 4) <= *((_DWORD *)a2 + 2) )
      {
        *(float *)(v5 + 2296) = *(float *)(v52 + *((_DWORD *)a2 + 1));
        *((_DWORD *)a2 + 3) += 4;
      }
      v53 = *((_DWORD *)a2 + 3);
      if ( (unsigned int)(v53 + 4) <= *((_DWORD *)a2 + 2) )
      {
        *(_DWORD *)(v5 + 2300) = *(_DWORD *)(v53 + *((_DWORD *)a2 + 1));
        *((_DWORD *)a2 + 3) += 4;
      }
      v54 = *((_DWORD *)a2 + 3);
      if ( (unsigned int)(v54 + 1) <= *((_DWORD *)a2 + 2) )
      {
        *(_BYTE *)(v5 + 2304) = *(_BYTE *)(v54 + *((_DWORD *)a2 + 1));
        ++*((_DWORD *)a2 + 3);
      }
      sub_100160B8(v5 + 2308);
      v55 = (_DWORD *)sub_100160B8(v5 + 2324);
      v56 = v55[3];
      if ( (unsigned int)(v56 + 4) <= v55[2] )
      {
        *(float *)(v5 + 2340) = *(float *)(v56 + v55[1]);
        v55[3] += 4;
      }
      v57 = v55[3];
      if ( (unsigned int)(v57 + 4) <= v55[2] )
      {
        *(_DWORD *)(v5 + 2396) = *(_DWORD *)(v57 + v55[1]);
        v55[3] += 4;
      }
      v58 = v55[3];
      if ( (unsigned int)(v58 + 4) <= v55[2] )
      {
        *(float *)(v5 + 2392) = *(float *)(v58 + v55[1]);
        v55[3] += 4;
      }
      v59 = v55[3];
      if ( (unsigned int)(v59 + 4) <= v55[2] )
      {
        *(_DWORD *)(v5 + 2396) = *(_DWORD *)(v59 + v55[1]);
        v55[3] += 4;
      }
      v60 = v55[3];
      if ( (unsigned int)(v60 + 4) <= v55[2] )
      {
        *(_DWORD *)(v5 + 2356) = *(_DWORD *)(v60 + v55[1]);
        v55[3] += 4;
      }
      v61 = v55[3];
      if ( (unsigned int)(v61 + 4) <= v55[2] )
      {
        *(float *)(v5 + 2400) = *(float *)(v61 + v55[1]);
        v55[3] += 4;
      }
      v62 = v55[3];
      if ( (unsigned int)(v62 + 4) <= v55[2] )
      {
        *(float *)(v5 + 2360) = *(float *)(v62 + v55[1]);
        v55[3] += 4;
      }
      v63 = v55[3];
      if ( (unsigned int)(v63 + 4) <= v55[2] )
      {
        *(float *)(v5 + 2364) = *(float *)(v63 + v55[1]);
        v55[3] += 4;
      }
      v64 = v55[3];
      if ( (unsigned int)(v64 + 4) <= v55[2] )
      {
        *(float *)(v5 + 2368) = *(float *)(v64 + v55[1]);
        v55[3] += 4;
      }
      v65 = v55[3];
      if ( (unsigned int)(v65 + 4) <= v55[2] )
      {
        *(float *)(v5 + 2372) = *(float *)(v65 + v55[1]);
        v55[3] += 4;
      }
      v66 = v55[3];
      if ( (unsigned int)(v66 + 4) <= v55[2] )
      {
        *(float *)(v5 + 2376) = *(float *)(v66 + v55[1]);
        v55[3] += 4;
      }
      v67 = v55[3];
      if ( (unsigned int)(v67 + 4) <= v55[2] )
      {
        *(float *)(v5 + 2380) = *(float *)(v67 + v55[1]);
        v55[3] += 4;
      }
      v68 = v55[3];
      if ( (unsigned int)(v68 + 4) <= v55[2] )
      {
        *(float *)(v5 + 2384) = *(float *)(v68 + v55[1]);
        v55[3] += 4;
      }
      v69 = v55[3];
      if ( (unsigned int)(v69 + 4) <= v55[2] )
      {
        *(float *)(v5 + 2388) = *(float *)(v69 + v55[1]);
        v55[3] += 4;
      }
      v81 = *(_DWORD *)(v5 + 2272);
      v70 = GameClient::FlyweightManager::Instance();
      v71 = GameClient::FlyweightManager::GetFlyweight(v70, v81);
      if ( !v71 )
        return 0;
      v82 = (int)v71 + 176;
      v79 = (int)v71 + 172;
      v78 = (int)v71 + 168;
      v77 = (int)v71 + 164;
      v76 = (int)v71 + 156;
      v75 = (int)v71 + 152;
      v74 = (int)v71 + 148;
      v73 = (int)v71 + 160;
      v72 = (int)v71 + 144;
      sub_1000B249((int)v71 + 136);
      sub_10002162(v72);
      sub_100011EA(v73);
      sub_1000B5C3(v74);
      sub_10002162(v75);
      sub_10002162(v76);
      sub_1001436C(v77);
      sub_1000B5C3(v78);
      sub_1000B5C3(v79);
      sub_1000B5C3(v82);
    }
    return 1;
  }
  return result;
}
