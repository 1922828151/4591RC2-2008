/*
 * func-name: ?DoMessageBox@GUISystem@@UAEXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0HH@Z
 * func-address: 0x100d5780
 * callers: none
 * callees: 0x100a32c0, 0x100a9b20, 0x101189f0, 0x1017a280
 */

int __thiscall GUISystem::DoMessageBox(
        _DWORD *this,
        char a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17)
{
  bool v18; // zf
  int v20; // ebp
  struct RenderDevice *v21; // eax
  int v22; // edi
  struct RenderDevice *v23; // eax
  int v24; // eax
  int v25; // eax
  struct CREControl *Control; // eax
  int v27; // eax
  const wchar_t *v28; // eax
  int v29; // ebx
  CREStatic *v30; // ebx
  int v31; // eax
  const wchar_t *v32; // eax
  _DWORD *v33; // ecx
  int v34; // edi
  _BYTE v35[28]; // [esp+4h] [ebp-28h] BYREF
  int v36; // [esp+28h] [ebp-4h]

  v18 = this[3] == 0;
  v36 = 1;
  if ( v18 )
  {
    if ( !byte_11240B49 )
    {
      byte_11240B49 = 1;
      std::string::operator=(&unk_11240B58, &a2);
      std::string::operator=(&unk_11240B74, &a9);
      dword_11240B4C = a16;
      dword_11240B50 = a17;
    }
    std::string::~string(&a2);
    v36 = -1;
    return std::string::~string(&a9);
  }
  else
  {
    v20 = a16;
    if ( a16 == -1 )
    {
      v21 = RenderDevice::Instance();
      v20 = (*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v21 + 296))(v21) / 2;
    }
    v22 = a17;
    if ( a17 == -1 )
    {
      v23 = RenderDevice::Instance();
      v22 = (*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v23 + 300))(v23) / 2;
    }
    v24 = this[3];
    *(_BYTE *)v24 = 1;
    v25 = *(_DWORD *)(v24 + 4);
    if ( v25 )
      *(_BYTE *)(v25 + 87) = 1;
    Control = CREDialog::GetControl(*(CREDialog **)(this[3] + 4), 400);
    (*(void (__thiscall **)(struct CREControl *, int))(*(_DWORD *)Control + 136))(Control, 1);
    v27 = sub_1017A280(v35, &a2);
    LOBYTE(v36) = 2;
    v28 = (const wchar_t *)std::wstring::c_str(v27);
    v29 = *(_DWORD *)(this[3] + 4);
    wcsncpy((wchar_t *)(v29 + 180), v28, 0x100u);
    *(_WORD *)(v29 + 690) = 0;
    LOBYTE(v36) = 1;
    std::wstring::~wstring(v35);
    v30 = CREDialog::GetControl(*(CREDialog **)(this[3] + 4), -1);
    v31 = sub_1017A280(v35, &a9);
    LOBYTE(v36) = 3;
    v32 = (const wchar_t *)std::wstring::c_str(v31);
    CREStatic::SetText(v30, v32);
    LOBYTE(v36) = 1;
    std::wstring::~wstring(v35);
    v33 = *(_DWORD **)(this[3] + 4);
    v34 = v22 - v33[176] / 2;
    v33[173] = v20 - v33[175] / 2;
    v33[174] = v34;
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 60))(this, this[3]);
    byte_11240B48 = 0;
    LOBYTE(v36) = 0;
    std::string::~string(&a2);
    v36 = -1;
    return std::string::~string(&a9);
  }
}
