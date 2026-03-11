/*
 * func-name: sub_102537D0
 * func-address: 0x102537d0
 * callers: 0x1001a659
 * callees: 0x100050ba, 0x10009967, 0x10011a4f, 0x10012134, 0x102c8d6c, 0x102c9d62, 0x102c9ea2, 0x102c9ea8, 0x102c9f53
 */

void __stdcall sub_102537D0(Event *a1)
{
  char v1; // bl
  struct BinStream *Stream; // eax
  int v3; // ecx
  int v4; // esi
  struct BinStream *v5; // eax
  int v6; // ecx
  CDlgMgr *v7; // eax
  struct CTYDialog *Dialog; // eax
  const char *v9; // eax
  size_t v10; // eax
  wchar_t v11; // [esp-4h] [ebp-830h]
  _BYTE v12[28]; // [esp+14h] [ebp-818h] BYREF
  _BYTE v13[28]; // [esp+30h] [ebp-7FCh] BYREF
  wchar_t Buffer[1000]; // [esp+4Ch] [ebp-7E0h] BYREF
  int v15; // [esp+828h] [ebp-4h]

  if ( (dword_103B78CC & 1) == 0 )
  {
    dword_103B78CC |= 1u;
    v15 = 0;
    std::wstring::wstring(v13, L"ALARM_RANGE_ALERT");
    LOBYTE(v15) = 1;
    Precacher::GetText(&unk_103B78A8, v13);
    LOBYTE(v15) = 0;
    std::wstring::~wstring(v13);
    atexit(sub_10305FC0);
    v15 = -1;
  }
  v1 = 0;
  Stream = Event::GetStream(a1);
  v3 = *((_DWORD *)Stream + 3);
  if ( (unsigned int)(v3 + 1) <= *((_DWORD *)Stream + 2) )
  {
    v1 = *(_BYTE *)(v3 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v3 + 1;
  }
  v4 = 0;
  v5 = Event::GetStream(a1);
  v6 = *((_DWORD *)v5 + 3);
  if ( (unsigned int)(v6 + 4) <= *((_DWORD *)v5 + 2) )
  {
    v4 = *(_DWORD *)(v6 + *((_DWORD *)v5 + 1));
    *((_DWORD *)v5 + 3) = v6 + 4;
  }
  v7 = (CDlgMgr *)CDlgMgr::Instance();
  Dialog = CDlgMgr::GetDialog(v7);
  if ( _RTDynamicCast(Dialog, 0, &CTYDialog `RTTI Type Descriptor', &CAlarmMessageUI `RTTI Type Descriptor') )
  {
    if ( v1 )
    {
      std::string::string(v13);
      v15 = 2;
      Event::GetStream(a1);
      sub_100050BA((int)v13);
      memset(Buffer, 0, sizeof(Buffer));
      v9 = (const char *)std::string::c_str(v13);
      v11 = (unsigned __int16)atow(v9);
      v10 = std::wstring::c_str(&unk_103B78A8);
      sub_10011A4F(Buffer, v10, v11);
      std::wstring::wstring(v12, Buffer);
      LOBYTE(v15) = 3;
      sub_10009967(v4, (int)v12, -65536);
      LOBYTE(v15) = 2;
      std::wstring::~wstring(v12);
      v15 = -1;
      std::string::~string(v13);
    }
    else
    {
      sub_10012134(v4);
    }
  }
}
