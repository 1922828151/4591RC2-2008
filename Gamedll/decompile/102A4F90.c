/*
 * func-name: ?SetQueuePos@CWaitQueueUI@@QAEXHAAV?$vector@KV?$allocator@K@std@@@std@@JK@Z_0
 * func-address: 0x102a4f90
 * callers: 0x1000abf0
 * callees: 0x10010389, 0x10011a4f, 0x1001241d, 0x102c8d6c, 0x102c9d62
 */

int __thiscall CWaitQueueUI::SetQueuePos(int this, int a2, int a3, int Format, int a5)
{
  int v6; // eax
  GameClient::ProductManager *v7; // eax
  struct GameClient::FProductInfo *ProductInfo; // eax
  const char *v9; // eax
  const wchar_t *v10; // eax
  _DWORD v12[7]; // [esp-8h] [ebp-F8h] BYREF
  wchar_t *v13; // [esp+14h] [ebp-DCh]
  _DWORD *v14; // [esp+20h] [ebp-D0h]
  wchar_t Buffer[100]; // [esp+24h] [ebp-CCh] BYREF

  *(_DWORD *)(this + 3888) = a5;
  v6 = *(_DWORD *)(a3 + 4);
  if ( !v6 || !((*(_DWORD *)(a3 + 8) - v6) >> 2) )
    _invalid_parameter_noinfo();
  v13 = **(wchar_t ***)(a3 + 4);
  v7 = GameClient::ProductManager::Instance();
  ProductInfo = GameClient::ProductManager::GetProductInfo(v7, (unsigned int)v13);
  if ( ProductInfo )
  {
    v13 = 0;
    v9 = (const char *)std::string::c_str((char *)ProductInfo + 176);
    v10 = atow(v9);
    v14 = v12;
    std::wstring::wstring(v12, v10);
    CPictureLabel::ChangeTexture(*(_DWORD *)(this + 3872), v12[0], v12[1], v12[2], v12[3], v12[4], v12[5], v12[6], v13);
  }
  if ( a2 )
  {
    if ( a2 != 1 )
      goto LABEL_11;
    v13 = (wchar_t *)">";
  }
  else
  {
    v13 = (wchar_t *)&unk_103246C0;
  }
  CREStatic::SetText(*(CREStatic **)(this + 3884), v13);
LABEL_11:
  if ( Format == -1 )
  {
    v13 = (wchar_t *)&unk_103246E0;
  }
  else
  {
    sub_10011A4F(Buffer, (size_t)&unk_103246CC, Format);
    v13 = Buffer;
  }
  return CREStatic::SetText(*(CREStatic **)(this + 3876), v13);
}
