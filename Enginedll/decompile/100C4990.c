/*
 * func-name: ?SetFixedText@CTYChatIME@@QAEXABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z
 * func-address: 0x100c4990
 * callers: none
 * callees: 0x1006ab80, 0x100a5480, 0x100a56d0, 0x100b5280, 0x1017a280
 */

int __thiscall CTYChatIME::SetFixedText(int this, int a2)
{
  int v3; // ebp
  int v4; // eax
  int result; // eax
  int v6; // ebx
  int v7; // edi
  struct CREDialogResourceManager *v8; // eax
  int v9; // edi
  const wchar_t *v10; // ebp
  bool v11; // zf
  int v12; // ebx
  int v13; // eax
  int v14; // edx
  int v15; // eax
  int v16; // edx
  int v17; // edx
  struct tagRECT *v18; // eax
  int v19; // ecx
  LONG v20; // edx
  int v21; // ecx
  int v22; // esi
  _BYTE v23[28]; // [esp+8h] [ebp-44h] BYREF
  _BYTE v24[28]; // [esp+24h] [ebp-28h] BYREF
  int v25; // [esp+48h] [ebp-4h]

  v3 = this + 880;
  std::wstring::operator=(this + 880, a2);
  std::string::string(v23, "  ");
  v25 = 0;
  v4 = sub_1017A280(v24, v23);
  LOBYTE(v25) = 1;
  std::wstring::operator+=(v3, v4);
  LOBYTE(v25) = 0;
  std::wstring::~wstring(v24);
  v25 = -1;
  std::string::~string(v23);
  result = **(_DWORD **)(this + 120);
  if ( result )
  {
    v6 = *(_DWORD *)(this + 112);
    v7 = *(_DWORD *)(result + 4);
    v8 = REGetGlobalDialogResourceManager();
    if ( v8 )
    {
      v9 = *(_DWORD *)(*(_DWORD *)(v6 + 752) + 4 * v7);
      v8 = *(struct CREDialogResourceManager **)(*((_DWORD *)REGetGlobalDialogResourceManager() + 5) + 4 * v9);
    }
    *(_DWORD *)(this + 920) = (*(int (__stdcall **)(_DWORD))(**((_DWORD **)v8 + 130) + 32))(*((_DWORD *)v8 + 130));
    CREEditBox::CUniBuffer::Analyse((CREEditBox::CUniBuffer *)(this + 908));
    if ( *(_DWORD *)(v3 + 24) < 8u )
      v10 = (const wchar_t *)(v3 + 4);
    else
      v10 = *(const wchar_t **)(v3 + 4);
    CREEditBox::CUniBuffer::SetText((CREEditBox::CUniBuffer *)(this + 908), v10);
    v11 = *(_DWORD *)(this + 916) == 0;
    v12 = *(_DWORD *)(this + 916);
    a2 = 0;
    if ( v11
      || (!*(_BYTE *)(this + 924)
       || (result = CREEditBox::CUniBuffer::Analyse((CREEditBox::CUniBuffer *)(this + 908)), result >= 0))
      && (result = CREEditBox::CUniBuffer::_ScriptStringCPtoX(*(void **)(this + 928), v12, 1, &a2), result >= 0) )
    {
      v13 = *(_DWORD *)(this + 168);
      *(_DWORD *)(this + 564) = *(_DWORD *)(this + 164);
      v14 = *(_DWORD *)(this + 172);
      *(_DWORD *)(this + 568) = v13;
      v15 = *(_DWORD *)(this + 176);
      *(_DWORD *)(this + 572) = v14;
      v16 = *(_DWORD *)(this + 560);
      *(_DWORD *)(this + 576) = v15;
      InflateRect((LPRECT)(this + 564), -*(_DWORD *)(this + 556) - 2 * v16 - a2, -(*(_DWORD *)(this + 556) + v16));
      v17 = *(_DWORD *)(this + 168);
      v18 = (struct tagRECT *)(this + 932);
      *(_DWORD *)(this + 932) = *(_DWORD *)(this + 164);
      v19 = *(_DWORD *)(this + 172);
      *(_DWORD *)(this + 936) = v17;
      v20 = *(_DWORD *)(this + 176);
      *(_DWORD *)(this + 940) = v19;
      v21 = *(_DWORD *)(this + 560);
      v22 = *(_DWORD *)(this + 556);
      v18->bottom = v20;
      return InflateRect(v18, -v22 - 2 * v21, -(v22 + v21));
    }
  }
  return result;
}
