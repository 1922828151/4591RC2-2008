/*
 * func-name: sub_10294D80
 * func-address: 0x10294d80
 * callers: 0x100192e0
 * callees: 0x10001906, 0x1000a006, 0x1000a83f, 0x10015910, 0x102c9d62
 */

unsigned int __thiscall sub_10294D80(int this, int a2, int a3, int a4, int a5, int a6, int a7, int *a8)
{
  unsigned int v9; // ebp
  unsigned int result; // eax
  int v11; // eax
  int (__thiscall **v12)(_DWORD, int); // edi
  int v13; // eax
  int v14; // eax
  int v15; // edx
  int v16; // ecx
  int v17; // eax
  bool v18; // zf
  struct CREElement *Element; // eax
  struct REFontNode *Font; // eax
  struct REFontNode *v21; // edi
  struct CREElement *v22; // eax
  struct REFontNode *v23; // eax
  int v24; // eax
  const wchar_t *v25; // eax
  int v26; // edi
  int v27; // eax
  int v28; // eax
  const wchar_t *v29; // eax
  int v30; // eax
  int v31; // [esp+14h] [ebp-114h]
  int v32; // [esp+18h] [ebp-110h]
  int i; // [esp+28h] [ebp-100h]
  unsigned int v34; // [esp+2Ch] [ebp-FCh]
  int v35; // [esp+30h] [ebp-F8h]
  int v36; // [esp+38h] [ebp-F0h]
  int v37; // [esp+3Ch] [ebp-ECh] BYREF
  int v38; // [esp+40h] [ebp-E8h] BYREF
  _DWORD v39[14]; // [esp+44h] [ebp-E4h] BYREF
  _BYTE v40[28]; // [esp+7Ch] [ebp-ACh] BYREF
  int v41; // [esp+9Ch] [ebp-8Ch]
  int v42; // [esp+A0h] [ebp-88h]
  int v43; // [esp+A4h] [ebp-84h]
  int v44; // [esp+BCh] [ebp-6Ch]
  int v45; // [esp+C0h] [ebp-68h]
  int v46; // [esp+C8h] [ebp-60h]
  int v47; // [esp+CCh] [ebp-5Ch]
  int v48; // [esp+D0h] [ebp-58h]
  int v49; // [esp+D8h] [ebp-50h]
  int v50; // [esp+DCh] [ebp-4Ch]
  int v51; // [esp+E0h] [ebp-48h]
  int v52; // [esp+E4h] [ebp-44h]
  int v53; // [esp+E8h] [ebp-40h]
  int v54; // [esp+F0h] [ebp-38h]
  int v55; // [esp+F4h] [ebp-34h]
  int v56; // [esp+F8h] [ebp-30h]
  _DWORD v57[7]; // [esp+FCh] [ebp-2Ch] BYREF
  int v58; // [esp+124h] [ebp-4h]

  v9 = 0;
  for ( i = 0; ; i += 60 )
  {
    result = *(_DWORD *)(this + 536);
    if ( !result )
      break;
    result = (int)(*(_DWORD *)(this + 540) - result) / 60;
    if ( v9 >= result )
      break;
    v11 = *(_DWORD *)(this + 536);
    if ( !v11 || v9 >= (*(_DWORD *)(this + 540) - v11) / 60 )
      _invalid_parameter_noinfo();
    if ( *(_DWORD *)(*(_DWORD *)(this + 536) + i + 32) == a2 )
    {
      std::wstring::wstring(v40);
      v41 = 0;
      v42 = 0;
      v43 = 0;
      v46 = 0;
      v47 = 0;
      v48 = 0;
      v58 = 2;
      LOBYTE(v53) = 0;
      v45 = a5;
      std::wstring::operator=(v40, a3);
      v12 = (int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 112) + 20);
      v13 = std::wstring::c_str(a7);
      v14 = (*v12)(*(_DWORD *)(this + 112), v13);
      v15 = a8[1];
      v50 = *a8;
      v16 = a8[3];
      v49 = v14;
      v17 = a8[2];
      v18 = *(_DWORD *)(this + 560) == 0;
      v51 = v15;
      v53 = v16;
      v52 = v17;
      v54 = -1;
      v55 = a7;
      v57[0] = 0;
      v56 = 0;
      if ( v18 )
      {
        Element = CREControl::GetElement((CREControl *)this, 0);
        if ( Element )
        {
          Font = CREDialog::GetFont(*(CREDialog **)(this + 112), *((_DWORD *)Element + 1));
          v21 = Font;
          if ( Font )
          {
            (*(void (__stdcall **)(_DWORD, _DWORD *))(**((_DWORD **)Font + 130) + 24))(*((_DWORD *)Font + 130), v39);
            v44 = v39[0];
            *(_DWORD *)(this + 560) = (*(int (__stdcall **)(_DWORD))(**((_DWORD **)v21 + 130) + 32))(*((_DWORD *)v21 + 130));
            CREEditBox::CUniBuffer::Analyse((CREEditBox::CUniBuffer *)(this + 548));
          }
        }
      }
      else
      {
        v22 = CREControl::GetElement((CREControl *)this, 0);
        if ( v22 )
        {
          v23 = CREDialog::GetFont(*(CREDialog **)(this + 112), *((_DWORD *)v22 + 1));
          if ( v23 )
          {
            (*(void (__stdcall **)(_DWORD, _DWORD *))(**((_DWORD **)v23 + 130) + 24))(*((_DWORD *)v23 + 130), v39);
            v44 = v39[0];
          }
        }
      }
      v36 = *(_DWORD *)(this + 172) - *(_DWORD *)(this + 164);
      v34 = 0;
      if ( sub_1000A83F() )
      {
        v35 = 0;
        do
        {
          CREEditBox::CUniBuffer::Clear((CREEditBox::CUniBuffer *)(this + 548));
          v24 = *(_DWORD *)(a4 + 4);
          if ( !v24 || v34 >= (*(_DWORD *)(a4 + 8) - v24) / 28 )
            _invalid_parameter_noinfo();
          v25 = (const wchar_t *)std::wstring::c_str(v35 + *(_DWORD *)(a4 + 4));
          CREEditBox::CUniBuffer::SetText((CREEditBox::CUniBuffer *)(this + 548), v25);
          std::wstring::wstring(v57);
          v18 = *(_DWORD *)(this + 556) == 0;
          LOBYTE(v58) = 3;
          if ( !v18 )
          {
            do
            {
              if ( (int)CREEditBox::CUniBuffer::XtoCP((CREEditBox::CUniBuffer *)(this + 548), v36, &v38, &v37) < 0 )
                break;
              v26 = v38;
              if ( !v37 )
                v26 = v38 - 1;
              std::wstring::operator=(v57, *(_DWORD *)(this + 548));
              v27 = std::wstring::substr(v57, v39, 0, v26);
              LOBYTE(v58) = 4;
              sub_1000A006(v27);
              LOBYTE(v58) = 3;
              std::wstring::~wstring(v39);
              v28 = std::wstring::substr(v57, v39, v26, std::wstring::npos);
              LOBYTE(v58) = 5;
              v29 = (const wchar_t *)std::wstring::c_str(v28);
              CREEditBox::CUniBuffer::SetText((CREEditBox::CUniBuffer *)(this + 548), v29);
              LOBYTE(v58) = 3;
              std::wstring::~wstring(v39);
            }
            while ( *(_DWORD *)(this + 556) );
          }
          LOBYTE(v58) = 2;
          std::wstring::~wstring(v57);
          v35 += 28;
          ++v34;
        }
        while ( v34 < sub_1000A83F() );
      }
      v30 = *(_DWORD *)(this + 536);
      if ( !v30 || v9 >= (*(_DWORD *)(this + 540) - v30) / 60 )
        _invalid_parameter_noinfo();
      sub_10001906((int)v40);
      v58 = -1;
      return sub_10015910(v31, v32);
    }
    ++v9;
  }
  return result;
}
