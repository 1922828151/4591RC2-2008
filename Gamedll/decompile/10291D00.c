/*
 * func-name: sub_10291D00
 * func-address: 0x10291d00
 * callers: 0x100066a9
 * callees: 0x102c9d62
 */

int __thiscall sub_10291D00(int this, int a2, int a3)
{
  int v3; // ebx
  struct CREElement *Element; // eax
  struct REFontNode *Font; // eax
  struct CREElement *v7; // eax
  struct REFontNode *v8; // eax
  const wchar_t *v9; // eax
  bool v10; // zf
  int v11; // ebp
  int v12; // eax
  const wchar_t *v13; // eax
  int v15; // [esp+30h] [ebp-8Ch]
  int v16; // [esp+34h] [ebp-88h] BYREF
  int v17; // [esp+38h] [ebp-84h] BYREF
  _DWORD v18[7]; // [esp+3Ch] [ebp-80h] BYREF
  _DWORD v19[14]; // [esp+58h] [ebp-64h] BYREF
  _BYTE v20[28]; // [esp+90h] [ebp-2Ch] BYREF
  int v21; // [esp+B8h] [ebp-4h]

  v3 = 0;
  v15 = 0;
  if ( !*(_DWORD *)(this + 560) )
  {
    Element = CREControl::GetElement((CREControl *)this, 0);
    if ( Element )
    {
      Font = CREDialog::GetFont(*(CREDialog **)(this + 112), *((_DWORD *)Element + 1));
      if ( Font )
      {
        *(_DWORD *)(this + 560) = (*(int (__stdcall **)(_DWORD))(**((_DWORD **)Font + 130) + 32))(*((_DWORD *)Font + 130));
        CREEditBox::CUniBuffer::Analyse((CREEditBox::CUniBuffer *)(this + 548));
      }
    }
  }
  v7 = CREControl::GetElement((CREControl *)this, 0);
  if ( v7 )
  {
    v8 = CREDialog::GetFont(*(CREDialog **)(this + 112), *((_DWORD *)v7 + 1));
    if ( v8 )
    {
      (*(void (__stdcall **)(_DWORD, _DWORD *))(**((_DWORD **)v8 + 130) + 24))(*((_DWORD *)v8 + 130), v19);
      v15 = v19[0];
    }
  }
  CREEditBox::CUniBuffer::Clear((CREEditBox::CUniBuffer *)(this + 548));
  v9 = (const wchar_t *)std::wstring::c_str(a2);
  CREEditBox::CUniBuffer::SetText((CREEditBox::CUniBuffer *)(this + 548), v9);
  std::wstring::wstring(v20);
  v10 = *(_DWORD *)(this + 556) == 0;
  v21 = 0;
  if ( !v10 )
  {
    do
    {
      if ( (int)CREEditBox::CUniBuffer::XtoCP((CREEditBox::CUniBuffer *)(this + 548), a3, &v17, &v16) < 0 )
        break;
      v11 = v17;
      if ( !v16 )
        v11 = v17 + 1;
      std::wstring::operator=(v20, *(_DWORD *)(this + 548));
      v12 = std::wstring::substr(v20, v18, v11, std::wstring::npos);
      LOBYTE(v21) = 1;
      v13 = (const wchar_t *)std::wstring::c_str(v12);
      CREEditBox::CUniBuffer::SetText((CREEditBox::CUniBuffer *)(this + 548), v13);
      LOBYTE(v21) = 0;
      std::wstring::~wstring(v18);
      ++v3;
    }
    while ( *(_DWORD *)(this + 556) );
  }
  v21 = -1;
  std::wstring::~wstring(v20);
  return v3 * (v15 + 3) - 3;
}
