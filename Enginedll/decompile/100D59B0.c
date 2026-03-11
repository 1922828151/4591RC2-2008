/*
 * func-name: ?DoMessageBoxBlocking@GUISystem@@UAEXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0MP6AXPAX@Z@Z
 * func-address: 0x100d59b0
 * callers: none
 * callees: 0x100a32c0, 0x100a9b20, 0x101189f0, 0x1017a280
 */

int __userpurge GUISystem::DoMessageBoxBlocking@<eax>(
        _DWORD *a1@<ecx>,
        int a2@<ebp>,
        int a3@<edi>,
        char a4,
        char a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        char a11,
        char a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        float a18,
        int a19)
{
  bool v20; // zf
  struct RenderDevice *v22; // eax
  int v23; // edi
  struct RenderDevice *v24; // eax
  int v25; // kr0C_4
  int v26; // eax
  int v27; // eax
  struct CREControl *Control; // eax
  int v29; // eax
  const wchar_t *v30; // eax
  int v31; // ebx
  CREStatic *v32; // ebx
  int v33; // eax
  const wchar_t *v34; // eax
  _DWORD *v35; // ecx
  int v36; // ebp
  _BYTE v37[24]; // [esp+8h] [ebp-24h] BYREF
  int v38; // [esp+28h] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+2Ch] [ebp+0h]

  v20 = a1[3] == 0;
  v38 = 1;
  if ( v20 )
  {
    std::string::~string(&a4);
    v38 = -1;
    return std::string::~string(&a11);
  }
  else
  {
    v22 = RenderDevice::Instance();
    v23 = (*(int (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v22 + 296))(v22, a3, a2) / 2;
    v24 = RenderDevice::Instance();
    v25 = (*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v24 + 300))(v24);
    v26 = a1[3];
    *(_BYTE *)v26 = 1;
    v27 = *(_DWORD *)(v26 + 4);
    if ( v27 )
      *(_BYTE *)(v27 + 87) = 1;
    Control = CREDialog::GetControl(*(CREDialog **)(a1[3] + 4), 400);
    (*(void (__thiscall **)(struct CREControl *, _DWORD))(*(_DWORD *)Control + 136))(Control, 0);
    v29 = sub_1017A280(v37, &a5);
    v30 = (const wchar_t *)std::wstring::c_str(v29);
    v31 = *(_DWORD *)(a1[3] + 4);
    wcsncpy((wchar_t *)(v31 + 180), v30, 0x100u);
    *(_WORD *)(v31 + 690) = 0;
    std::wstring::~wstring(v37);
    v32 = CREDialog::GetControl(*(CREDialog **)(a1[3] + 4), -1);
    v33 = sub_1017A280(v37, &a12);
    v34 = (const wchar_t *)std::wstring::c_str(v33);
    CREStatic::SetText(v32, v34);
    LOBYTE(retaddr) = 1;
    std::wstring::~wstring(v37);
    v35 = *(_DWORD **)(a1[3] + 4);
    v36 = v25 / 2 - v35[176] / 2;
    v35[173] = v23 - v35[175] / 2;
    v35[174] = v36;
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*a1 + 60))(a1, a1[3]);
    byte_11240B48 = 1;
    flt_11240B54 = a18;
    LOBYTE(v38) = 0;
    std::string::~string(&a4);
    v38 = -1;
    return std::string::~string(&a11);
  }
}
