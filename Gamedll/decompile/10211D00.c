/*
 * func-name: sub_10211D00
 * func-address: 0x10211d00
 * callers: 0x100131e2
 * callees: 0x1000169a, 0x100068e8, 0x1000e56b, 0x10011abd, 0x100147ef, 0x102c9d62
 */

void __stdcall sub_10211D00(Event *a1)
{
  struct BinStream *Stream; // eax
  int v2; // ecx
  int v3; // edx
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  struct BinStream *v7; // eax
  int v8; // ecx
  int v9; // esi
  int v10; // eax
  int v11; // [esp-Ch] [ebp-64h]
  int v12; // [esp-8h] [ebp-60h]
  int v13; // [esp-4h] [ebp-5Ch]
  int v14; // [esp-4h] [ebp-5Ch]
  int v15; // [esp+0h] [ebp-58h]
  int v16; // [esp+0h] [ebp-58h]
  int v17; // [esp+4h] [ebp-54h]
  int v18; // [esp+Ch] [ebp-4Ch]
  _BYTE v19[28]; // [esp+10h] [ebp-48h] BYREF
  _BYTE v20[28]; // [esp+2Ch] [ebp-2Ch] BYREF
  int v21; // [esp+54h] [ebp-4h]

  Stream = Event::GetStream(a1);
  v2 = *((_DWORD *)Stream + 3);
  v3 = v2 + 4;
  if ( (unsigned int)(v2 + 4) > *((_DWORD *)Stream + 2) )
  {
    v4 = v18;
  }
  else
  {
    v4 = *(_DWORD *)(v2 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v3;
  }
  if ( v4 )
  {
    LogPrintf("connect login server failed.");
    std::wstring::wstring(v19, L"CONNECT_ERROR_LOGIN");
    v21 = 0;
    Precacher::GetText(v20, v19);
    LOBYTE(v21) = 2;
    std::wstring::~wstring(v19);
    v5 = CDlgMgr::Instance();
    CDlgMgr::ConfirmMessage(v5);
    v6 = CDlgMgr::Instance();
    CTYDialog::CenterDialog(*(CTYDialog **)(v6 + 20), 1, 1);
    v21 = -1;
    std::wstring::~wstring(v20);
  }
  else
  {
    LogPrintf("connect login server success.");
    v7 = Event::GetStream(a1);
    v8 = *((_DWORD *)v7 + 3);
    if ( (unsigned int)(v8 + 4) > *((_DWORD *)v7 + 2) )
    {
      v9 = v18;
    }
    else
    {
      v9 = *(_DWORD *)(v8 + *((_DWORD *)v7 + 1));
      *((_DWORD *)v7 + 3) = v8 + 4;
    }
    *(_DWORD *)(sub_100068E8(v15, v17) + 4) = v9;
    sub_1000E56B(v9, v16);
    sub_1000169A(v13);
    if ( dword_103B665C )
    {
      v10 = *(_DWORD *)(dword_103B665C + 16);
      if ( !*(_DWORD *)(v10 + 8) )
      {
        v14 = *(_DWORD *)(dword_103B665C + 8);
        sub_10011ABD(v10 + 12, v10 + 40);
        sub_100147EF(v11, v12, v14);
      }
    }
  }
}
