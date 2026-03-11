/*
 * func-name: sub_102898F0
 * func-address: 0x102898f0
 * callers: 0x10018f57
 * callees: 0x1000194c, 0x1000460b, 0x1000a3a8, 0x1000ed13, 0x10011a4f, 0x10016cac, 0x10017c29, 0x102c8d6c, 0x102c9d62
 */

void __thiscall sub_102898F0(int this, float a2)
{
  int v3; // eax
  GameClient::GroupManager *v4; // eax
  struct CREElement *Element; // eax
  struct REFontNode *Font; // eax
  int v7; // eax
  int v8; // edi
  const char *v9; // eax
  const wchar_t *v10; // eax
  int v11; // eax
  int *v12; // edx
  int v13; // ebp
  const char *v14; // eax
  const wchar_t *v15; // eax
  int v16; // edi
  const char *v17; // eax
  const wchar_t *v18; // eax
  int v19; // eax
  int v20; // edi
  int v21; // ecx
  int v22; // edi
  GameClient::RobotManager *v23; // eax
  struct GameClient::Robot *Robot; // eax
  struct GameClient::Robot *v25; // ebp
  const char *v26; // eax
  wchar_t v27; // ax
  int v28; // ecx
  int v29; // ecx
  int v30; // ebp
  int v31; // ebx
  struct CREControl *Control; // edi
  int v33; // [esp+98h] [ebp-1E8h]
  int v34; // [esp+9Ch] [ebp-1E4h]
  struct GameClient::LocalCharacter *v35; // [esp+A0h] [ebp-1E0h]
  int v36; // [esp+A0h] [ebp-1E0h]
  char v37; // [esp+BBh] [ebp-1C5h]
  float v38; // [esp+BCh] [ebp-1C4h] BYREF
  int v39; // [esp+C0h] [ebp-1C0h] BYREF
  _BYTE v40[28]; // [esp+C4h] [ebp-1BCh] BYREF
  wchar_t Buffer[200]; // [esp+E0h] [ebp-1A0h] BYREF
  int v42; // [esp+27Ch] [ebp-4h]

  v38 = *(float *)&GSeconds - *(float *)(this + 3908);
  v38 = fabs(v38);
  if ( v38 > 5.0 && *(_BYTE *)(this + 3912) )
  {
    v3 = sub_1000194C(0);
    if ( v3 )
    {
      v35 = (struct GameClient::LocalCharacter *)v3;
      v4 = GameClient::GroupManager::Instance();
      GameClient::GroupManager::RequestCorpGroupInfo(v4, v35);
    }
    *(float *)(this + 3908) = *(float *)&GSeconds;
  }
  if ( *(_DWORD *)(this + 696) == -500 && !*(_BYTE *)(this + 3912) )
  {
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 3916) + 136))(*(_DWORD *)(this + 3916), 0);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 3872) + 136))(*(_DWORD *)(this + 3872), 0);
  }
  if ( !*(_DWORD *)(this + 3940) )
  {
    Element = CREControl::GetElement(*(CREControl **)(this + 3904), 0);
    Font = CREDialog::GetFont((CREDialog *)this, *((_DWORD *)Element + 1));
    if ( Font )
      *(_DWORD *)(this + 3940) = (*(int (__stdcall **)(_DWORD))(**((_DWORD **)Font + 130) + 32))(*((_DWORD *)Font + 130));
  }
  v37 = 0;
  if ( *(_BYTE *)(this + 3913) )
  {
    if ( *(_DWORD *)(this + 3940) )
    {
      v7 = sub_1000194C(0);
      if ( v7 )
      {
        v8 = v7 + 8;
        *(_BYTE *)(this + 3913) = 0;
        v9 = (const char *)std::string::c_str(v7 + 8);
        v10 = atow(v9);
        CREEditBox::CUniBuffer::SetText((CREEditBox::CUniBuffer *)(this + 3928), v10);
        v11 = *(_DWORD *)(this + 3936);
        v39 = 0;
        CREEditBox::CUniBuffer::CPtoX((CREEditBox::CUniBuffer *)(this + 3928), v11, 1, &v39);
        v12 = *(int **)(this + 3904);
        v39 += 30;
        v13 = *v12;
        v34 = v39;
        v14 = (const char *)std::string::c_str(v8);
        v15 = atow(v14);
        (*(void (__thiscall **)(_DWORD, _DWORD, const wchar_t *, int, int))(v13 + 184))(
          *(_DWORD *)(this + 3904),
          0,
          v15,
          v34,
          32);
        v37 = 1;
      }
    }
  }
  if ( *(_BYTE *)(this + 3914) )
  {
    if ( *(_DWORD *)(this + 3940) )
    {
      v16 = sub_1000194C(0);
      if ( v16 )
      {
        std::string::string(v40);
        v33 = *(_DWORD *)(v16 + 52);
        v42 = 0;
        GameClient::GroupManager::Instance();
        if ( (unsigned __int8)GameClient::GroupManager::GetCorpName(v33, (int)v40, 1) )
        {
          *(_BYTE *)(this + 3914) = 0;
          v17 = (const char *)std::string::c_str(v40);
          v18 = atow(v17);
          CREEditBox::CUniBuffer::SetText((CREEditBox::CUniBuffer *)(this + 3928), v18);
          v19 = *(_DWORD *)(this + 3936);
          v39 = 0;
          CREEditBox::CUniBuffer::CPtoX((CREEditBox::CUniBuffer *)(this + 3928), v19, 1, &v39);
          v20 = *(_DWORD *)(this + 3928);
          v21 = *(_DWORD *)(this + 3904);
          v39 += 30;
          (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)v21 + 184))(v21, 1, v20, v39, 32);
          v37 = 1;
        }
        v42 = -1;
        std::string::~string(v40);
      }
    }
  }
  v22 = sub_1000194C(0);
  if ( v22 )
  {
    v36 = *(_DWORD *)(v22 + 292);
    v23 = GameClient::RobotManager::Instance();
    Robot = GameClient::RobotManager::GetRobot(v23, v36);
    v25 = Robot;
    if ( Robot )
    {
      if ( *((_DWORD *)Robot + 231) != *(_DWORD *)(this + 3924) )
      {
        v26 = (const char *)std::string::c_str(v22 + 8);
        v27 = (unsigned __int16)atow(v26);
        sub_10011A4F(Buffer, (size_t)L"%s %d", v27);
        CREEditBox::CUniBuffer::SetText((CREEditBox::CUniBuffer *)(this + 3928), Buffer);
        v28 = *(_DWORD *)(this + 3936);
        v38 = 0.0;
        CREEditBox::CUniBuffer::CPtoX((CREEditBox::CUniBuffer *)(this + 3928), v28, 1, (int *)&v38);
        v29 = *(_DWORD *)(this + 3904);
        LODWORD(v38) += 30;
        (*(void (__thiscall **)(int, _DWORD, wchar_t *, float, int))(*(_DWORD *)v29 + 184))(
          v29,
          0,
          Buffer,
          COERCE_FLOAT(LODWORD(v38)),
          32);
        *(_DWORD *)(this + 3924) = *((_DWORD *)v25 + 231);
      }
    }
  }
  if ( v37 )
  {
    v30 = *((_DWORD *)CRETabPages::GetTabPage(*(CRETabPages **)(this + 3904), 1) + 132);
    v31 = *(_DWORD *)(*((_DWORD *)CRETabPages::GetTabPage(*(CRETabPages **)(this + 3904), 0) + 132) + 104)
        + *(_DWORD *)(v30 + 104)
        + 16;
    Control = CREDialog::GetControl((CREDialog *)this, 13);
    (*(void (__thiscall **)(struct CREControl *, int, _DWORD))(*(_DWORD *)Control + 156))(
      Control,
      v31,
      *((_DWORD *)Control + 25));
    (*(void (__thiscall **)(struct CREControl *, int, _DWORD))(*(_DWORD *)Control + 160))(
      Control,
      665 - v31,
      *((_DWORD *)Control + 27));
    (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 3900) + 156))(
      *(_DWORD *)(this + 3900),
      *((_DWORD *)Control + 24) + 10,
      *((_DWORD *)Control + 25));
    (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 3900) + 160))(
      *(_DWORD *)(this + 3900),
      *((_DWORD *)Control + 26) - 20,
      *((_DWORD *)Control + 27));
  }
  CTYDialog::Tick((CTYDialog *)this, a2);
}
