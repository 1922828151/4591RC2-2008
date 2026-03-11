/*
 * func-name: ?CreateFontW@CREDialogResourceManager@@IAEJIM@Z
 * func-address: 0x100a9db0
 * callers: 0x100af790, 0x100af8e0, 0x100b0330, 0x100c5220
 * callees: 0x10064610, 0x1017813a, 0x101a26c0
 */

int __thiscall CREDialogResourceManager::CreateFontW(CREDialogResourceManager *this, unsigned int a2, float a3)
{
  _DWORD *v4; // esi
  int v5; // eax
  int v6; // ecx
  double v7; // st7
  int v8; // eax
  signed int v10; // [esp+18h] [ebp+4h]

  v4 = *(_DWORD **)(*((_DWORD *)this + 5) + 4 * a2);
  v5 = v4[130];
  if ( v5 )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v5 + 8))(v4[130]);
    v4[130] = 0;
  }
  v6 = v4[131];
  if ( -1.0 != a3 )
  {
    v10 = v4[131];
    v6 = (int)((double)*((int *)Canvas::Instance() + 16) / a3 * (double)v10);
  }
  if ( v6 < 4 )
    v6 = 4;
  v7 = (double)(int)v4[133] * 1.2;
  v4[132] = v6;
  v8 = D3DXCreateFontW(*((_DWORD *)this + 8), v6, 0, (__int64)v7, 1, 0, 1, 0, 5, 0, v4, v4 + 130);
  return v8 >= 0 ? 0 : v8;
}
