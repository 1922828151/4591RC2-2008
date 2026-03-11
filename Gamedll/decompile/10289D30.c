/*
 * func-name: sub_10289D30
 * func-address: 0x10289d30
 * callers: 0x10010dc0
 * callees: 0x1000194c, 0x1000460b, 0x10011a4f, 0x10017c29, 0x102c8d6c, 0x102c9d62
 */

void __thiscall sub_10289D30(int this)
{
  int v2; // esi
  CREControl *v3; // ecx
  struct CREElement *Element; // eax
  struct REFontNode *Font; // eax
  const char *v6; // eax
  wchar_t v7; // ax
  int v8; // ecx
  int v9; // ebp
  int v10; // ebp
  struct CREControl *Control; // esi
  int v12; // [esp+38h] [ebp-1F8h]
  int v13; // [esp+58h] [ebp-1D8h] BYREF
  _BYTE v14[8]; // [esp+5Ch] [ebp-1D4h] BYREF
  int v15; // [esp+64h] [ebp-1CCh]
  int v16; // [esp+68h] [ebp-1C8h]
  _BYTE v17[28]; // [esp+74h] [ebp-1BCh] BYREF
  wchar_t Buffer[200]; // [esp+90h] [ebp-1A0h] BYREF
  int v19; // [esp+22Ch] [ebp-4h]

  v2 = sub_1000194C(0);
  if ( v2 )
  {
    std::string::string(v17);
    v12 = *(_DWORD *)(v2 + 52);
    v19 = 0;
    GameClient::GroupManager::Instance();
    if ( (unsigned __int8)GameClient::GroupManager::GetCorpName(v12, (int)v17, 1) )
    {
      *(_BYTE *)(this + 3914) = 0;
      CREEditBox::CUniBuffer::CUniBuffer((CREEditBox::CUniBuffer *)v14, 1);
      v3 = *(CREControl **)(this + 3904);
      LOBYTE(v19) = 1;
      Element = CREControl::GetElement(v3, 0);
      Font = CREDialog::GetFont((CREDialog *)this, *((_DWORD *)Element + 1));
      if ( Font )
        v16 = (*(int (__stdcall **)(_DWORD))(**((_DWORD **)Font + 130) + 32))(*((_DWORD *)Font + 130));
      v6 = (const char *)std::string::c_str(v17);
      v7 = (unsigned __int16)atow(v6);
      sub_10011A4F(Buffer, (size_t)L"%s %d", v7);
      CREEditBox::CUniBuffer::SetText((CREEditBox::CUniBuffer *)v14, Buffer);
      v13 = 0;
      CREEditBox::CUniBuffer::CPtoX((CREEditBox::CUniBuffer *)v14, v15, 1, &v13);
      v8 = *(_DWORD *)(this + 3904);
      v13 += 30;
      (*(void (__thiscall **)(int, int, wchar_t *, int, int))(*(_DWORD *)v8 + 184))(v8, 1, Buffer, v13, 32);
      v9 = *((_DWORD *)CRETabPages::GetTabPage(*(CRETabPages **)(this + 3904), 1) + 132);
      v10 = *(_DWORD *)(*((_DWORD *)CRETabPages::GetTabPage(*(CRETabPages **)(this + 3904), 0) + 132) + 104)
          + *(_DWORD *)(v9 + 104)
          + 16;
      Control = CREDialog::GetControl((CREDialog *)this, 13);
      (*(void (__thiscall **)(struct CREControl *, int, _DWORD))(*(_DWORD *)Control + 156))(
        Control,
        v10,
        *((_DWORD *)Control + 25));
      (*(void (__thiscall **)(struct CREControl *, int, _DWORD))(*(_DWORD *)Control + 160))(
        Control,
        665 - v10,
        *((_DWORD *)Control + 27));
      (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 3900) + 156))(
        *(_DWORD *)(this + 3900),
        *((_DWORD *)Control + 24) + 10,
        *((_DWORD *)Control + 25));
      (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 3900) + 160))(
        *(_DWORD *)(this + 3900),
        *((_DWORD *)Control + 26) - 20,
        *((_DWORD *)Control + 27));
      LOBYTE(v19) = 0;
      CREEditBox::CUniBuffer::~CUniBuffer((CREEditBox::CUniBuffer *)v14);
    }
    v19 = -1;
    std::string::~string(v17);
  }
}
