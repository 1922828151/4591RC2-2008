/*
 * func-name: ?InsertItem@CREListCtrl@@QAEXHPB_WKKK@Z
 * func-address: 0x100cdb80
 * callers: none
 * callees: 0x100ae7d0, 0x100d4770, 0x100d5580, 0x100d5630, 0x101a2500
 */

void __thiscall CREListCtrl::InsertItem(
        CREListCtrl *this,
        unsigned int a2,
        const wchar_t *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6)
{
  int v7; // eax
  char *v8; // esi
  unsigned int v9; // eax
  int v10; // eax
  int v11; // eax
  unsigned int v12; // edi
  unsigned int v13; // edi
  unsigned int v14; // edi
  char *v15; // esi
  char *v16; // edi
  int v18[2]; // [esp+14h] [ebp-54h] BYREF
  char v19[4]; // [esp+1Ch] [ebp-4Ch] BYREF
  void *v20; // [esp+20h] [ebp-48h]
  char *v21; // [esp+24h] [ebp-44h]
  int v22; // [esp+28h] [ebp-40h]
  unsigned int v23; // [esp+2Ch] [ebp-3Ch]
  _DWORD v24[3]; // [esp+30h] [ebp-38h] BYREF
  _BYTE v25[28]; // [esp+3Ch] [ebp-2Ch] BYREF
  int v26; // [esp+58h] [ebp-10h]
  int v27; // [esp+64h] [ebp-4h]

  v20 = 0;
  v21 = 0;
  v22 = 0;
  v27 = 0;
  v23 = a6;
  std::wstring::wstring(v25);
  v26 = 0;
  LOBYTE(v27) = 1;
  v24[0] = 0;
  std::wstring::operator=(v25, a3);
  v24[1] = a4;
  v24[2] = a5;
  sub_100D4770(v24);
  v7 = *((_DWORD *)this + 191);
  v8 = (char *)this + 760;
  if ( v7 )
    v9 = (*((_DWORD *)v8 + 2) - v7) / 20;
  else
    v9 = 0;
  if ( a2 <= v9 )
  {
    v13 = *((_DWORD *)v8 + 1);
    if ( v13 > *((_DWORD *)v8 + 2) )
      invalid_parameter_noinfo();
    v18[1] = v13;
    v14 = v13 + 20 * a2;
    if ( v14 > *((_DWORD *)v8 + 2) || v14 < *((_DWORD *)v8 + 1) )
      invalid_parameter_noinfo();
    sub_100D5580((int)v18, (int)v8, v14, v19);
  }
  else
  {
    v10 = *((_DWORD *)v8 + 1);
    if ( v10 )
      v11 = (*((_DWORD *)v8 + 2) - v10) / 20;
    else
      v11 = 0;
    if ( (int)(a2 - v11) > 0 )
    {
      v12 = a2 - v11;
      do
      {
        sub_100D5630((int)v8, v19);
        --v12;
      }
      while ( v12 );
    }
  }
  CREListCtrl::ResetScrollBar(this);
  LOBYTE(v27) = 0;
  std::wstring::~wstring(v25);
  v15 = (char *)v20;
  v27 = -1;
  if ( v20 )
  {
    v16 = v21;
    if ( v20 != v21 )
    {
      do
      {
        std::wstring::~wstring(v15 + 12);
        v15 += 44;
      }
      while ( v15 != v16 );
      v15 = (char *)v20;
    }
    operator delete(v15);
  }
}
