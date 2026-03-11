/*
 * func-name: sub_102604F0
 * func-address: 0x102604f0
 * callers: 0x10009a52
 * callees: 0x1000194c, 0x10004665, 0x100050c9, 0x10008170, 0x1000a3a8, 0x1000d3aa, 0x1000ed13, 0x1000f1dc, 0x10011a4f, 0x10017c29, 0x102c0750, 0x102c8d6c, 0x102c9d62, 0x102c9fe0
 */

int __thiscall sub_102604F0(int this, int a2, float a3)
{
  int v4; // ebx
  int v5; // ebp
  int v6; // eax
  GameClient::GroupManager *v7; // eax
  unsigned int v8; // edi
  int v9; // eax
  int v10; // eax
  _DWORD *v11; // edi
  int v12; // eax
  _DWORD *v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  GUISystem *v17; // eax
  int v18; // eax
  int v19; // ebx
  int v20; // ecx
  int v21; // ebx
  const wchar_t *v22; // eax
  int v23; // eax
  int v24; // ebx
  int v25; // eax
  int v26; // ebx
  unsigned int v27; // edi
  int v28; // edi
  int v29; // ecx
  void (__thiscall *v30)(int, int, int); // edx
  int v31; // ebx
  int v32; // eax
  int v33; // ecx
  unsigned int v34; // ebx
  int v35; // edi
  const char *v36; // eax
  const wchar_t *v37; // eax
  int v38; // eax
  GameClient::RobotManager *v39; // eax
  struct GameClient::Robot *Robot; // eax
  const wchar_t *v41; // eax
  const wchar_t *v42; // eax
  int v43; // edi
  int v44; // eax
  int v45; // ecx
  GUISystem *v46; // eax
  int v47; // eax
  unsigned int v48; // ecx
  unsigned int v49; // edx
  GUISystem *v50; // eax
  int v51; // eax
  int v53; // [esp+164h] [ebp-264h]
  float v54; // [esp+164h] [ebp-264h]
  unsigned int v55; // [esp+168h] [ebp-260h]
  int v56; // [esp+168h] [ebp-260h]
  int yTop; // [esp+180h] [ebp-248h]
  int v58; // [esp+188h] [ebp-240h]
  unsigned int v59; // [esp+18Ch] [ebp-23Ch]
  const struct GameClient::Group *Group; // [esp+190h] [ebp-238h]
  int v61; // [esp+194h] [ebp-234h]
  _DWORD *v62; // [esp+198h] [ebp-230h]
  struct tagRECT v63; // [esp+19Ch] [ebp-22Ch] BYREF
  struct tagRECT rc; // [esp+1ACh] [ebp-21Ch] BYREF
  POINT pt; // [esp+1BCh] [ebp-20Ch] BYREF
  unsigned int v66; // [esp+1C4h] [ebp-204h]
  int v67; // [esp+1C8h] [ebp-200h]
  int v68; // [esp+1CCh] [ebp-1FCh]
  unsigned int v69; // [esp+1D0h] [ebp-1F8h]
  float v70; // [esp+1D4h] [ebp-1F4h]
  int v71; // [esp+1D8h] [ebp-1F0h]
  struct GameClient::Robot *v72; // [esp+1DCh] [ebp-1ECh]
  unsigned int v73; // [esp+1E0h] [ebp-1E8h] BYREF
  unsigned int v74; // [esp+1E4h] [ebp-1E4h]
  int v75; // [esp+1E8h] [ebp-1E0h] BYREF
  int v76; // [esp+1ECh] [ebp-1DCh]
  unsigned int v77; // [esp+1F0h] [ebp-1D8h] BYREF
  unsigned int v78; // [esp+1F4h] [ebp-1D4h]
  int v79; // [esp+1FCh] [ebp-1CCh]
  _BYTE v80[16]; // [esp+200h] [ebp-1C8h] BYREF
  float v81; // [esp+210h] [ebp-1B8h]
  float v82; // [esp+224h] [ebp-1A4h]
  wchar_t Buffer[100]; // [esp+228h] [ebp-1A0h] BYREF
  wchar_t v84[100]; // [esp+2F0h] [ebp-D8h] BYREF
  int v85; // [esp+3C4h] [ebp-4h]

  v4 = *(_DWORD *)(this + 168);
  v5 = *(_DWORD *)(this + 536);
  yTop = v4;
  v6 = sub_1000194C(0);
  v61 = v6;
  Group = 0;
  if ( v6 )
  {
    v55 = *(_DWORD *)(v6 + 216);
    v7 = GameClient::GroupManager::Instance();
    Group = GameClient::GroupManager::GetGroup(v7, v55);
  }
  sub_1000F1DC();
  v85 = 0;
  World::GetWorldBBox((World *)dword_103B8134, (struct BBox *)v80);
  v8 = *(_DWORD *)(this + 540);
  v66 = v8;
  v67 = 44 * v8;
  while ( 1 )
  {
    v9 = *(_DWORD *)(this + 584);
    if ( !v9 || v8 >= (*(_DWORD *)(this + 588) - v9) / 44 || v4 > *(_DWORD *)(this + 176) )
      break;
    v10 = *(_DWORD *)(this + 584);
    if ( !v10 || v8 >= (*(_DWORD *)(this + 588) - v10) / 44 )
      _invalid_parameter_noinfo();
    v11 = (_DWORD *)(v67 + *(_DWORD *)(this + 584));
    v12 = v11[8];
    v62 = v11;
    if ( v12 + 25 > v5 )
    {
      if ( v5 < v12 )
      {
        v4 += v12 - v5;
        yTop = v4;
        v5 = v11[8];
      }
      (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 544) + 156))(
        *(_DWORD *)(this + 544),
        *(_DWORD *)(this + 164),
        v4);
      (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 544) + 160))(
        *(_DWORD *)(this + 544),
        337,
        v11[8] - v5 + 25);
      v13 = *(_DWORD **)(this + 544);
      v14 = *(_DWORD *)(this + 176);
      if ( v13[25] + v13[27] > v14 )
        (*(void (__thiscall **)(_DWORD *, int, int))(*v13 + 160))(v13, 337, v14 - v13[25]);
      *(_BYTE *)(*(_DWORD *)(this + 544) + 536) = 1;
      CSeperateLine::SetBackGroundColor(*(CSeperateLine **)(this + 544), 0x8D77C5D1);
      (*(void (__stdcall **)(int, _DWORD))(**(_DWORD **)(this + 544) + 20))(a2, LODWORD(a3));
      v15 = v11[8];
      if ( v5 < v15 + 23 )
      {
        (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 556) + 156))(
          *(_DWORD *)(this + 556),
          *(_DWORD *)(this + 164) + 211,
          v15 - v5 + v4 + 1);
        SetRect(&rc, *(_DWORD *)(this + 164), v5, *(_DWORD *)(this + 172), v4 - v5 + v11[8] + 23);
        if ( *(_DWORD *)(this + 176) < rc.bottom )
          rc.bottom = *(_DWORD *)(this + 176);
        if ( v61 )
        {
          v16 = *(_DWORD *)(v61 + 216);
          if ( v16 )
          {
            if ( v16 == v11[7] )
            {
              v17 = (GUISystem *)GUISystem::Instance(&pt);
              GUISystem::GetLogicMousePos(v17);
              v18 = *(_DWORD *)(this + 112);
              pt.x -= *(_DWORD *)(v18 + 692);
              pt.y -= *(_DWORD *)(v18 + 696);
              if ( Group && *((_DWORD *)Group + 2) == *(_DWORD *)(v61 + 4) )
              {
                CREStatic::SetText(*(CREStatic **)(this + 556), word_10321288);
                if ( PtInRect((const RECT *)(*(_DWORD *)(this + 556) + 164), pt) && *(_BYTE *)(this + 560) )
                  (*(void (__stdcall **)(int, _DWORD, LONG, LONG, LONG, LONG, int))(**(_DWORD **)(this + 556) + 200))(
                    a2,
                    LODWORD(a3),
                    rc.left,
                    rc.top,
                    rc.right,
                    rc.bottom,
                    5);
                else
                  (*(void (__stdcall **)(int, _DWORD, LONG, LONG, LONG, LONG))(**(_DWORD **)(this + 556) + 16))(
                    a2,
                    LODWORD(a3),
                    rc.left,
                    rc.top,
                    rc.right,
                    rc.bottom);
                v4 = yTop;
              }
              CREStatic::SetText(*(CREStatic **)(this + 556), word_10321290);
              (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 556) + 156))(
                *(_DWORD *)(this + 556),
                *(_DWORD *)(this + 164) + 272,
                v4 - v5 + v11[8] + 1);
              if ( PtInRect((const RECT *)(*(_DWORD *)(this + 556) + 164), pt) && *(_BYTE *)(this + 560) )
                (*(void (__stdcall **)(int, _DWORD, LONG, LONG, LONG, LONG, int))(**(_DWORD **)(this + 556) + 200))(
                  a2,
                  LODWORD(a3),
                  rc.left,
                  rc.top,
                  rc.right,
                  rc.bottom,
                  5);
              else
                (*(void (__stdcall **)(int, _DWORD, LONG, LONG, LONG, LONG))(**(_DWORD **)(this + 556) + 16))(
                  a2,
                  LODWORD(a3),
                  rc.left,
                  rc.top,
                  rc.right,
                  rc.bottom);
            }
          }
        }
      }
      v19 = *(_DWORD *)(this + 568);
      v20 = v11[8];
      if ( v5 < v20 + v19 + (25 - v19) / 2 )
      {
        v21 = yTop + v20 + (25 - v19) / 2 - v5;
        (*(void (__thiscall **)(_DWORD, _DWORD, int, _DWORD))(**(_DWORD **)(this + 548) + 180))(
          *(_DWORD *)(this + 548),
          0,
          -1,
          0);
        v22 = (const wchar_t *)std::wstring::c_str(v11);
        CREStatic::SetText(*(CREStatic **)(this + 548), v22);
        (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 548) + 156))(
          *(_DWORD *)(this + 548),
          *(_DWORD *)(this + 164) + 9,
          v21);
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 548) + 188))(*(_DWORD *)(this + 548), 4);
        (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 548) + 160))(
          *(_DWORD *)(this + 548),
          *(_DWORD *)(this + 172) - *(_DWORD *)(this + 164),
          *(_DWORD *)(this + 568));
        (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 548) + 172))(
          *(_DWORD *)(this + 548),
          *(_DWORD *)(this + 564));
        if ( v21 >= yTop )
        {
          v23 = *(_DWORD *)(this + 176);
          if ( v21 + *(_DWORD *)(this + 568) > v23 )
          {
            (*(void (__stdcall **)(_DWORD, int))(**(_DWORD **)(this + 548) + 160))(
              *(_DWORD *)(*(_DWORD *)(this + 548) + 104),
              v23 - v21);
            (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 548) + 188))(*(_DWORD *)(this + 548), 0);
          }
        }
        else
        {
          (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 548) + 156))(
            *(_DWORD *)(this + 548),
            *(_DWORD *)(*(_DWORD *)(this + 548) + 96),
            v5);
          (*(void (__stdcall **)(_DWORD, int))(**(_DWORD **)(this + 548) + 160))(
            *(_DWORD *)(*(_DWORD *)(this + 548) + 104),
            v21 + *(_DWORD *)(*(_DWORD *)(this + 548) + 108) - v5);
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 548) + 188))(*(_DWORD *)(this + 548), 8);
        }
        (*(void (__stdcall **)(int, _DWORD))(**(_DWORD **)(this + 548) + 20))(a2, LODWORD(a3));
      }
      yTop += *(_DWORD *)(*(_DWORD *)(this + 544) + 108);
      v5 = v11[8] + 25;
    }
    sub_1000D3AA((int)&v75, (int)(v11 + 7));
    v24 = v75;
    v79 = *(_DWORD *)(this + 604);
    if ( !v75 || v75 != this + 600 )
      _invalid_parameter_noinfo();
    if ( v76 != v79 )
    {
      if ( !v24 )
        _invalid_parameter_noinfo();
      if ( v76 == *(_DWORD *)(v24 + 4) )
        _invalid_parameter_noinfo();
      v25 = *(_DWORD *)(v76 + 16);
      v68 = v76 + 12;
      if ( v25 )
      {
        if ( (*(_DWORD *)(v76 + 20) - v25) >> 7 )
        {
          v26 = v11[9];
          if ( v5 < v26 )
          {
            yTop += v26 - v5;
            v5 = v11[9];
          }
          if ( yTop < *(_DWORD *)(this + 176) )
          {
            v27 = (v5 - v26) / 24;
            v59 = v27;
            if ( v27 < sub_100050C9() )
            {
              v28 = 24 * v27;
              v58 = v28;
              v69 = v59 << 7;
              while ( 1 )
              {
                if ( yTop >= *(_DWORD *)(this + 176) )
                  goto LABEL_90;
                v29 = *(_DWORD *)(this + 544);
                v30 = *(void (__thiscall **)(int, int, int))(*(_DWORD *)v29 + 156);
                v53 = *(_DWORD *)(this + 164) + 3;
                v71 = v28 + v26;
                v30(v29, v53, yTop);
                (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 544) + 160))(
                  *(_DWORD *)(this + 544),
                  331,
                  v62[9] - v5 + v28 + 22);
                *(_BYTE *)(*(_DWORD *)(this + 544) + 536) = 1;
                CSeperateLine::SetBackGroundColor(*(CSeperateLine **)(this + 544), 0x3877C5D1u);
                (*(void (__stdcall **)(int, _DWORD))(**(_DWORD **)(this + 544) + 20))(a2, LODWORD(a3));
                v31 = v68;
                v32 = *(_DWORD *)(v68 + 4);
                if ( !v32 || v59 >= (*(_DWORD *)(v68 + 8) - v32) >> 7 )
                  _invalid_parameter_noinfo();
                v33 = *(_DWORD *)(this + 576);
                v34 = v69 + *(_DWORD *)(v31 + 4);
                if ( v5 < v71 + v33 + (25 - v33) / 2 )
                  break;
LABEL_86:
                yTop += *(_DWORD *)(*(_DWORD *)(this + 544) + 108);
                v26 = v62[9];
                v5 = v26 + v28 + 22;
                if ( v59 < sub_100050C9() - 1 && v5 < v26 + v28 + 24 )
                {
                  yTop += v62[9] - (v26 + 22) + 24;
                  v5 = v62[9] + v28 + 24;
                }
                ++v59;
                v69 += 128;
                v28 += 24;
                v58 = v28;
                if ( v59 >= sub_100050C9() )
                  goto LABEL_90;
              }
              v35 = yTop + v71 + (25 - v33) / 2 - v5;
              (*(void (__thiscall **)(_DWORD, _DWORD, int, _DWORD))(**(_DWORD **)(this + 548) + 180))(
                *(_DWORD *)(this + 548),
                0,
                -1,
                0);
              v36 = (const char *)std::string::c_str(v34 + 4);
              v37 = atow(v36);
              CREStatic::SetText(*(CREStatic **)(this + 548), v37);
              (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 548) + 156))(
                *(_DWORD *)(this + 548),
                *(_DWORD *)(this + 164) + 9,
                v35);
              (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 548) + 188))(*(_DWORD *)(this + 548), 4);
              (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 548) + 160))(
                *(_DWORD *)(this + 548),
                *(_DWORD *)(this + 172) - *(_DWORD *)(this + 164),
                *(_DWORD *)(this + 568));
              (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 548) + 172))(
                *(_DWORD *)(this + 548),
                *(_DWORD *)(this + 572));
              if ( v35 >= yTop )
              {
                v38 = *(_DWORD *)(this + 176);
                if ( v35 + *(_DWORD *)(this + 568) > v38 )
                {
                  (*(void (__stdcall **)(_DWORD, int))(**(_DWORD **)(this + 548) + 160))(
                    *(_DWORD *)(*(_DWORD *)(this + 548) + 104),
                    v38 - v35);
                  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 548) + 188))(*(_DWORD *)(this + 548), 0);
                }
              }
              else
              {
                (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 548) + 156))(
                  *(_DWORD *)(this + 548),
                  *(_DWORD *)(*(_DWORD *)(this + 548) + 96),
                  v5);
                (*(void (__stdcall **)(_DWORD, int))(**(_DWORD **)(this + 548) + 160))(
                  *(_DWORD *)(*(_DWORD *)(this + 548) + 104),
                  v35 + *(_DWORD *)(*(_DWORD *)(this + 548) + 108) - v5);
                (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 548) + 188))(*(_DWORD *)(this + 548), 8);
              }
              (*(void (__stdcall **)(int, _DWORD))(**(_DWORD **)(this + 548) + 20))(a2, LODWORD(a3));
              sub_10011A4F(Buffer, (size_t)L"%d/%d", (int)*(float *)(v34 + 44));
              CREStatic::SetText(*(CREStatic **)(this + 548), Buffer);
              (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 548) + 156))(
                *(_DWORD *)(this + 548),
                *(_DWORD *)(this + 164) + 200,
                *(_DWORD *)(*(_DWORD *)(this + 548) + 100));
              (*(void (__stdcall **)(int, _DWORD))(**(_DWORD **)(this + 548) + 20))(a2, LODWORD(a3));
              if ( *(_BYTE *)(v34 + 52) )
              {
                v56 = *(_DWORD *)(v34 + 32);
                v39 = GameClient::RobotManager::Instance();
                Robot = GameClient::RobotManager::GetRobot(v39, v56);
                v72 = Robot;
                if ( Robot )
                {
                  v70 = v82 - *((float *)Robot + 8);
                  v54 = v70;
                  v70 = *((float *)Robot + 6) - v81;
                  sub_10008170(v70, v54, v34 + 72);
                }
                (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 548) + 156))(
                  *(_DWORD *)(this + 548),
                  *(_DWORD *)(this + 164) + 167,
                  *(_DWORD *)(*(_DWORD *)(this + 548) + 100));
                v41 = (const wchar_t *)std::wstring::c_str(v34 + 72);
                CREStatic::SetText(*(CREStatic **)(this + 548), v41);
                (*(void (__stdcall **)(int, _DWORD))(**(_DWORD **)(this + 548) + 20))(a2, LODWORD(a3));
                if ( v72 )
                {
                  sub_10011A4F(v84, (size_t)L"%d/%d", (int)*(float *)(v34 + 44));
                  std::wstring::operator=(v34 + 100, v84);
                }
                v42 = (const wchar_t *)std::wstring::c_str(v34 + 100);
                CREStatic::SetText(*(CREStatic **)(this + 548), v42);
                (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 548) + 156))(
                  *(_DWORD *)(this + 548),
                  *(_DWORD *)(this + 164) + 200,
                  *(_DWORD *)(*(_DWORD *)(this + 548) + 100));
                (*(void (__stdcall **)(int, _DWORD))(**(_DWORD **)(this + 548) + 20))(a2, LODWORD(a3));
              }
              if ( v61 )
              {
                v43 = v71 - v5 + yTop;
                SetRect(&v63, *(_DWORD *)(this + 164), yTop, *(_DWORD *)(this + 172), v43 + 22);
                if ( *(_DWORD *)(this + 176) < v63.bottom )
                  v63.bottom = *(_DWORD *)(this + 176);
                (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 556) + 156))(
                  *(_DWORD *)(this + 556),
                  *(_DWORD *)(this + 164) + 272,
                  v43);
                v44 = *(_DWORD *)(v61 + 4);
                if ( *(_DWORD *)v34 != v44 )
                {
                  v45 = v62[7];
                  if ( v45 )
                  {
                    if ( Group && *((_DWORD *)Group + 2) == v44 && v45 == *(_DWORD *)(v61 + 216) )
                    {
                      CREStatic::SetText(*(CREStatic **)(this + 556), word_103212B8);
                      v50 = (GUISystem *)GUISystem::Instance(&v73);
                      GUISystem::GetLogicMousePos(v50);
                      v51 = *(_DWORD *)(this + 112);
                      v48 = v73 - *(_DWORD *)(v51 + 692);
                      v73 = v48;
                      v49 = v74 - *(_DWORD *)(v51 + 696);
                      v74 = v49;
LABEL_81:
                      if ( PtInRect((const RECT *)(*(_DWORD *)(this + 556) + 164), (POINT)__PAIR64__(v49, v48))
                        && *(_BYTE *)(this + 560) )
                      {
                        (*(void (__stdcall **)(int, _DWORD, LONG, LONG, LONG, LONG, int))(**(_DWORD **)(this + 556) + 200))(
                          a2,
                          LODWORD(a3),
                          v63.left,
                          v63.top,
                          v63.right,
                          v63.bottom,
                          5);
                      }
                      else
                      {
                        (*(void (__stdcall **)(int, _DWORD, LONG, LONG, LONG, LONG))(**(_DWORD **)(this + 556) + 16))(
                          a2,
                          LODWORD(a3),
                          v63.left,
                          v63.top,
                          v63.right,
                          v63.bottom);
                      }
                    }
                  }
                  else if ( !Group || *((_DWORD *)Group + 2) == v44 )
                  {
                    CREStatic::SetText(*(CREStatic **)(this + 556), word_103212B0);
                    v46 = (GUISystem *)GUISystem::Instance(&v77);
                    GUISystem::GetLogicMousePos(v46);
                    v47 = *(_DWORD *)(this + 112);
                    v48 = v77 - *(_DWORD *)(v47 + 692);
                    v77 = v48;
                    v49 = v78 - *(_DWORD *)(v47 + 696);
                    v78 = v49;
                    goto LABEL_81;
                  }
                }
              }
              v28 = v58;
              goto LABEL_86;
            }
          }
        }
      }
    }
LABEL_90:
    ++v66;
    v67 += 44;
    v8 = v66;
    v4 = yTop;
  }
  v85 = -1;
  return sub_102C0750(v80);
}
