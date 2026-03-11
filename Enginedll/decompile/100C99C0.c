/*
 * func-name: ?InsertColumn@CREListCtrl@@QAEXHPB_WHK@Z
 * func-address: 0x100c99c0
 * callers: none
 * callees: 0x100d2d00, 0x100d3d50
 */

void __thiscall CREListCtrl::InsertColumn(
        CREListCtrl *this,
        unsigned int a2,
        const wchar_t *a3,
        int a4,
        unsigned int a5)
{
  unsigned int v6; // eax
  int v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // ebx
  unsigned int v10; // ebx
  int v11[2]; // [esp+10h] [ebp-3Ch] BYREF
  _DWORD v12[3]; // [esp+18h] [ebp-34h] BYREF
  _BYTE v13[28]; // [esp+24h] [ebp-28h] BYREF
  int v14; // [esp+48h] [ebp-4h]

  std::wstring::wstring(v13);
  v12[0] = a4;
  v14 = 0;
  v12[1] = a5;
  std::wstring::operator=(v13, a3);
  v6 = *((_DWORD *)this + 187);
  if ( v6 )
    v6 = (int)(*((_DWORD *)this + 188) - v6) / 40;
  if ( a2 > v6 )
  {
    v7 = *((_DWORD *)this + 187);
    if ( v7 )
      v7 = (*((_DWORD *)this + 188) - v7) / 40;
    if ( (int)(a2 - v7) > 0 )
    {
      v8 = a2 - v7;
      do
      {
        sub_100D3D50((int)this + 744, v12);
        *((_DWORD *)this + 179) += a4;
        --v8;
      }
      while ( v8 );
    }
  }
  v9 = *((_DWORD *)this + 187);
  if ( v9 > *((_DWORD *)this + 188) )
    invalid_parameter_noinfo();
  v11[1] = v9;
  v10 = v9 + 40 * a2;
  if ( v10 > *((_DWORD *)this + 188) || v10 < *((_DWORD *)this + 187) )
    invalid_parameter_noinfo();
  sub_100D2D00((int)v11, (int)this + 744, v10, v12);
  *((_DWORD *)this + 179) += a4;
  v14 = -1;
  std::wstring::~wstring(v13);
}
