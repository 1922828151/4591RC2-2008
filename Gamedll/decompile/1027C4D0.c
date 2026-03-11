/*
 * func-name: ?RadarMapUIEvent@CRadarMapUI@@CGXPAVCREDialog@@IHPAVCREControl@@IJ@Z_0
 * func-address: 0x1027c4d0
 * callers: 0x100109b0
 * callees: 0x1000194c, 0x100077ed, 0x10007f31, 0x1000b609, 0x1000f6c8, 0x10011568, 0x10013647, 0x100155aa, 0x10017c29, 0x10018f25, 0x102c0750, 0x102c8d66, 0x102c9d62, 0x102c9ea8
 */

void __stdcall CRadarMapUI::RadarMapUIEvent(
        struct CREDialog *a1,
        unsigned int a2,
        int a3,
        struct CREControl *a4,
        unsigned int a5,
        int a6)
{
  int v6; // eax
  int v7; // esi
  int v8; // eax
  const struct BBox *WorldBBox; // eax
  CHotZonePic *v10; // ecx
  CHotZonePic *v11; // ecx
  int PicHeight; // eax
  int v13; // eax
  __int64 v14; // kr00_8
  CDlgMgr *v15; // eax
  const wchar_t *v16; // eax
  const char *v17; // eax
  int v18; // eax
  int v19; // [esp+4h] [ebp-94h]
  double v20; // [esp+18h] [ebp-80h] BYREF
  _BYTE v21[12]; // [esp+20h] [ebp-78h]
  double x; // [esp+2Ch] [ebp-6Ch]
  struct tagPOINT v23; // [esp+34h] [ebp-64h] BYREF
  int v24; // [esp+3Ch] [ebp-5Ch]
  unsigned int v25; // [esp+40h] [ebp-58h]
  _BYTE v26[16]; // [esp+44h] [ebp-54h] BYREF
  float v27; // [esp+54h] [ebp-44h]
  float v28; // [esp+5Ch] [ebp-3Ch]
  float v29; // [esp+60h] [ebp-38h]
  float v30; // [esp+68h] [ebp-30h]
  _BYTE v31[28]; // [esp+6Ch] [ebp-2Ch] BYREF
  int v32; // [esp+94h] [ebp-4h]

  v6 = _RTDynamicCast(a1, 0, &CREDialog `RTTI Type Descriptor', &CRadarMapUI `RTTI Type Descriptor');
  v7 = v6;
  if ( v6 )
  {
    if ( a2 == 24 )
    {
      if ( a5 )
        *(_BYTE *)(v6 + 4091) = 0;
    }
    else if ( a3 )
    {
      if ( a3 == 2 )
      {
        if ( a2 == 513 )
        {
          if ( *(_BYTE *)(v6 + 4124) )
          {
            v25 = HIWORD(a5);
            v24 = (unsigned __int16)a5;
            CHotZonePic::GetRealPoint(*(CHotZonePic **)(v6 + 3896), &v23);
            WorldBBox = CRadarMapUI::GetWorldBBox((CRadarMapUI *)v7);
            sub_100155AA((int)WorldBBox);
            v10 = *(CHotZonePic **)(v7 + 3896);
            v32 = 1;
            x = (double)v23.x;
            HIDWORD(v20) = CHotZonePic::GetPicWidth(v10);
            v11 = *(CHotZonePic **)(v7 + 3896);
            *(float *)&x = x / (double)SHIDWORD(v20);
            *(double *)v21 = (double)v23.y;
            PicHeight = CHotZonePic::GetPicHeight(v11);
            *(_BYTE *)(v7 + 4124) = 0;
            *((float *)&v20 + 1) = *(double *)v21 / (double)PicHeight;
            *(float *)&v21[4] = 0.0;
            *(float *)v21 = (v29 - v27) * *(float *)&x + v27;
            *(float *)&v21[8] = v30 - (v30 - v28) * *((float *)&v20 + 1);
            v13 = GUISystem::Instance(1);
            GUISystem::SetCursor(v13);
            v14 = *(_QWORD *)&v21[4];
            *(_DWORD *)(v7 + 4128) = *(_DWORD *)v21;
            *(_QWORD *)(v7 + 4132) = v14;
            HIDWORD(v20) = 0;
            sub_10007F31(25, (int)&v20 + 4);
            if ( HIDWORD(v20) )
              sub_10011568(15);
            v15 = (CDlgMgr *)CDlgMgr::Instance();
            CDlgMgr::ShowDialog(v15);
            v32 = -1;
            sub_102C0750(v26);
          }
        }
        else if ( a2 == 4352 )
        {
          if ( sub_1000194C(0) )
          {
            sub_100077ED((int)&v20 + 4, 9, 235, COERCE_INT(0.0), 1, 512);
            v32 = 0;
            sub_10018F25((int)&a5);
            j_nullsub_44((int)&v20 + 4);
            v32 = -1;
            if ( HIDWORD(v20) )
              Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)HIDWORD(v20));
          }
        }
      }
      else if ( a3 == 5 )
      {
        v8 = GUISystem::Instance(2);
        GUISystem::SetCursor(v8);
        *(_BYTE *)(v7 + 4124) = 1;
      }
    }
    else if ( a2 == 61440 )
    {
      if ( a5 )
      {
        HIDWORD(v20) = 0;
        sub_10007F31(25, (int)&v20 + 4);
        if ( HIDWORD(v20) )
        {
          v16 = (const wchar_t *)std::wstring::c_str(HIDWORD(v20) + 3904);
          v17 = wtoa(v16);
          std::string::string(v31, v17);
          v32 = 2;
          v18 = sub_1000194C(0);
          if ( v18 )
          {
            v19 = v18;
            GameClient::GroupManager::Instance();
            GameClient::GroupManager::SendCorpCmd(v19, v7 + 4128, (int)v31);
          }
          v32 = -1;
          std::string::~string(v31);
        }
      }
    }
  }
}
