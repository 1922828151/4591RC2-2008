/*
 * func-name: ??0CTYDialog@@QAE@XZ
 * func-address: 0x100ccaf0
 * callers: 0x100d8440, 0x1014cc50, 0x1014cfa0, 0x10155af0, 0x1015bb60
 * callees: 0x100cada0, 0x100d35b0, 0x100d36c0, 0x100d37d0, 0x100d39f0, 0x100d5710, 0x100d5750, 0x100d6d20
 */

CTYDialog *__thiscall CTYDialog::CTYDialog(CTYDialog *this)
{
  struct GUISystem *v2; // eax
  CGUIWindow *v3; // eax
  struct GUISystem *v4; // eax
  CGUIWindow *v5; // ecx
  bool v6; // zf
  int v7; // eax
  void (__stdcall *v8)(CTYDialog *, int, int, int, _DWORD, _DWORD); // edx
  int v9; // ecx
  char v11; // [esp-14h] [ebp-60h] BYREF
  int v12; // [esp-10h] [ebp-5Ch]
  int v13; // [esp-Ch] [ebp-58h]
  int v14; // [esp-8h] [ebp-54h]
  int v15; // [esp-4h] [ebp-50h]
  int v16; // [esp+0h] [ebp-4Ch]
  int v17; // [esp+4h] [ebp-48h]
  int v18; // [esp+8h] [ebp-44h]
  CTYDialog *v19; // [esp+1Ch] [ebp-30h]
  char *v20; // [esp+20h] [ebp-2Ch]
  _BYTE v21[28]; // [esp+24h] [ebp-28h] BYREF
  int v22; // [esp+48h] [ebp-4h]

  v19 = this;
  CREDialog::CREDialog(this);
  *(_DWORD *)this = &CTYDialog::`vftable';
  v22 = 0;
  *((_DWORD *)this + 939) = 0;
  *((_DWORD *)this + 940) = 0;
  *((_DWORD *)this + 941) = 0;
  *((_BYTE *)this + 3768) = 0;
  *((_BYTE *)this + 3769) = 0;
  *((_BYTE *)this + 3770) = 0;
  *((_BYTE *)this + 3771) = 0;
  *((_DWORD *)this + 943) = 1;
  *((_DWORD *)this + 944) = 1;
  *((_DWORD *)this + 956) = 0;
  *((_DWORD *)this + 957) = 0;
  *((_DWORD *)this + 958) = 0;
  std::wstring::wstring((char *)this + 3840);
  LOBYTE(v22) = 3;
  *((_DWORD *)this + 959) = 9;
  v2 = GUISystem::Instance();
  v3 = (CGUIWindow *)(*(int (__thiscall **)(struct GUISystem *, CTYDialog *))(*(_DWORD *)v2 + 76))(v2, this);
  if ( v3 )
  {
    if ( CGUIWindow::GetVisible(v3) )
    {
      v4 = GUISystem::Instance();
      v5 = (CGUIWindow *)(*(int (__thiscall **)(struct GUISystem *, CTYDialog *))(*(_DWORD *)v4 + 76))(v4, this);
      if ( v5 )
      {
        v6 = (*((_BYTE *)this + 3836) & 4) == 0;
        v18 = 0;
        if ( v6 )
        {
          CGUIWindow::SetVisible(v5, v18);
        }
        else
        {
          CGUIWindow::SetVisible(v5, v18);
          CTYDialog::m_bModuleDlgEnabled = 0;
        }
        v7 = *((int *)this + 192) > 0 ? **((_DWORD **)this + 191) : 0;
        v8 = (void (__stdcall *)(CTYDialog *, int, int, int, _DWORD, _DWORD))*((_DWORD *)this + 184);
        if ( v8 )
        {
          if ( v7 )
            v9 = *(_DWORD *)(v7 + 136);
          else
            v9 = 0;
          v8(this, 24, v9, v7, 0, 0);
        }
      }
    }
  }
  std::string::string(v21, "DialogID");
  v18 = 0;
  v20 = &v11;
  LOBYTE(v22) = 4;
  std::string::string(&v11, &unk_101C5344);
  sub_100D35B0((int)this + 88, v21, v11, v12, v13, v14, v15, v16, v17, v18);
  LOBYTE(v22) = 3;
  std::string::~string(v21);
  std::string::string(v21, "InitOnStart");
  v18 = 0;
  v20 = &v11;
  LOBYTE(v22) = 5;
  std::string::string(&v11, &unk_101C535C);
  sub_100D36C0((int)this + 3770, v21, v11, v12, v13, v14, v15, v16, v17, v18);
  LOBYTE(v22) = 3;
  std::string::~string(v21);
  std::string::string(v21, "VisibleOnStart");
  v18 = 0;
  v20 = &v11;
  LOBYTE(v22) = 6;
  std::string::string(&v11, &unk_101C5380);
  sub_100D36C0((int)this + 3771, v21, v11, v12, v13, v14, v15, v16, v17, v18);
  LOBYTE(v22) = 3;
  std::string::~string(v21);
  std::string::string(v21, "DialogName");
  v18 = 0;
  v20 = &v11;
  LOBYTE(v22) = 7;
  std::string::string(&v11, &unk_101C53A0);
  sub_100D37D0((int)this + 3840, v21, v11, v12, v13, v14, v15, v16, v17, v18);
  LOBYTE(v22) = 3;
  std::string::~string(v21);
  std::string::string(v21, "PosX");
  v18 = 0;
  v20 = &v11;
  LOBYTE(v22) = 8;
  std::string::string(&v11, &unk_101C53C4);
  sub_100D35B0((int)this + 692, v21, v11, v12, v13, v14, v15, v16, v17, v18);
  LOBYTE(v22) = 3;
  std::string::~string(v21);
  std::string::string(v21, "PosY");
  v18 = 0;
  v20 = &v11;
  LOBYTE(v22) = 9;
  std::string::string(&v11, &unk_101C53D8);
  sub_100D35B0((int)this + 696, v21, v11, v12, v13, v14, v15, v16, v17, v18);
  LOBYTE(v22) = 3;
  std::string::~string(v21);
  std::string::string(v21, "Width");
  v18 = 0;
  v20 = &v11;
  LOBYTE(v22) = 10;
  std::string::string(&v11, &unk_101C53EC);
  sub_100D35B0((int)this + 700, v21, v11, v12, v13, v14, v15, v16, v17, v18);
  LOBYTE(v22) = 3;
  std::string::~string(v21);
  std::string::string(v21, "Height");
  v18 = 0;
  v20 = &v11;
  LOBYTE(v22) = 11;
  std::string::string(&v11, &unk_101C53FC);
  sub_100D35B0((int)this + 704, v21, v11, v12, v13, v14, v15, v16, v17, v18);
  LOBYTE(v22) = 3;
  std::string::~string(v21);
  std::string::string(v21, "DisplayBackGround");
  v18 = 1;
  v20 = &v11;
  LOBYTE(v22) = 12;
  std::string::string(&v11, &unk_101C540C);
  sub_100D36C0((int)this + 62, v21, v11, v12, v13, v14, v15, v16, v17, v18);
  LOBYTE(v22) = 3;
  std::string::~string(v21);
  std::string::string(v21, "BackGroundFile");
  v18 = 1;
  v20 = &v11;
  LOBYTE(v22) = 13;
  std::string::string(&v11, &unk_101C5434);
  sub_100D37D0((int)this + 104, v21, v11, v12, v13, v14, v15, v16, v17, v18);
  LOBYTE(v22) = 3;
  std::string::~string(v21);
  std::string::string(v21, "BackGroundFileRect");
  v18 = 1;
  v20 = &v11;
  LOBYTE(v22) = 14;
  std::string::string(&v11, &unk_101C5458);
  sub_100D39F0((int)this + 132, v21, v11, v12, v13, v14, v15, v16, v17, v18);
  LOBYTE(v22) = 3;
  std::string::~string(v21);
  return this;
}
